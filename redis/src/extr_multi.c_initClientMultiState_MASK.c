
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cmd_flags; scalar_t__ count; int * commands; } ;
struct TYPE_5__ {TYPE_1__ mstate; } ;
typedef TYPE_2__ client ;



void FUNC_0(client *VAR_0) {
    VAR_0->mstate.commands = ((void*)0);
    VAR_0->mstate.count = 0;
    VAR_0->mstate.cmd_flags = 0;
}
