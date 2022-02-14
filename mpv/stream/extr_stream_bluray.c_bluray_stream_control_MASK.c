
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct stream_lang_req {int name; int id; int type; } ;
struct meta_dl {int * di_name; } ;
struct bluray_priv_s {unsigned int const num_titles; unsigned int current_title; int current_angle; int bd; TYPE_4__* title_info; } ;
struct TYPE_10__ {struct bluray_priv_s* priv; } ;
typedef TYPE_3__ stream_t ;
struct TYPE_12__ {char* lang; int pid; } ;
struct TYPE_11__ {unsigned int chapter_count; int angle_count; TYPE_2__* clips; int clip_count; int duration; TYPE_1__* chapters; } ;
struct TYPE_9__ {int audio_stream_count; int pg_stream_count; TYPE_5__* pg_streams; TYPE_5__* audio_streams; } ;
struct TYPE_8__ {int start; } ;
typedef TYPE_4__ BLURAY_TITLE_INFO ;
typedef TYPE_5__ BLURAY_STREAM_INFO ;


 int FUNC_0 (double) ;
 double FUNC_1 (int ) ;
 double VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 struct meta_dl* FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct bluray_priv_s*,unsigned int const) ;
 int FUNC_7 (int ,int,char*,char*) ;
 int FUNC_8 (TYPE_3__*) ;
 char* FUNC_9 (int *,int *) ;

__attribute__((used)) static int FUNC_10(stream_t *VAR_4, int VAR_5, void *VAR_6)
{
    struct bluray_priv_s *VAR_7 = VAR_4->priv;

    switch (VAR_5) {
    case 134: {
        const BLURAY_TITLE_INFO *VAR_8 = VAR_7->title_info;
        if (!VAR_8)
            return VAR_3;
        *((unsigned int *) VAR_6) = VAR_8->chapter_count;
        return VAR_2;
    }
    case 140: {
        const BLURAY_TITLE_INFO *VAR_9 = VAR_7->title_info;
        if (!VAR_9)
            return VAR_3;
        int VAR_10 = *(double *)VAR_6;
        double VAR_11 = VAR_0;
        if (VAR_10 >= 0 || VAR_10 < VAR_9->chapter_count)
            VAR_11 = FUNC_1(VAR_9->chapters[VAR_10].start);
        if (VAR_11 == VAR_0)
            return VAR_1;
        *(double *)VAR_6 = VAR_11;
        return VAR_2;
    }
    case 129: {
        const uint32_t VAR_12 = *((unsigned int*)VAR_6);
        if (VAR_12 >= VAR_7->num_titles || !FUNC_6(VAR_7, VAR_12))
            return VAR_3;
        VAR_7->current_title = VAR_12;
        return VAR_2;
    }
    case 138: {
        *((unsigned int *) VAR_6) = VAR_7->current_title;
        return VAR_2;
    }
    case 133: {
        *((unsigned int *)VAR_6) = VAR_7->num_titles;
        return VAR_2;
    }
    case 132: {
        const BLURAY_TITLE_INFO *VAR_13 = VAR_7->title_info;
        if (!VAR_13)
            return VAR_3;
        *((double *) VAR_6) = FUNC_1(VAR_13->duration);
        return VAR_2;
    }
    case 139: {
        *((double *) VAR_6) = FUNC_1(FUNC_5(VAR_7->bd));
        return VAR_2;
    }
    case 131: {
        double VAR_14 = *((double *) VAR_6);
        FUNC_4(VAR_7->bd, FUNC_0(VAR_14));
        FUNC_8(VAR_4);

        return VAR_2;
    }
    case 135: {
        const BLURAY_TITLE_INFO *VAR_15 = VAR_7->title_info;
        if (!VAR_15)
            return VAR_3;
        *((int *) VAR_6) = VAR_15->angle_count;
        return VAR_2;
    }
    case 141: {
        *((int *) VAR_6) = VAR_7->current_angle;
        return VAR_2;
    }
    case 130: {
        const BLURAY_TITLE_INFO *VAR_16 = VAR_7->title_info;
        if (!VAR_16)
            return VAR_3;
        int VAR_17 = *((int *) VAR_6);
        if (VAR_17 < 0 || VAR_17 > VAR_16->angle_count)
            return VAR_3;
        VAR_7->current_angle = VAR_17;
        FUNC_3(VAR_7->bd, VAR_17);
        return VAR_2;
    }
    case 136: {
        const BLURAY_TITLE_INFO *VAR_18 = VAR_7->title_info;
        if (VAR_18 && VAR_18->clip_count) {
            struct stream_lang_req *VAR_19 = VAR_6;
            BLURAY_STREAM_INFO *VAR_20 = ((void*)0);
            int VAR_21 = 0;
            switch (VAR_19->type) {
            case 142:
                VAR_21 = VAR_18->clips[0].audio_stream_count;
                VAR_20 = VAR_18->clips[0].audio_streams;
                break;
            case 128:
                VAR_21 = VAR_18->clips[0].pg_stream_count;
                VAR_20 = VAR_18->clips[0].pg_streams;
                break;
            }
            for (int VAR_22 = 0; VAR_22 < VAR_21; VAR_22++) {
                BLURAY_STREAM_INFO *VAR_23 = &VAR_20[VAR_22];
                if (VAR_23->pid == VAR_19->id) {
                    FUNC_7(VAR_19->name, sizeof(VAR_19->name), "%.4s", VAR_23->lang);
                    return VAR_2;
                }
            }
        }
        return VAR_1;
    }
    case 137: {
        const struct meta_dl *VAR_24 = FUNC_2(VAR_7->bd);
        if (!VAR_24 || !VAR_24->di_name || !VAR_24->di_name[0])
            break;
        *(char**)VAR_6 = FUNC_9(((void*)0), VAR_24->di_name);
        return VAR_2;
    }
    default:
        break;
    }

    return VAR_3;
}
