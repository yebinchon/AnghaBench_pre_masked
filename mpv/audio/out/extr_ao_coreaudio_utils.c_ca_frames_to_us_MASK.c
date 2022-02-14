
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float uint32_t ;
struct ao {scalar_t__ samplerate; } ;
typedef float int64_t ;



int64_t FUNC_0(struct ao *VAR_0, uint32_t VAR_1)
{
    return VAR_1 / (float) VAR_0->samplerate * 1e6;
}
