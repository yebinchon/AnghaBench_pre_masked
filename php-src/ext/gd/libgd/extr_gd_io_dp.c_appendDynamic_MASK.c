
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pos; int realSize; int logicalSize; scalar_t__ data; int freeOK; int dataGood; } ;
typedef TYPE_1__ dynamicPtr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (void*,void const*,int) ;

__attribute__((used)) static int FUNC_2 (dynamicPtr * VAR_2, const void *VAR_3, int VAR_4)
{
 int VAR_5;
 char *VAR_6;

 if (!VAR_2->dataGood) {
  return VAR_0;
 }


 VAR_5 = VAR_2->pos + VAR_4;

 if (VAR_5 > VAR_2->realSize) {

  if (!VAR_2->freeOK) {
   return VAR_0;
  }
  FUNC_0(VAR_2, VAR_5 * 2);
 }




 VAR_6 = (char *) VAR_2->data;
 FUNC_1((void *) (VAR_6 + (VAR_2->pos)), VAR_3, VAR_4);
 VAR_2->pos += VAR_4;

 if (VAR_2->pos > VAR_2->logicalSize) {
  VAR_2->logicalSize = VAR_2->pos;
 }

 return VAR_1;
}
