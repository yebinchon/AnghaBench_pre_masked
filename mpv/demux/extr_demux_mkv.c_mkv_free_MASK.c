
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mkv_demuxer {int num_tracks; int * tracks; } ;
struct demuxer {struct mkv_demuxer* priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct demuxer*) ;

__attribute__((used)) static void FUNC_2(struct demuxer *VAR_0)
{
    struct mkv_demuxer *VAR_1 = VAR_0->priv;
    if (!VAR_1)
        return;
    FUNC_1(VAR_0);
    for (int VAR_2 = 0; VAR_2 < VAR_1->num_tracks; VAR_2++)
        FUNC_0(VAR_1->tracks[VAR_2]);
}
