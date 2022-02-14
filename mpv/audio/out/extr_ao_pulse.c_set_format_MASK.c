
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct pa_channel_map {int dummy; } ;
struct format_map {scalar_t__ mp_format; int pa_format; } ;
struct TYPE_9__ {int num; } ;
struct ao {scalar_t__ format; scalar_t__ samplerate; TYPE_1__ channels; } ;
struct TYPE_10__ {scalar_t__ encoding; } ;
typedef TYPE_2__ pa_format_info ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ao*,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 struct format_map* VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*,struct pa_channel_map*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,scalar_t__) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct ao*,struct pa_channel_map*) ;

__attribute__((used)) static bool FUNC_9(struct ao *VAR_4, pa_format_info *VAR_5)
{
    VAR_4->format = FUNC_1(VAR_4->format);

    VAR_5->encoding = FUNC_2(VAR_4->format);
    if (VAR_5->encoding == VAR_1) {
        const struct format_map *VAR_6 = VAR_3;

        while (VAR_6->mp_format != VAR_4->format) {
            if (VAR_6->mp_format == VAR_0) {
                FUNC_0(VAR_4, "Unsupported format, using default\n");
                VAR_6 = VAR_3;
                break;
            }
            VAR_6++;
        }
        VAR_4->format = VAR_6->mp_format;

        FUNC_6(VAR_5, VAR_6->pa_format);
    }

    struct pa_channel_map VAR_7;

    if (!FUNC_8(VAR_4, &VAR_7))
        return 0;

    FUNC_5(VAR_5, VAR_4->samplerate);
    FUNC_4(VAR_5, VAR_4->channels.num);
    FUNC_3(VAR_5, &VAR_7);

    return VAR_4->samplerate < VAR_2 && FUNC_7(VAR_5);
}
