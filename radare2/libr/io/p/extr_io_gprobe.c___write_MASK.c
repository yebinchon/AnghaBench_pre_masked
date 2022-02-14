
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_4__ {scalar_t__ offset; int gport; } ;
typedef TYPE_1__ RIOGprobe ;
typedef TYPE_2__ RIODesc ;
typedef int RIO ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int const*,int) ;

__attribute__((used)) static int FUNC_1(RIO *VAR_1, RIODesc *VAR_2, const ut8 *VAR_3, int VAR_4) {
 RIOGprobe *VAR_5;
 int VAR_6;
 int VAR_7 = 0;

 if (!VAR_2 || !VAR_2->data || !VAR_3) {
  return -1;
 }

 VAR_5 = (RIOGprobe *)VAR_2->data;

 if ((VAR_5->offset + VAR_4) > VAR_0) {
  VAR_4 = VAR_0 - VAR_5->offset;
 }

 while (VAR_7 < VAR_4) {
  VAR_6 = FUNC_0 (&VAR_5->gport, VAR_5->offset, VAR_3 + VAR_7, VAR_4 - VAR_7);
  if (VAR_6 <= 0) {
   return -1;
  }
  VAR_5->offset += VAR_6;
  VAR_7 += VAR_6;
 }

 return VAR_4;
}
