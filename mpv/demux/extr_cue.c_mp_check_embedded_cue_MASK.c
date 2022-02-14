
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cue_file {int num_tracks; TYPE_1__* tracks; } ;
struct TYPE_2__ {char* filename; } ;


 scalar_t__ FUNC_0 (char*,char*) ;

int FUNC_1(struct cue_file *VAR_0)
{
    char *VAR_1 = VAR_0->tracks[0].filename;
    for (int VAR_2 = 1; VAR_2 < VAR_0->num_tracks; VAR_2++) {
        char *VAR_3 = VAR_0->tracks[VAR_2].filename;

        if (VAR_1 == VAR_3)
            continue;

        if (!VAR_1 || !VAR_3 || FUNC_0(VAR_1, VAR_3) != 0)
            return -1;
    }
    return 0;
}
