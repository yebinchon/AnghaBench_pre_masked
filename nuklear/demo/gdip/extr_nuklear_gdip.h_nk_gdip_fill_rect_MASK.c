
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nk_color {int dummy; } ;
struct TYPE_2__ {int brush; int memory; } ;
typedef unsigned short INT ;


 int FUNC_0 (int ,int ,short,short,unsigned short,unsigned short,int,int) ;
 int FUNC_1 (int ,int ,short,short,unsigned short,unsigned short) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct nk_color) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void
FUNC_4(short VAR_1, short VAR_2, unsigned short VAR_3,
    unsigned short VAR_4, unsigned short VAR_5, struct nk_color VAR_6)
{
    FUNC_2(VAR_0.brush, FUNC_3(VAR_6));
    if (VAR_5 == 0) {
        FUNC_1(VAR_0.memory, VAR_0.brush, VAR_1, VAR_2, VAR_3, VAR_4);
    } else {
        INT VAR_7 = 2 * VAR_5;
        FUNC_1(VAR_0.memory, VAR_0.brush, VAR_1 + VAR_5, VAR_2, VAR_3 - VAR_7, VAR_4);
        FUNC_1(VAR_0.memory, VAR_0.brush, VAR_1, VAR_2 + VAR_5, VAR_5, VAR_4 - VAR_7);
        FUNC_1(VAR_0.memory, VAR_0.brush, VAR_1 + VAR_3 - VAR_5, VAR_2 + VAR_5, VAR_5, VAR_4 - VAR_7);
        FUNC_0(VAR_0.memory, VAR_0.brush, VAR_1, VAR_2, VAR_7, VAR_7, 180, 90);
        FUNC_0(VAR_0.memory, VAR_0.brush, VAR_1 + VAR_3 - VAR_7, VAR_2, VAR_7, VAR_7, 270, 90);
        FUNC_0(VAR_0.memory, VAR_0.brush, VAR_1 + VAR_3 - VAR_7, VAR_2 + VAR_4 - VAR_7, VAR_7, VAR_7, 0, 90);
        FUNC_0(VAR_0.memory, VAR_0.brush, VAR_1, VAR_2 + VAR_4 - VAR_7, VAR_7, VAR_7, 90, 90);
    }
}
