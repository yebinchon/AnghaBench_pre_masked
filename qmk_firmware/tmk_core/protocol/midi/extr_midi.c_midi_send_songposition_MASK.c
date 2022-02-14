
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int (* send_func ) (TYPE_1__*,int,int ,int,int) ;} ;
typedef TYPE_1__ MidiDevice ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int ,int,int) ;

void FUNC_1(MidiDevice* VAR_1, uint16_t VAR_2) { VAR_1->send_func(VAR_1, 3, VAR_0, VAR_2 & 0x7F, (VAR_2 >> 7) & 0x7F); }
