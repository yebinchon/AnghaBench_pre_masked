
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double outscale; int resync_limit; int preframes; int feedpool; int feedbuffer; int index_size; scalar_t__ timeout; scalar_t__ icy_interval; scalar_t__ verbose; scalar_t__ doublespeed; scalar_t__ halfspeed; scalar_t__ rva; scalar_t__ down_sample; scalar_t__ force_rate; int flags; } ;
typedef TYPE_1__ mpg123_pars ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(mpg123_pars *VAR_3)
{
 VAR_3->outscale = 1.0;
 VAR_3->flags = 0;



 VAR_3->flags |= VAR_1;

 VAR_3->force_rate = 0;

 VAR_3->down_sample = 0;
 VAR_3->rva = 0;
 VAR_3->halfspeed = 0;
 VAR_3->doublespeed = 0;
 VAR_3->verbose = 0;

 VAR_3->icy_interval = 0;

 VAR_3->timeout = 0;
 VAR_3->resync_limit = 1024;



 VAR_3->preframes = 4;
 FUNC_0(VAR_3);


 VAR_3->feedpool = 5;
 VAR_3->feedbuffer = 4096;

}
