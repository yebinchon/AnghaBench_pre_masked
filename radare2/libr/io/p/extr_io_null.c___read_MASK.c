
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_4__ {scalar_t__ offset; scalar_t__ size; } ;
typedef TYPE_1__ RIONull ;
typedef TYPE_2__ RIODesc ;
typedef int RIO ;


 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static int FUNC_1(RIO* VAR_0, RIODesc* VAR_1, ut8* VAR_2, int VAR_3) {
 RIONull* VAR_4;
 if (!VAR_1 || !VAR_1->data || !VAR_2) {
  return -1;
 }
 VAR_4 = (RIONull*) VAR_1->data;
 if ((VAR_4->offset + VAR_3) > VAR_4->size) {
  int VAR_5 = VAR_4->size - VAR_4->offset;
  FUNC_0 (VAR_2, 0x00, VAR_5);
  VAR_4->offset = VAR_4->size;
  return VAR_5;
 }
 FUNC_0 (VAR_2, 0x00, VAR_3);
 VAR_4->offset += VAR_3;
 return VAR_3;
}
