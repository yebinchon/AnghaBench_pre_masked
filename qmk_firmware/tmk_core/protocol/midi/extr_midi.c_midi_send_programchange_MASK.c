
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int (* send_func ) (TYPE_1__*,int,int,int,int ) ;} ;
typedef TYPE_1__ MidiDevice ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int,int,int,int ) ;

void FUNC_1(MidiDevice* VAR_2, uint8_t VAR_3, uint8_t VAR_4) { VAR_2->send_func(VAR_2, 2, VAR_1 | (VAR_3 & VAR_0), VAR_4 & 0x7F, 0); }
