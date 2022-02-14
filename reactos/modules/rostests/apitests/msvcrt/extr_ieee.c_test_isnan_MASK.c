
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int l; double d; } ;
typedef TYPE_1__ ieee_double ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (double) ;
 int FUNC_1 (int,char*) ;

void FUNC_2(void)
{
    ieee_double VAR_2;

    VAR_2.l = 0xFFFFFFFFFFFFFFFFLL;
    FUNC_1(FUNC_0(VAR_2.d) == VAR_1, "_isnan = FALSE\n");
    VAR_2.l = 0xFFF8000000000001LL;
    FUNC_1(FUNC_0(VAR_2.d) == VAR_1, "_isnan = FALSE\n");
    VAR_2.l = 0xFFF8000000000000LL;
    FUNC_1(FUNC_0(VAR_2.d) == VAR_1, "_isnan = FALSE\n");
    VAR_2.l = 0xFFF7FFFFFFFFFFFFLL;
    FUNC_1(FUNC_0(VAR_2.d) == VAR_1, "_isnan = FALSE\n");
    VAR_2.l = 0xFFF0000000000001LL;
    FUNC_1(FUNC_0(VAR_2.d) == VAR_1, "_isnan = FALSE\n");
    VAR_2.l = 0xFFF0000000000000LL;
    FUNC_1(FUNC_0(VAR_2.d) == VAR_0, "_isnan = TRUE\n");
    VAR_2.l = 0xFFEFFFFFFFFFFFFFLL;
    FUNC_1(FUNC_0(VAR_2.d) == VAR_0, "_isnan = TRUE\n");
    VAR_2.l = 0x8010000000000000LL;
    FUNC_1(FUNC_0(VAR_2.d) == VAR_0, "_isnan = TRUE\n");
    VAR_2.l = 0x800FFFFFFFFFFFFFLL;
    FUNC_1(FUNC_0(VAR_2.d) == VAR_0, "_isnan = TRUE\n");
    VAR_2.l = 0x8000000000000001LL;
    FUNC_1(FUNC_0(VAR_2.d) == VAR_0, "_isnan = TRUE\n");
    VAR_2.l = 0x8000000000000000LL;
    FUNC_1(FUNC_0(VAR_2.d) == VAR_0, "_isnan = TRUE\n");
    VAR_2.l = 0x0000000000000000LL;
    FUNC_1(FUNC_0(VAR_2.d) == VAR_0, "_isnan = TRUE\n");
    VAR_2.l = 0x0000000000000001LL;
    FUNC_1(FUNC_0(VAR_2.d) == VAR_0, "_isnan = TRUE\n");
    VAR_2.l = 0x000FFFFFFFFFFFFFLL;
    FUNC_1(FUNC_0(VAR_2.d) == VAR_0, "_isnan = TRUE\n");
    VAR_2.l = 0x0010000000000000LL;
    FUNC_1(FUNC_0(VAR_2.d) == VAR_0, "_isnan = TRUE\n");
    VAR_2.l = 0x7FEFFFFFFFFFFFFFLL;
    FUNC_1(FUNC_0(VAR_2.d) == VAR_0, "_isnan = TRUE\n");
    VAR_2.l = 0x7FF0000000000000LL;
    FUNC_1(FUNC_0(VAR_2.d) == VAR_0, "_isnan = TRUE\n");
    VAR_2.l = 0x7FF0000000000001LL;
    FUNC_1(FUNC_0(VAR_2.d) == VAR_1, "_isnan = FALSE\n");
    VAR_2.l = 0x7FF7FFFFFFFFFFFFLL;
    FUNC_1(FUNC_0(VAR_2.d) == VAR_1, "_isnan = FALSE\n");
    VAR_2.l = 0x7FF8000000000000LL;
    FUNC_1(FUNC_0(VAR_2.d) == VAR_1, "_isnan = FALSE\n");
    VAR_2.l = 0x7FFFFFFFFFFFFFFFLL;
    FUNC_1(FUNC_0(VAR_2.d) == VAR_1, "_isnan = FALSE\n");


    FUNC_1(FUNC_0(2.387000) == VAR_0, "_isnan = TRUE\n");
}
