
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int Argb; } ;
struct TYPE_9__ {int Argb; } ;
struct TYPE_12__ {TYPE_2__ newColor; TYPE_1__ oldColor; } ;
struct TYPE_11__ {int Count; int* Entries; } ;
typedef int GpStatus ;
typedef int GpImageAttributes ;
typedef TYPE_3__ ColorPalette ;
typedef TYPE_4__ ColorMap ;
typedef int ARGB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *,TYPE_3__*,int) ;
 int FUNC_5 (int *,int,int ,int,TYPE_4__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(void)
{
    ColorMap VAR_6;
    GpImageAttributes *VAR_7;
    ColorPalette *VAR_8;
    GpStatus VAR_9;

    VAR_9 = FUNC_1(&VAR_7);
    FUNC_6(VAR_4, VAR_9);

    VAR_6.oldColor.Argb = 0xffffff00;
    VAR_6.newColor.Argb = 0xffff00ff;
    VAR_9 = FUNC_5(VAR_7, VAR_0,
        VAR_5, 1, &VAR_6);
    FUNC_6(VAR_4, VAR_9);

    VAR_6.oldColor.Argb = 0xffffff80;
    VAR_6.newColor.Argb = 0xffff80ff;
    VAR_9 = FUNC_5(VAR_7, VAR_2,
        VAR_5, 1, &VAR_6);
    FUNC_6(VAR_4, VAR_9);

    VAR_8 = FUNC_0(sizeof(*VAR_8) + sizeof(ARGB) * 2);
    VAR_8->Count = 0;

    VAR_9 = FUNC_4(VAR_7, VAR_8, VAR_0);
    FUNC_6(VAR_3, VAR_9);

    VAR_8->Count = 3;
    VAR_8->Entries[0] = 0xffffff00;
    VAR_8->Entries[1] = 0xffffff80;
    VAR_8->Entries[2] = 0xffffffff;

    VAR_9 = FUNC_4(VAR_7, VAR_8, VAR_0);
    FUNC_6(VAR_4, VAR_9);
    FUNC_6(0xffff00ff, VAR_8->Entries[0]);
    FUNC_6(0xffffff80, VAR_8->Entries[1]);
    FUNC_6(0xffffffff, VAR_8->Entries[2]);

    VAR_8->Entries[0] = 0xffffff00;
    VAR_8->Entries[1] = 0xffffff80;
    VAR_8->Entries[2] = 0xffffffff;

    VAR_9 = FUNC_4(VAR_7, VAR_8, VAR_1);
    FUNC_6(VAR_4, VAR_9);
    FUNC_6(0xffffff00, VAR_8->Entries[0]);
    FUNC_6(0xffff80ff, VAR_8->Entries[1]);
    FUNC_6(0xffffffff, VAR_8->Entries[2]);

    VAR_9 = FUNC_4(((void*)0), VAR_8, VAR_0);
    FUNC_6(VAR_3, VAR_9);

    VAR_9 = FUNC_4(VAR_7, ((void*)0), VAR_0);
    FUNC_6(VAR_3, VAR_9);

    VAR_9 = FUNC_4(VAR_7, VAR_8, -1);
    FUNC_6(VAR_3, VAR_9);

    VAR_9 = FUNC_4(VAR_7, VAR_8, VAR_2);
    FUNC_6(VAR_3, VAR_9);

    FUNC_3(VAR_8);
    FUNC_2(VAR_7);
}
