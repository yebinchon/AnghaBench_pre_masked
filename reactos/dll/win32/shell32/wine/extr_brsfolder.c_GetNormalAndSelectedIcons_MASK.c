
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* iSelectedImage; void* iImage; } ;
typedef TYPE_1__* LPTVITEMW ;
typedef int * LPITEMIDLIST ;
typedef int DWORD ;


 void* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int *,TYPE_1__*) ;
 int * FUNC_3 () ;

__attribute__((used)) static void FUNC_4(LPITEMIDLIST VAR_4, LPTVITEMW VAR_5)
{
    LPITEMIDLIST VAR_6 = ((void*)0);
    DWORD VAR_7;

    FUNC_2("%p %p\n",VAR_4, VAR_5);

    if (!VAR_4)
    {
        VAR_6 = FUNC_3();
        VAR_4 = VAR_6;
    }

    VAR_7 = VAR_1 | VAR_3 | VAR_2;
    VAR_5->iImage = FUNC_0( VAR_4, VAR_7 );

    VAR_7 = VAR_1 | VAR_3 | VAR_2 | VAR_0;
    VAR_5->iSelectedImage = FUNC_0( VAR_4, VAR_7 );

    if (VAR_6)
        FUNC_1( VAR_6 );
}
