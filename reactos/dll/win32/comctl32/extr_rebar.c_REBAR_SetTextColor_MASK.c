
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int clrText; } ;
typedef TYPE_1__ REBAR_INFO ;
typedef int LRESULT ;
typedef int COLORREF ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static LRESULT
FUNC_1 (REBAR_INFO *VAR_0, COLORREF VAR_1)
{
    COLORREF VAR_2;

    VAR_2 = VAR_0->clrText;
    VAR_0->clrText = VAR_1;

    FUNC_0("text color 0x%06x!\n", VAR_0->clrText);

    return VAR_2;
}
