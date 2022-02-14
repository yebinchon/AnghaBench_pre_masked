
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdaliclock {int* current_digits; int* target_digits; struct frame const* temp_frame; struct frame* clear_frame; } ;
struct scanline {void** right; void** left; } ;
struct frame {struct scanline* scanlines; } ;


 int VAR_0 ;
 struct frame** VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (void*,void*,unsigned int) ;

__attribute__((used)) static const struct frame *FUNC_1(struct xdaliclock *VAR_3, int VAR_4, unsigned int VAR_5)
{
    const int VAR_6 = VAR_3->current_digits[VAR_4];
    const int VAR_7 = VAR_3->target_digits[VAR_4];
    const struct frame *VAR_8 = (VAR_7 >= 0) ? VAR_1[VAR_7] : VAR_3->clear_frame;
    const struct frame *VAR_9;
    int VAR_10, VAR_11;

    if (VAR_6 == VAR_7)
        return VAR_8;

    VAR_9 = (VAR_6 >= 0) ? VAR_1[VAR_6] : VAR_3->clear_frame;
    for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
        struct scanline *VAR_12 = &VAR_3->temp_frame->scanlines[VAR_11];
        const struct scanline *VAR_13 = &VAR_8->scanlines[VAR_11];
        const struct scanline *VAR_14 = &VAR_9->scanlines[VAR_11];

        for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
            VAR_12->left[VAR_10] = FUNC_0(VAR_14->left[VAR_10], VAR_13->left[VAR_10], VAR_5);
            VAR_12->right[VAR_10] = FUNC_0(VAR_14->right[VAR_10], VAR_13->right[VAR_10], VAR_5);
        }
    }

    return VAR_3->temp_frame;
}
