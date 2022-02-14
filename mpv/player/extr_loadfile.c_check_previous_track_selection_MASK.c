
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPOpts {int** stream_id; } ;
struct MPContext {char* track_layout_hash; struct MPOpts* opts; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (struct MPContext*) ;

__attribute__((used)) static void FUNC_3(struct MPContext *VAR_2)
{
    struct MPOpts *VAR_3 = VAR_2->opts;

    if (!VAR_2->track_layout_hash)
        return;

    char *VAR_4 = FUNC_2(VAR_2);
    if (FUNC_0(VAR_4, VAR_2->track_layout_hash) != 0) {


        for (int VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
            for (int VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
                if (VAR_3->stream_id[VAR_6][VAR_5] >= 0)
                    VAR_3->stream_id[VAR_6][VAR_5] = VAR_6 == 0 ? -1 : -2;
            }
        }
        FUNC_1(VAR_2->track_layout_hash);
        VAR_2->track_layout_hash = ((void*)0);
    }
    FUNC_1(VAR_4);
}
