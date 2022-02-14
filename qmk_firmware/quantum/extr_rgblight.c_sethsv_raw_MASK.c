
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int member_2; int member_1; int member_0; } ;
struct TYPE_5__ {int b; int g; int r; } ;
typedef TYPE_1__ RGB ;
typedef int LED_TYPE ;
typedef TYPE_2__ HSV ;


 TYPE_1__ FUNC_0 (TYPE_2__) ;
 int FUNC_1 (int ,int ,int ,int *) ;

void FUNC_2(uint8_t VAR_0, uint8_t VAR_1, uint8_t VAR_2, LED_TYPE *VAR_3) {
    HSV VAR_4 = {VAR_0, VAR_1, VAR_2};
    RGB VAR_5 = FUNC_0(VAR_4);
    FUNC_1(VAR_5.r, VAR_5.g, VAR_5.b, VAR_3);
}
