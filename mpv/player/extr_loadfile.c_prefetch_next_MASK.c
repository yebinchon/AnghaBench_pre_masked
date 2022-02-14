
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct playlist_entry {int stream_flags; scalar_t__ filename; } ;
struct MPContext {int open_active; TYPE_1__* opts; } ;
struct TYPE_2__ {int prefetch_open; } ;


 int FUNC_0 (struct MPContext*,char*,scalar_t__) ;
 struct playlist_entry* FUNC_1 (struct MPContext*,int,int,int) ;
 int FUNC_2 (struct MPContext*,scalar_t__,int ,int) ;

void FUNC_3(struct MPContext *VAR_0)
{
    if (!VAR_0->opts->prefetch_open)
        return;

    struct playlist_entry *VAR_1 = FUNC_1(VAR_0, +1, 0, 0);
    if (VAR_1 && !VAR_0->open_active && VAR_1->filename) {
        FUNC_0(VAR_0, "Prefetching: %s\n", VAR_1->filename);
        FUNC_2(VAR_0, VAR_1->filename, VAR_1->stream_flags, 1);
    }
}
