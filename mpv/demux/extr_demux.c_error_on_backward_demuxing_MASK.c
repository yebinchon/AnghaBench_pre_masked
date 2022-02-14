
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demux_internal {int back_demuxing; } ;


 int FUNC_0 (struct demux_internal*,char*) ;
 int FUNC_1 (struct demux_internal*,int) ;

__attribute__((used)) static void FUNC_2(struct demux_internal *VAR_0)
{
    if (!VAR_0->back_demuxing)
        return;
    FUNC_0(VAR_0, "Disabling backward demuxing.\n");
    VAR_0->back_demuxing = 0;
    FUNC_1(VAR_0, 1);
}
