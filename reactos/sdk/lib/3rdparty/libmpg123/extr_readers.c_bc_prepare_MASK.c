
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferchain {scalar_t__ pool_fill; int * pool; } ;


 int FUNC_0 (struct bufferchain*) ;
 int FUNC_1 (struct bufferchain*,size_t,size_t) ;

void FUNC_2(struct bufferchain *VAR_0, size_t VAR_1, size_t VAR_2)
{
 FUNC_1(VAR_0, VAR_1, VAR_2);
 VAR_0->pool = ((void*)0);
 VAR_0->pool_fill = 0;
 FUNC_0(VAR_0);
}
