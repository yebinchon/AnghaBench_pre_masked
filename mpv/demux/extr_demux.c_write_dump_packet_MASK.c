
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_recorder_sink {int dummy; } ;
struct demux_packet {size_t stream; } ;
struct demux_internal {int dumper; scalar_t__ dumper_status; int * streams; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct demux_internal*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mp_recorder_sink*,struct demux_packet*) ;
 struct mp_recorder_sink* FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct demux_internal *VAR_2, struct demux_packet *VAR_3)
{
    FUNC_1(VAR_2->dumper);
    FUNC_1(VAR_2->dumper_status == VAR_1);

    struct mp_recorder_sink *VAR_4 =
        FUNC_3(VAR_2->dumper, VAR_2->streams[VAR_3->stream]);
    if (VAR_4) {
        FUNC_2(VAR_4, VAR_3);
    } else {
        FUNC_0(VAR_2, "New stream appeared; stopping recording.\n");
        VAR_2->dumper_status = VAR_0;
    }
}
