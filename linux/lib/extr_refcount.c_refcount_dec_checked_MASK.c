
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int refcount_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;

void FUNC_2(refcount_t *VAR_0)
{
 FUNC_0(FUNC_1(VAR_0), "refcount_t: decrement hit 0; leaking memory.\n");
}
