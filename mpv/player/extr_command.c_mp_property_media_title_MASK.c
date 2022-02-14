
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct m_property {int dummy; } ;
struct TYPE_8__ {TYPE_3__* playing; TYPE_2__* demuxer; TYPE_1__* opts; } ;
struct TYPE_7__ {char* title; } ;
struct TYPE_6__ {int metadata; } ;
struct TYPE_5__ {char* media_title; } ;
typedef TYPE_4__ MPContext ;


 int FUNC_0 (int,void*,char*) ;
 int FUNC_1 (void*,struct m_property*,int,void*) ;
 char* FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, struct m_property *VAR_1,
                                   int VAR_2, void *VAR_3)
{
    MPContext *VAR_4 = VAR_0;
    char *VAR_5 = ((void*)0);
    if (VAR_4->opts->media_title)
        VAR_5 = VAR_4->opts->media_title;
    if (VAR_5 && VAR_5[0])
        return FUNC_0(VAR_2, VAR_3, VAR_5);
    if (VAR_4->demuxer) {
        VAR_5 = FUNC_2(VAR_4->demuxer->metadata, "service_name");
        if (VAR_5 && VAR_5[0])
            return FUNC_0(VAR_2, VAR_3, VAR_5);
        VAR_5 = FUNC_2(VAR_4->demuxer->metadata, "title");
        if (VAR_5 && VAR_5[0])
            return FUNC_0(VAR_2, VAR_3, VAR_5);
        VAR_5 = FUNC_2(VAR_4->demuxer->metadata, "icy-title");
        if (VAR_5 && VAR_5[0])
            return FUNC_0(VAR_2, VAR_3, VAR_5);
    }
    if (VAR_4->playing && VAR_4->playing->title)
        return FUNC_0(VAR_2, VAR_3, VAR_4->playing->title);
    return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
