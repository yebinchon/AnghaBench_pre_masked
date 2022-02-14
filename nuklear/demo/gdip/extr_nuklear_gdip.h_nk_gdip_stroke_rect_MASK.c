
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nk_color {int dummy; } ;
struct TYPE_2__ {int pen; int memory; } ;
typedef int REAL ;
typedef short INT ;


 int FUNC_0 (int ,int ,short,short,short,short,int,int) ;
 int FUNC_1 (int ,int ,short,short,short,short) ;
 int FUNC_2 (int ,int ,short,short,unsigned short,unsigned short) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct nk_color) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void
FUNC_6(short VAR_1, short VAR_2, unsigned short VAR_3,
    unsigned short VAR_4, unsigned short VAR_5, unsigned short VAR_6, struct nk_color VAR_7)
{
    FUNC_4(VAR_0.pen, (REAL)VAR_6);
    FUNC_3(VAR_0.pen, FUNC_5(VAR_7));
    if (VAR_5 == 0) {
        FUNC_2(VAR_0.memory, VAR_0.pen, VAR_1, VAR_2, VAR_3, VAR_4);
    } else {
        INT VAR_8 = 2 * VAR_5;
        FUNC_0(VAR_0.memory, VAR_0.pen, VAR_1, VAR_2, VAR_8, VAR_8, 180, 90);
        FUNC_1(VAR_0.memory, VAR_0.pen, VAR_1 + VAR_5, VAR_2, VAR_1 + VAR_3 - VAR_5, VAR_2);
        FUNC_0(VAR_0.memory, VAR_0.pen, VAR_1 + VAR_3 - VAR_8, VAR_2, VAR_8, VAR_8, 270, 90);
        FUNC_1(VAR_0.memory, VAR_0.pen, VAR_1 + VAR_3, VAR_2 + VAR_5, VAR_1 + VAR_3, VAR_2 + VAR_4 - VAR_5);
        FUNC_0(VAR_0.memory, VAR_0.pen, VAR_1 + VAR_3 - VAR_8, VAR_2 + VAR_4 - VAR_8, VAR_8, VAR_8, 0, 90);
        FUNC_1(VAR_0.memory, VAR_0.pen, VAR_1, VAR_2 + VAR_5, VAR_1, VAR_2 + VAR_4 - VAR_5);
        FUNC_0(VAR_0.memory, VAR_0.pen, VAR_1, VAR_2 + VAR_4 - VAR_8, VAR_8, VAR_8, 90, 90);
        FUNC_1(VAR_0.memory, VAR_0.pen, VAR_1 + VAR_5, VAR_2 + VAR_4, VAR_1 + VAR_3 - VAR_5, VAR_2 + VAR_4);
    }
}
