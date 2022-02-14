
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_4__ {scalar_t__ hProcess; scalar_t__ hControlPipe; scalar_t__ hToken; int * hProfile; int ImageListEntry; } ;
typedef TYPE_1__* PSERVICE_IMAGE ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int VAR_2 ;
 int FUNC_6 (int *,int *) ;

VOID
FUNC_7(PSERVICE_IMAGE VAR_3)
{
    FUNC_1("ScmRemoveServiceImage() called\n");




    FUNC_4(&VAR_3->ImageListEntry);


    if (VAR_3->hProcess != VAR_1)
        FUNC_0(VAR_3->hProcess);


    if (VAR_3->hControlPipe != VAR_1)
        FUNC_0(VAR_3->hControlPipe);


    if (VAR_3->hProfile != ((void*)0))
    {
        FUNC_5(VAR_3->hToken, VAR_2);
        FUNC_6(VAR_3->hToken, VAR_3->hProfile);
        FUNC_5(VAR_3->hToken, VAR_0);
    }


    if (VAR_3->hToken != ((void*)0))
        FUNC_0(VAR_3->hToken);


    FUNC_3(FUNC_2(), 0, VAR_3);
}
