
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netpoll {int * dev; } ;


 int FUNC_0 (struct netpoll*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void FUNC_4(struct netpoll *VAR_0)
{
 FUNC_2();
 if (!VAR_0->dev)
  goto out;
 FUNC_0(VAR_0);
 FUNC_1(VAR_0->dev);
 VAR_0->dev = ((void*)0);
out:
 FUNC_3();
}
