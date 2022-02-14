
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_lavfi {int dummy; } ;
struct mp_filter {int dummy; } ;
struct lavfi {int force_type; int force_bidir; int graph_string; int graph_opts; } ;
typedef enum mp_frame_type { ____Placeholder_mp_frame_type } mp_frame_type ;


 struct mp_lavfi* FUNC_0 (struct lavfi*) ;
 struct lavfi* FUNC_1 (struct mp_filter*) ;
 int FUNC_2 (struct lavfi*,char**) ;
 int FUNC_3 (struct lavfi*,char const*) ;

struct mp_lavfi *FUNC_4(struct mp_filter *VAR_0,
                                       enum mp_frame_type VAR_1, bool VAR_2,
                                       char **VAR_3, const char *VAR_4)
{
    struct lavfi *VAR_5 = FUNC_1(VAR_0);
    if (!VAR_5)
        return ((void*)0);

    VAR_5->force_type = VAR_1;
    VAR_5->force_bidir = VAR_2;
    VAR_5->graph_opts = FUNC_2(VAR_5, VAR_3);
    VAR_5->graph_string = FUNC_3(VAR_5, VAR_4);

    return FUNC_0(VAR_5);
}
