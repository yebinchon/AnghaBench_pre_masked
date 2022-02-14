
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tl_root {int num_pars; struct tl_parts** pars; } ;
struct tl_parts {int dummy; } ;
struct timeline_par {int dash; int no_clip; int num_parts; } ;
struct timeline {char* format; TYPE_1__* demuxer; } ;
struct priv {int allow_any; int data; } ;
struct TYPE_2__ {int filename; struct priv* priv; } ;


 int FUNC_0 (struct timeline*,char*) ;
 struct timeline_par* FUNC_1 (struct timeline*,struct tl_parts*) ;
 int FUNC_2 (struct tl_parts*,int ) ;
 struct tl_root* FUNC_3 (int ) ;
 int FUNC_4 (struct tl_root*) ;

__attribute__((used)) static void FUNC_5(struct timeline *VAR_0)
{
    struct priv *VAR_1 = VAR_0->demuxer->priv;

    struct tl_root *VAR_2 = FUNC_3(VAR_1->data);
    if (!VAR_2) {
        FUNC_0(VAR_0, "Error in EDL.\n");
        return;
    }

    bool VAR_3 = 1;
    bool VAR_4 = 1;
    bool VAR_5 = 1;

    for (int VAR_6 = 0; VAR_6 < VAR_2->num_pars; VAR_6++) {
        struct tl_parts *VAR_7 = VAR_2->pars[VAR_6];
        if (!VAR_1->allow_any)
            FUNC_2(VAR_7, VAR_0->demuxer->filename);
        struct timeline_par *VAR_8 = FUNC_1(VAR_0, VAR_7);
        if (!VAR_8)
            break;
        VAR_3 &= VAR_8->dash;
        VAR_4 &= VAR_8->no_clip;
        VAR_5 &= VAR_8->num_parts == 1;
    }

    if (VAR_3) {
        VAR_0->format = "dash";
    } else if (VAR_4 && VAR_5) {
        VAR_0->format = "multi";
    } else {
        VAR_0->format = "edl";
    }

    FUNC_4(VAR_2);
}
