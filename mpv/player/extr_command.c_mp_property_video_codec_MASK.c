
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct track {TYPE_1__* dec; } ;
struct m_property {int dummy; } ;
struct TYPE_4__ {struct track*** current_track; } ;
struct TYPE_3__ {char* decoder_desc; } ;
typedef TYPE_2__ MPContext ;


 size_t VAR_0 ;
 int FUNC_0 (int,void*,char const*) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, struct m_property *VAR_2,
                                   int VAR_3, void *VAR_4)
{
    MPContext *VAR_5 = VAR_1;
    struct track *VAR_6 = VAR_5->current_track[0][VAR_0];
    const char *VAR_7 = VAR_6 && VAR_6->dec ? VAR_6->dec->decoder_desc : ((void*)0);
    return FUNC_0(VAR_3, VAR_4, VAR_7);
}
