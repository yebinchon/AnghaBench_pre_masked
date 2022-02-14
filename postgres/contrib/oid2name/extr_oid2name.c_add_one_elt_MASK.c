
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int alloc; char** array; int num; } ;
typedef TYPE_1__ eary ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char**,int) ;
 char* FUNC_2 (char*) ;

void
FUNC_3(char *VAR_0, eary *VAR_1)
{
 if (VAR_1->alloc == 0)
 {
  VAR_1 ->alloc = 8;
  VAR_1 ->array = (char **) FUNC_0(8 * sizeof(char *));
 }
 else if (VAR_1->num >= VAR_1->alloc)
 {
  VAR_1 ->alloc *= 2;
  VAR_1 ->array = (char **) FUNC_1(VAR_1->array,
             VAR_1->alloc * sizeof(char *));
 }

 VAR_1 ->array[VAR_1->num] = FUNC_2(VAR_0);
 VAR_1 ->num++;
}
