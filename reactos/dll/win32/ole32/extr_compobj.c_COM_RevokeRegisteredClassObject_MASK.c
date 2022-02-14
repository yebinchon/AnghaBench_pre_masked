
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int runContext; int classObject; int RpcRegistration; int entry; } ;
typedef TYPE_1__ RegisteredClass ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(RegisteredClass *VAR_1)
{
    FUNC_4(&VAR_1->entry);

    if (VAR_1->runContext & VAR_0)
        FUNC_3(VAR_1->RpcRegistration);

    FUNC_2(VAR_1->classObject);
    FUNC_1(FUNC_0(), 0, VAR_1);
}
