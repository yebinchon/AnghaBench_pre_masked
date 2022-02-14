
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int logicalSize; int dataGood; int realSize; scalar_t__ pos; void* data; } ;
typedef TYPE_1__ dynamicPtr ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1 (dynamicPtr * VAR_2, int VAR_3, void *VAR_4)
{

 if (VAR_4 == ((void*)0)) {
  VAR_2->logicalSize = 0;
  VAR_2->dataGood = VAR_0;
  VAR_2->data = FUNC_0(VAR_3);
 } else {
  VAR_2->logicalSize = VAR_3;
  VAR_2->dataGood = VAR_1;
  VAR_2->data = VAR_4;
 }

 VAR_2->realSize = VAR_3;
 VAR_2->dataGood = VAR_1;
 VAR_2->pos = 0;

 return VAR_1;
}
