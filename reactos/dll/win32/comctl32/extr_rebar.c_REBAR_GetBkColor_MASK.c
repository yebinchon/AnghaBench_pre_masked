
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ clrBk; scalar_t__ clrBtnFace; } ;
typedef TYPE_1__ REBAR_INFO ;
typedef scalar_t__ LRESULT ;
typedef scalar_t__ COLORREF ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;

__attribute__((used)) static inline LRESULT
FUNC_1 (const REBAR_INFO *VAR_1)
{
    COLORREF VAR_2 = VAR_1->clrBk;

    if (VAR_2 == VAR_0)
      VAR_2 = VAR_1->clrBtnFace;

    FUNC_0("background color 0x%06x!\n", VAR_2);

    return VAR_2;
}
