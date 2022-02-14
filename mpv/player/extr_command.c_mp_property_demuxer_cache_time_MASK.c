
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct m_property {int dummy; } ;
struct demux_reader_state {scalar_t__ ts_end; } ;
struct TYPE_2__ {int demuxer; } ;
typedef TYPE_1__ MPContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct demux_reader_state*) ;
 int FUNC_1 (int,void*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, struct m_property *VAR_3,
                                          int VAR_4, void *VAR_5)
{
    MPContext *VAR_6 = VAR_2;
    if (!VAR_6->demuxer)
        return VAR_1;

    struct demux_reader_state VAR_7;
    FUNC_0(VAR_6->demuxer, &VAR_7);

    if (VAR_7.ts_end == VAR_0)
        return VAR_1;

    return FUNC_1(VAR_4, VAR_5, VAR_7.ts_end);
}
