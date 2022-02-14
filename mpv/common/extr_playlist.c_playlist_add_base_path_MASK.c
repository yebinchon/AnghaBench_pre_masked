
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct playlist_entry {char* filename; struct playlist_entry* next; } ;
struct playlist {struct playlist_entry* first; } ;
struct TYPE_5__ {scalar_t__ len; } ;
typedef TYPE_1__ bstr ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_1__,char*) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (struct playlist_entry*,TYPE_1__,int ) ;
 int FUNC_4 (char*) ;

void FUNC_5(struct playlist *VAR_0, bstr VAR_1)
{
    if (VAR_1.len == 0 || FUNC_1(VAR_1, ".") == 0)
        return;
    for (struct playlist_entry *VAR_2 = VAR_0->first; VAR_2; VAR_2 = VAR_2->next) {
        if (!FUNC_2(FUNC_0(VAR_2->filename))) {
            char *VAR_3 = FUNC_3(VAR_2, VAR_1, FUNC_0(VAR_2->filename));
            FUNC_4(VAR_2->filename);
            VAR_2->filename = VAR_3;
        }
    }
}
