
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ hue; int sat; } ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 TYPE_1__* VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (scalar_t__,int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ,int *) ;

uint32_t FUNC_3(uint32_t VAR_4) {


    uint8_t VAR_5 = FUNC_0(VAR_4);

    if (VAR_5 < VAR_3 && !(VAR_2[VAR_5].hue == 0 && VAR_2[VAR_5].hue == 0))
        FUNC_1(VAR_2[VAR_5].hue, VAR_2[VAR_5].sat, VAR_0, &VAR_1[1]);
    else
        FUNC_2(0, 0, 0, &VAR_1[1]);

    return VAR_4;
}
