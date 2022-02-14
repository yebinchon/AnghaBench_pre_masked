
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdaliclock {int* target_digits; int* current_digits; int * gif_enc; int frame; void* clear_frame; void* temp_frame; } ;
typedef int ge_GIF ;


 int VAR_0 ;
 unsigned int FUNC_0 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct xdaliclock*) ;
 struct xdaliclock* FUNC_3 (int) ;

struct xdaliclock *FUNC_4(ge_GIF *VAR_3)
{
    struct xdaliclock *VAR_4 = FUNC_3(sizeof(*VAR_4));

    if (!VAR_4)
        return ((void*)0);

    VAR_4->temp_frame = FUNC_1(VAR_2, VAR_1);
    if (!VAR_4->temp_frame)
        goto out;

    VAR_4->clear_frame = FUNC_1(VAR_2, VAR_1);
    if (!VAR_4->clear_frame)
        goto out;

    for (unsigned int VAR_5 = 0; VAR_5 < FUNC_0(VAR_4->target_digits); VAR_5++)
        VAR_4->target_digits[VAR_5] = VAR_4->current_digits[VAR_5] = -1;


    VAR_4->frame = VAR_0;
    VAR_4->gif_enc = VAR_3;

    return VAR_4;

out:
    FUNC_2(VAR_4);
    return ((void*)0);
}
