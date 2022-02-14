
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
struct TYPE_3__ {long num; struct TYPE_3__* branch; struct TYPE_3__* next; } ;
typedef TYPE_1__ THREADNODE ;


 int FUNC_0 (int *,char*,long) ;
 int FUNC_1 (char*,int,char*,unsigned long) ;

__attribute__((used)) static void FUNC_2(THREADNODE *VAR_0, zval *VAR_1, long *VAR_2, char *VAR_3)
{
 unsigned long VAR_4 = *VAR_2;


 FUNC_1(VAR_3, 25, "%ld.num", VAR_4);

 FUNC_0(VAR_1, VAR_3, VAR_0->num);

 FUNC_1(VAR_3, 25, "%ld.next", VAR_4);
 if(VAR_0->next) {
  (*VAR_2)++;
  FUNC_0(VAR_1, VAR_3, *VAR_2);
  FUNC_2(VAR_0->next, VAR_1, VAR_2, VAR_3);
 } else {
  FUNC_0(VAR_1, VAR_3, 0);
 }

 FUNC_1(VAR_3, 25, "%ld.branch", VAR_4);
 if(VAR_0->branch) {
  (*VAR_2)++;
  FUNC_0(VAR_1, VAR_3, *VAR_2);
  FUNC_2(VAR_0->branch, VAR_1, VAR_2, VAR_3);
 } else {
  FUNC_0(VAR_1, VAR_3, 0);
 }
}
