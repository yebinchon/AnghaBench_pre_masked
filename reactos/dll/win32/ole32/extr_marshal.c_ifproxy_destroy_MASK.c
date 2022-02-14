
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifproxy {scalar_t__ proxy; int * chan; int entry; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,struct ifproxy*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,struct ifproxy*) ;
 int FUNC_5 (struct ifproxy*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ifproxy * VAR_0)
{
    FUNC_4("%p\n", VAR_0);



    FUNC_5(VAR_0);

    FUNC_6(&VAR_0->entry);

    if (VAR_0->chan)
    {
        FUNC_2(VAR_0->chan);
        VAR_0->chan = ((void*)0);
    }

    if (VAR_0->proxy) FUNC_3(VAR_0->proxy);

    FUNC_1(FUNC_0(), 0, VAR_0);
}
