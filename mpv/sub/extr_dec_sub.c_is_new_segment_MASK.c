
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demux_packet {scalar_t__ start; scalar_t__ end; scalar_t__ codec; scalar_t__ segmented; } ;
struct dec_sub {scalar_t__ start; scalar_t__ end; scalar_t__ codec; } ;



__attribute__((used)) static bool FUNC_0(struct dec_sub *VAR_0, struct demux_packet *VAR_1)
{
    return VAR_1->segmented &&
        (VAR_1->start != VAR_0->start || VAR_1->end != VAR_0->end || VAR_1->codec != VAR_0->codec);
}
