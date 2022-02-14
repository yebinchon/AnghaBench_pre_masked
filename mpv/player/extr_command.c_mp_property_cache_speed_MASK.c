
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct m_property {int dummy; } ;
struct demux_reader_state {int bytes_per_second; } ;
struct TYPE_2__ {int demuxer; } ;
typedef TYPE_1__ MPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct demux_reader_state*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,void*,int ) ;
 char* FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(void *VAR_3, struct m_property *VAR_4,
                                   int VAR_5, void *VAR_6)
{
    MPContext *VAR_7 = VAR_3;
    if (!VAR_7->demuxer)
        return VAR_2;

    struct demux_reader_state VAR_8;
    FUNC_0(VAR_7->demuxer, &VAR_8);

    uint64_t VAR_9 = VAR_8.bytes_per_second;

    if (VAR_5 == VAR_1) {
        *(char **)VAR_6 = FUNC_3(FUNC_1(VAR_9), "/s");
        return VAR_0;
    }
    return FUNC_2(VAR_5, VAR_6, VAR_9);
}
