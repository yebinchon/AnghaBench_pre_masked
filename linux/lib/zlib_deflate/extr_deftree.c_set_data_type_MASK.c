
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ data_type; TYPE_1__* dyn_ltree; } ;
typedef TYPE_2__ deflate_state ;
struct TYPE_4__ {scalar_t__ Freq; } ;
typedef scalar_t__ Byte ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_0(
 deflate_state *VAR_3
)
{
    int VAR_4 = 0;
    unsigned VAR_5 = 0;
    unsigned VAR_6 = 0;
    while (VAR_4 < 7) VAR_6 += VAR_3->dyn_ltree[VAR_4++].Freq;
    while (VAR_4 < 128) VAR_5 += VAR_3->dyn_ltree[VAR_4++].Freq;
    while (VAR_4 < VAR_0) VAR_6 += VAR_3->dyn_ltree[VAR_4++].Freq;
    VAR_3->data_type = (Byte)(VAR_6 > (VAR_5 >> 2) ? VAR_2 : VAR_1);
}
