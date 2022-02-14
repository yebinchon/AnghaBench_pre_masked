
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_extra {int dummy; } ;
struct vo_driver {scalar_t__ name; } ;
struct vo {int dummy; } ;
struct mpv_global {int dummy; } ;
struct mp_vo_opts {struct m_obj_settings* video_driver_list; } ;
struct m_obj_settings {char* name; } ;


 struct mp_vo_opts* FUNC_0 (int *,struct mpv_global*,int *) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (struct mp_vo_opts*) ;
 struct vo_driver** VAR_0 ;
 struct vo_driver const VAR_1 ;
 struct vo* FUNC_3 (int,struct mpv_global*,struct vo_extra*,char*) ;
 int VAR_2 ;

struct vo *FUNC_4(struct mpv_global *VAR_3, struct vo_extra *VAR_4)
{
    struct mp_vo_opts *VAR_5 = FUNC_0(((void*)0), VAR_3, &VAR_2);
    struct m_obj_settings *VAR_6 = VAR_5->video_driver_list;
    struct vo *VAR_7 = ((void*)0);

    if (VAR_6 && VAR_6[0].name) {
        for (int VAR_8 = 0; VAR_6[VAR_8].name; VAR_8++) {

            if (FUNC_1(VAR_6[VAR_8].name) == 0)
                goto autoprobe;
            bool VAR_9 = !!VAR_6[VAR_8 + 1].name;
            VAR_7 = FUNC_3(VAR_9, VAR_3, VAR_4, VAR_6[VAR_8].name);
            if (VAR_7)
                goto done;
        }
        goto done;
    }
autoprobe:

    for (int VAR_10 = 0; VAR_0[VAR_10]; VAR_10++) {
        const struct vo_driver *VAR_11 = VAR_0[VAR_10];
        if (VAR_11 == &VAR_1)
            break;
        VAR_7 = FUNC_3(1, VAR_3, VAR_4, (char *)VAR_11->name);
        if (VAR_7)
            goto done;
    }
done:
    FUNC_2(VAR_5);
    return VAR_7;
}
