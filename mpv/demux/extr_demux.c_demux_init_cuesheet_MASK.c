
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct demuxer {TYPE_1__* chapters; int num_chapters; int metadata; } ;
struct cue_track {int tags; int start; } ;
struct cue_file {int num_tracks; struct cue_track* tracks; } ;
struct TYPE_2__ {int metadata; } ;


 int FUNC_0 (struct demuxer*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct demuxer*,char*,int ,int) ;
 scalar_t__ FUNC_3 (struct cue_file*) ;
 struct cue_file* FUNC_4 (int ) ;
 char* FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct cue_file*) ;

__attribute__((used)) static void FUNC_8(struct demuxer *VAR_0)
{
    char *VAR_1 = FUNC_5(VAR_0->metadata, "cuesheet");
    if (VAR_1 && !VAR_0->num_chapters) {
        struct cue_file *VAR_2 = FUNC_4(FUNC_1(VAR_1));
        if (VAR_2) {
            if (FUNC_3(VAR_2) < 0) {
                FUNC_0(VAR_0, "Embedded cue sheet references more than one file. "
                        "Ignoring it.\n");
            } else {
                for (int VAR_3 = 0; VAR_3 < VAR_2->num_tracks; VAR_3++) {
                    struct cue_track *VAR_4 = &VAR_2->tracks[VAR_3];
                    int VAR_5 = FUNC_2(VAR_0, "", VAR_4->start, -1);
                    FUNC_6(VAR_0->chapters[VAR_5].metadata, VAR_4->tags);
                }
            }
        }
        FUNC_7(VAR_2);
    }
}
