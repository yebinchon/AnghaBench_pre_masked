
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demux_internal {int num_streams; int d_user; int wakeup; int lock; int * streams; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct demux_internal *VAR_0)
{
    for (int VAR_1 = 0; VAR_1 < VAR_0->num_streams; VAR_1++)
        FUNC_2(VAR_0->streams[VAR_1]);
    FUNC_1(&VAR_0->lock);
    FUNC_0(&VAR_0->wakeup);
    FUNC_2(VAR_0->d_user);
}
