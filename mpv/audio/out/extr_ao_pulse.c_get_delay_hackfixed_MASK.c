
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct priv {int mainloop; int stream; } ;
struct pa_sample_spec {int dummy; } ;
struct ao {struct priv* priv; } ;
struct TYPE_3__ {scalar_t__ sink_usec; scalar_t__ since_underrun; int playing; scalar_t__ transport_usec; scalar_t__ read_index; scalar_t__ write_index; } ;
typedef TYPE_1__ pa_timing_info ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__,struct pa_sample_spec const*) ;
 struct pa_sample_spec* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct priv*,int ) ;

__attribute__((used)) static double FUNC_8(struct ao *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    FUNC_5(VAR_1->mainloop);
    if (!FUNC_7(VAR_1, FUNC_4(VAR_1->stream, ((void*)0), ((void*)0)))) {
        FUNC_0("pa_stream_update_timing_info() failed");
        return 0;
    }
    FUNC_5(VAR_1->mainloop);
    const pa_timing_info *VAR_2 = FUNC_3(VAR_1->stream);
    if (!VAR_2) {
        FUNC_6(VAR_1->mainloop);
        FUNC_0("pa_stream_get_timing_info() failed");
        return 0;
    }
    const struct pa_sample_spec *VAR_3 = FUNC_2(VAR_1->stream);
    if (!VAR_3) {
        FUNC_6(VAR_1->mainloop);
        FUNC_0("pa_stream_get_sample_spec() failed");
        return 0;
    }

    int64_t VAR_4 = FUNC_1(VAR_2->write_index - VAR_2->read_index, VAR_3);

    VAR_4 -= VAR_2->transport_usec;

    int64_t VAR_5 = VAR_2->sink_usec;
    if (!VAR_2->playing)





        VAR_5 -= FUNC_1(VAR_2->since_underrun, VAR_3);
    if (VAR_5 > 0)
        VAR_4 += VAR_5;
    if (VAR_4 < 0)
        VAR_4 = 0;
    FUNC_6(VAR_1->mainloop);
    return VAR_4 / 1e6;
}
