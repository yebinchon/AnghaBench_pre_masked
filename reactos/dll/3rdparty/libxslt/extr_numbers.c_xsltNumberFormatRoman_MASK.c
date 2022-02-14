
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xsltNumberDataPtr ;
typedef int xmlBufferPtr ;
struct TYPE_3__ {int groupingCharacterLen; int groupingCharacter; int digitsPerGroup; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,double,int ,int,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(xsltNumberDataPtr VAR_0,
        xmlBufferPtr VAR_1,
        double VAR_2,
        int VAR_3)
{




    if (VAR_2 < 1.0 || VAR_2 > 5000.0) {
        FUNC_1(VAR_1, VAR_2, '0', 1,
                                VAR_0->digitsPerGroup,
                                VAR_0->groupingCharacter,
                                VAR_0->groupingCharacterLen);
        return;
    }




    while (VAR_2 >= 1000.0) {
 FUNC_0(VAR_1, (VAR_3) ? "M" : "m");
 VAR_2 -= 1000.0;
    }
    if (VAR_2 >= 900.0) {
 FUNC_0(VAR_1, (VAR_3) ? "CM" : "cm");
 VAR_2 -= 900.0;
    }
    while (VAR_2 >= 500.0) {
 FUNC_0(VAR_1, (VAR_3) ? "D" : "d");
 VAR_2 -= 500.0;
    }
    if (VAR_2 >= 400.0) {
 FUNC_0(VAR_1, (VAR_3) ? "CD" : "cd");
 VAR_2 -= 400.0;
    }
    while (VAR_2 >= 100.0) {
 FUNC_0(VAR_1, (VAR_3) ? "C" : "c");
 VAR_2 -= 100.0;
    }
    if (VAR_2 >= 90.0) {
 FUNC_0(VAR_1, (VAR_3) ? "XC" : "xc");
 VAR_2 -= 90.0;
    }
    while (VAR_2 >= 50.0) {
 FUNC_0(VAR_1, (VAR_3) ? "L" : "l");
 VAR_2 -= 50.0;
    }
    if (VAR_2 >= 40.0) {
 FUNC_0(VAR_1, (VAR_3) ? "XL" : "xl");
 VAR_2 -= 40.0;
    }
    while (VAR_2 >= 10.0) {
 FUNC_0(VAR_1, (VAR_3) ? "X" : "x");
 VAR_2 -= 10.0;
    }
    if (VAR_2 >= 9.0) {
 FUNC_0(VAR_1, (VAR_3) ? "IX" : "ix");
 VAR_2 -= 9.0;
    }
    while (VAR_2 >= 5.0) {
 FUNC_0(VAR_1, (VAR_3) ? "V" : "v");
 VAR_2 -= 5.0;
    }
    if (VAR_2 >= 4.0) {
 FUNC_0(VAR_1, (VAR_3) ? "IV" : "iv");
 VAR_2 -= 4.0;
    }
    while (VAR_2 >= 1.0) {
 FUNC_0(VAR_1, (VAR_3) ? "I" : "i");
 VAR_2--;
    }
}
