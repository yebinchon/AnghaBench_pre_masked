
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int hEnhMetaFile; } ;
struct TYPE_5__ {int * pUnkForRelease; int tymed; } ;
typedef TYPE_1__ STGMEDIUM ;
typedef int HDC ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int *,int *) ;
 int FUNC_2 (int ,int ,int ,int,int) ;
 int VAR_0 ;
 TYPE_3__* FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(STGMEDIUM *VAR_1)
{
    HDC VAR_2 = FUNC_1(((void*)0), ((void*)0), ((void*)0), ((void*)0));

    FUNC_2(VAR_2, 0, 0, 150, 300);
    VAR_1->tymed = VAR_0;
    FUNC_3(VAR_1)->hEnhMetaFile = FUNC_0(VAR_2);
    VAR_1->pUnkForRelease = ((void*)0);
}
