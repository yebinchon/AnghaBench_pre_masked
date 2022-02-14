
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int16_t ;
struct TYPE_2__ {int AC6; int AC5; int MC; int MD; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static uint32_t FUNC_6(void) {
    int16_t VAR_4, VAR_5, VAR_6;

    FUNC_3(VAR_3);
    FUNC_1(VAR_3, VAR_2, VAR_0);
    FUNC_2(VAR_3, 0xF4);
    FUNC_2(VAR_3, 0x2E);
    FUNC_4(VAR_3);


    FUNC_0(4500);

    VAR_4 = FUNC_5(VAR_3, 0xF6);
    VAR_5 = ((VAR_4 - VAR_1.AC6) * VAR_1.AC5) >> 15;
    VAR_6 = (VAR_1.MC << 11)/ (VAR_5 + VAR_1.MD);

    return VAR_5 + VAR_6;
}
