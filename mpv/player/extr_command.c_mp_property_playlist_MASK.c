
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct playlist_entry {char* title; char* filename; struct playlist_entry* next; } ;
struct playlist {struct playlist_entry* current; struct playlist_entry* first; } ;
struct m_property {int dummy; } ;
struct get_playlist_ctx {TYPE_1__* mpctx; } ;
struct TYPE_3__ {struct playlist* playlist; } ;
typedef TYPE_1__ MPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (TYPE_1__*,char*,int ) ;
 int VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int FUNC_2 (int,void*,int ,int ,struct get_playlist_ctx*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct playlist*) ;
 int FUNC_6 (struct playlist*,struct playlist_entry*) ;
 char* FUNC_7 (char*,char*,char const*,char*) ;
 char* FUNC_8 (int *,char*) ;

__attribute__((used)) static int FUNC_9(void *VAR_5, struct m_property *VAR_6,
                                int VAR_7, void *VAR_8)
{
    MPContext *VAR_9 = VAR_5;
    if (VAR_7 == VAR_1) {
        struct playlist *VAR_10 = VAR_9->playlist;
        char *VAR_11 = FUNC_8(((void*)0), "");

        for (struct playlist_entry *VAR_12 = VAR_10->first; VAR_12; VAR_12 = VAR_12->next)
        {
            char *VAR_13 = VAR_12->title;
            if (!VAR_13) {
                VAR_13 = VAR_12->filename;
                if (!FUNC_4(FUNC_0(VAR_13))) {
                    char *VAR_14 = FUNC_3(VAR_12->filename);
                    if (VAR_14[0])
                        VAR_13 = VAR_14;
                }
            }
            const char *VAR_15 = VAR_10->current == VAR_12 ? VAR_3 : VAR_4;
            VAR_11 = FUNC_7(VAR_11, "%s%s\n", VAR_15, VAR_13);
        }

        *(char **)VAR_8 =
            FUNC_1(VAR_9, VAR_11, FUNC_6(VAR_10, VAR_10->current));
        return VAR_0;
    }

    struct get_playlist_ctx VAR_16 = {.mpctx = VAR_9};
    return FUNC_2(VAR_7, VAR_8, FUNC_5(VAR_9->playlist),
                                VAR_2, &VAR_16);
}
