
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct playlist_entry {char* filename; struct playlist_entry* next; } ;
struct playlist {struct playlist_entry* first; } ;
struct TYPE_2__ {scalar_t__ len; } ;


 int FUNC_0 (char*) ;
 TYPE_1__ FUNC_1 (int ) ;
 int FUNC_2 (struct playlist*,char*) ;
 int FUNC_3 (struct playlist*) ;
 size_t FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*) ;
 char* FUNC_6 (char*,char*,scalar_t__) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (int *,char*) ;
 char* FUNC_9 (char*,char*) ;

void FUNC_10(struct playlist *VAR_0)
{
    if (!VAR_0->first)
        return;
    char *VAR_1 = FUNC_8(((void*)0), "edl://");
    for (struct playlist_entry *VAR_2 = VAR_0->first; VAR_2; VAR_2 = VAR_2->next) {
        if (VAR_2 != VAR_0->first)
            VAR_1 = FUNC_9(VAR_1, ";");

        if (VAR_2->filename[FUNC_4(VAR_2->filename, "=%,;\n")] ||
            FUNC_1(FUNC_0(VAR_2->filename)).len != FUNC_5(VAR_2->filename))
        {

            VAR_1 = FUNC_6(VAR_1, "%%%zd%%", FUNC_5(VAR_2->filename));
        }
        VAR_1 = FUNC_9(VAR_1, VAR_2->filename);
    }
    FUNC_3(VAR_0);
    FUNC_2(VAR_0, VAR_1);
    FUNC_7(VAR_1);
}
