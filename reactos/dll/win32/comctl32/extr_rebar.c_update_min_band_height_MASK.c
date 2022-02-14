
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cyChild; scalar_t__ hwndChild; int cyHeader; int cyMinBand; } ;
typedef int REBAR_INFO ;
typedef TYPE_1__ REBAR_BAND ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(const REBAR_INFO *VAR_1, REBAR_BAND *VAR_2)
{
    VAR_2->cyMinBand = FUNC_1(VAR_2->cyHeader,
        (VAR_2->hwndChild ? VAR_2->cyChild + FUNC_0(VAR_2) : VAR_0));
}
