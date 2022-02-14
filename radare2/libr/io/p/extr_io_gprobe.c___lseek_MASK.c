
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_4__ {scalar_t__ offset; } ;
typedef TYPE_1__ RIOGprobe ;
typedef TYPE_2__ RIODesc ;
typedef int RIO ;


 scalar_t__ VAR_0 ;




__attribute__((used)) static ut64 FUNC_0 (RIO *VAR_1, RIODesc *VAR_2, ut64 VAR_3, int VAR_4) {
 RIOGprobe *VAR_5;
 if (!VAR_2 || !VAR_2->data) {
  return VAR_3;
 }
 VAR_5 = (RIOGprobe *)VAR_2->data;
 switch (VAR_4) {
 case 128:
  if (VAR_3 >= VAR_0) {
   return VAR_5->offset = VAR_0 - 1;
  }
  return VAR_5->offset = VAR_3;
 case 130:
  if ((VAR_5->offset + VAR_3) >= VAR_0) {
   return VAR_5->offset = VAR_0 - 1;
  }
  return VAR_5->offset += VAR_3;
 case 129:
  return VAR_5->offset = VAR_0 - 1;
 }
 return VAR_3;
}
