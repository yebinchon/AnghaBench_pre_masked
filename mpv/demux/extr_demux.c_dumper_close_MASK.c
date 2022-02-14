
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demux_internal {scalar_t__ dumper_status; int * dumper; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct demux_internal *VAR_2)
{
    if (VAR_2->dumper)
        FUNC_0(VAR_2->dumper);
    VAR_2->dumper = ((void*)0);
    if (VAR_2->dumper_status == VAR_1)
        VAR_2->dumper_status = VAR_0;
}
