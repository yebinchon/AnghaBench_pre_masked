
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct PcapFile {int end_sec; int start_sec; } ;



void FUNC_0(struct PcapFile *VAR_0, time_t *VAR_1, time_t *VAR_2)
{
    *VAR_1 = VAR_0->start_sec;
    *VAR_2 = VAR_0->end_sec;
}
