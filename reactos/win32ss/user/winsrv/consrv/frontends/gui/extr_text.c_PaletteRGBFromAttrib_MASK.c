
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_9__ {int peBlue; int peGreen; int peRed; } ;
struct TYPE_8__ {TYPE_1__* ActiveBuffer; } ;
struct TYPE_7__ {int * PaletteHandle; } ;
typedef TYPE_2__* PCONSRV_CONSOLE ;
typedef TYPE_3__ PALETTEENTRY ;
typedef int * HPALETTE ;
typedef int COLORREF ;


 int FUNC_0 (int *,int ,int,TYPE_3__*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static COLORREF
FUNC_3(PCONSRV_CONSOLE VAR_0, WORD VAR_1)
{
    HPALETTE VAR_2 = VAR_0->ActiveBuffer->PaletteHandle;
    PALETTEENTRY VAR_3;

    if (VAR_2 == ((void*)0)) return FUNC_2(VAR_0, VAR_1);

    FUNC_0(VAR_2, VAR_1, 1, &VAR_3);
    return FUNC_1(VAR_3.peRed, VAR_3.peGreen, VAR_3.peBlue);
}
