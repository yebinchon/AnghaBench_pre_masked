
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct demuxer {int num_chapters; TYPE_1__* chapters; } ;
struct demux_chapter {double pts; int metadata; } ;
struct TYPE_2__ {int metadata; } ;


 int FUNC_0 (int *,struct demux_chapter*,int,struct demux_chapter) ;
 double FUNC_1 (struct demuxer*,int) ;
 int FUNC_2 (struct demux_chapter*,int ) ;

__attribute__((used)) static void FUNC_3(struct demux_chapter **VAR_0, int *VAR_1,
                          struct demuxer *VAR_2, double VAR_3, double VAR_4,
                          double VAR_5)
{
    for (int VAR_6 = 0; VAR_6 < VAR_2->num_chapters; VAR_6++) {
        double VAR_7 = FUNC_1(VAR_2, VAR_6);
        if (VAR_7 >= VAR_3 && VAR_7 <= VAR_3 + VAR_4) {
            struct demux_chapter VAR_8 = {
                .pts = VAR_5 + VAR_7 - VAR_3,
                .metadata = FUNC_2(*VAR_0, VAR_2->chapters[VAR_6].metadata),
            };
            FUNC_0(((void*)0), *VAR_0, *VAR_1, VAR_8);
        }
    }
}
