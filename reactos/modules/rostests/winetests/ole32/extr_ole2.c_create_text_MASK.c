
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int hGlobal; } ;
struct TYPE_5__ {int * pUnkForRelease; int tymed; } ;
typedef TYPE_1__ STGMEDIUM ;
typedef int HGLOBAL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 TYPE_3__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5(STGMEDIUM *VAR_3)
{
    HGLOBAL VAR_4;
    char *VAR_5;

    VAR_4 = FUNC_0(VAR_0|VAR_1, 5);
    VAR_5 = FUNC_1(VAR_4);
    FUNC_4(VAR_5, "test");
    FUNC_2(VAR_4);

    VAR_3->tymed = VAR_2;
    FUNC_3(VAR_3)->hGlobal = VAR_4;
    VAR_3->pUnkForRelease = ((void*)0);
}
