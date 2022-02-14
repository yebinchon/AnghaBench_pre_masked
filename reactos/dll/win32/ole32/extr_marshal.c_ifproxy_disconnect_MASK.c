
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifproxy {int * chan; scalar_t__ proxy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ifproxy*) ;

__attribute__((used)) static void FUNC_3(struct ifproxy * VAR_0)
{
    FUNC_2(VAR_0);
    if (VAR_0->proxy) FUNC_1(VAR_0->proxy);

    FUNC_0(VAR_0->chan);
    VAR_0->chan = ((void*)0);
}
