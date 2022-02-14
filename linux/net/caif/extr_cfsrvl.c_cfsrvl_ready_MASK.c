
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfsrvl {int open; } ;


 int VAR_0 ;

bool FUNC_0(struct cfsrvl *VAR_1, int *VAR_2)
{
 if (!VAR_1->open) {
  *VAR_2 = -VAR_0;
  return 0;
 }
 return 1;
}
