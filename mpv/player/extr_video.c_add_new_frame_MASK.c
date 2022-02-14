
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_image {int dummy; } ;
struct MPContext {scalar_t__ num_next_frames; struct mp_image** next_frames; } ;


 scalar_t__ FUNC_0 (struct mp_image**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct MPContext*) ;

__attribute__((used)) static void FUNC_3(struct MPContext *VAR_0, struct mp_image *VAR_1)
{
    FUNC_1(VAR_0->num_next_frames < FUNC_0(VAR_0->next_frames));
    FUNC_1(VAR_1);
    VAR_0->next_frames[VAR_0->num_next_frames++] = VAR_1;
    if (VAR_0->num_next_frames == 1)
        FUNC_2(VAR_0);
}
