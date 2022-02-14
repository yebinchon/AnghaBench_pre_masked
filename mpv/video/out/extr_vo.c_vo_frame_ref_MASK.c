
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_frame {int num_frames; int ** frames; int * current; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int * FUNC_1 (int *) ;
 struct vo_frame* VAR_1 ;
 struct vo_frame* FUNC_2 (int *,int ) ;
 int FUNC_3 (struct vo_frame*,int ) ;

struct vo_frame *FUNC_4(struct vo_frame *VAR_2)
{
    if (!VAR_2)
        return ((void*)0);

    struct vo_frame *VAR_3 = FUNC_2(((void*)0), VAR_3);
    FUNC_3(VAR_3, VAR_0);
    *VAR_3 = *VAR_2;
    for (int VAR_4 = 0; VAR_4 < VAR_2->num_frames; VAR_4++) {
        VAR_3->frames[VAR_4] = FUNC_1(VAR_2->frames[VAR_4]);
        if (!VAR_3->frames[VAR_4])
            FUNC_0();
    }
    VAR_3->current = VAR_3->num_frames ? VAR_3->frames[0] : ((void*)0);
    return VAR_3;
}
