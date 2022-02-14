
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {TYPE_2__* Group; } ;
struct TYPE_4__ {int reg; } ;
struct TYPE_5__ {TYPE_1__ IN; } ;


 TYPE_3__* VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;

uint16_t FUNC_0(void) { return (VAR_0->Group[VAR_1].IN.reg & (1 << VAR_2)) != 0; }
