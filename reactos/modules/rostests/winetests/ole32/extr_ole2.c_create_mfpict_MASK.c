
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int hMetaFilePict; } ;
struct TYPE_8__ {int xExt; int yExt; int hMF; int mm; } ;
struct TYPE_7__ {int * pUnkForRelease; int tymed; } ;
typedef TYPE_1__ STGMEDIUM ;
typedef TYPE_2__ METAFILEPICT ;
typedef int HDC ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,int) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (int ,int ,int ,int,int) ;
 int VAR_2 ;
 TYPE_4__* FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(STGMEDIUM *VAR_3)
{
    METAFILEPICT *VAR_4;
    HDC VAR_5 = FUNC_1(((void*)0));

    FUNC_5(VAR_5, 0, 0, 100, 200);

    VAR_3->tymed = VAR_2;
    FUNC_6(VAR_3)->hMetaFilePict = FUNC_2(VAR_0, sizeof(METAFILEPICT));
    VAR_4 = FUNC_3(FUNC_6(VAR_3)->hMetaFilePict);
    VAR_4->mm = VAR_1;
    VAR_4->xExt = 100;
    VAR_4->yExt = 200;
    VAR_4->hMF = FUNC_0(VAR_5);
    FUNC_4(FUNC_6(VAR_3)->hMetaFilePict);
    VAR_3->pUnkForRelease = ((void*)0);
}
