
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int (* send_func ) (TYPE_1__*,int,int ,int ,int ) ;} ;
typedef TYPE_1__ MidiDevice ;


 int FUNC_0 (TYPE_1__*,int,int ,int ,int ) ;

void FUNC_1(MidiDevice* VAR_0, uint16_t VAR_1, uint8_t VAR_2, uint8_t VAR_3, uint8_t VAR_4) {

    if (VAR_1 > 3) {

    }
    VAR_0->send_func(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
