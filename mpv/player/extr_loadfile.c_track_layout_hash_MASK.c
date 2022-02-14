
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct track {int type; char* lang; int is_external; int default_track; int user_tid; } ;
struct MPContext {int num_tracks; struct track** tracks; } ;


 int VAR_0 ;
 char* FUNC_0 (char*,char*,int,int ,int ,int ,char*) ;
 char* FUNC_1 (int *,char*) ;

__attribute__((used)) static char *FUNC_2(struct MPContext *VAR_1)
{
    char *VAR_2 = FUNC_1(((void*)0), "");
    for (int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        for (int VAR_4 = 0; VAR_4 < VAR_1->num_tracks; VAR_4++) {
            struct track *VAR_5 = VAR_1->tracks[VAR_4];
            if (VAR_5->type != VAR_3)
                continue;
            VAR_2 = FUNC_0(VAR_2, "%d-%d-%d-%d-%s\n", VAR_3,
                    VAR_5->user_tid, VAR_5->default_track, VAR_5->is_external,
                    VAR_5->lang ? VAR_5->lang : "");
        }
    }
    return VAR_2;
}
