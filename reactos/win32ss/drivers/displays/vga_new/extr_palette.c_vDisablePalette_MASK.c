
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {scalar_t__ pPal; scalar_t__ hpalDefault; } ;
typedef int PVOID ;
typedef TYPE_1__* PPDEV ;
typedef scalar_t__ PPALETTEENTRY ;
typedef scalar_t__ HPALETTE ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;

VOID FUNC_2(PPDEV VAR_0)
{


    if (VAR_0->hpalDefault)
    {
        FUNC_0(VAR_0->hpalDefault);
        VAR_0->hpalDefault = (HPALETTE) 0;
    }







}
