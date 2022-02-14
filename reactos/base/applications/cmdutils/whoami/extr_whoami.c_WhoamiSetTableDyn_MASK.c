
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t Cols; int ** Content; } ;
typedef TYPE_1__ WhoamiTable ;
typedef int WCHAR ;
typedef size_t UINT ;



void FUNC_0(WhoamiTable *VAR_0, WCHAR *VAR_1, UINT VAR_2, UINT VAR_3)
{
    VAR_0->Content[VAR_2 * VAR_0->Cols + VAR_3] = VAR_1;
}
