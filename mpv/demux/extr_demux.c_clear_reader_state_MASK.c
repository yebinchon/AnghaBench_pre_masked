
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct demux_internal {int num_streams; int warned_queue_overflow; int blocked; int need_back_seek; TYPE_2__* d_user; TYPE_1__** streams; } ;
struct TYPE_4__ {int filepos; } ;
struct TYPE_3__ {int ds; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct demux_internal *VAR_0,
                               bool VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < VAR_0->num_streams; VAR_2++)
        FUNC_0(VAR_0->streams[VAR_2]->ds, VAR_1);
    VAR_0->warned_queue_overflow = 0;
    VAR_0->d_user->filepos = -1;
    VAR_0->blocked = 0;
    VAR_0->need_back_seek = 0;
}
