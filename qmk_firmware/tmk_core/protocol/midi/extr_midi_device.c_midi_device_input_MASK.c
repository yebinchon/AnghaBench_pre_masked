
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_3__ {int input_queue; } ;
typedef TYPE_1__ MidiDevice ;


 int FUNC_0 (int *,size_t) ;

void FUNC_1(MidiDevice* VAR_0, uint8_t VAR_1, uint8_t* VAR_2) {
    uint8_t VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) FUNC_0(&VAR_0->input_queue, VAR_2[VAR_3]);
}
