
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_internal {int lock; int req_frames; int flip_queue_offset; } ;
struct vo {struct vo_internal* in; } ;
typedef int int64_t ;


 int FUNC_0 (int,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct vo *VAR_1, int64_t VAR_2, int VAR_3)
{
    struct vo_internal *VAR_4 = VAR_1->in;
    FUNC_1(&VAR_4->lock);
    VAR_4->flip_queue_offset = VAR_2;
    VAR_4->req_frames = FUNC_0(VAR_3, 1, VAR_0);
    FUNC_2(&VAR_4->lock);
}
