
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdaliclock {TYPE_1__* gif_enc; } ;
struct scanline {int* left; int* right; } ;
struct frame {struct scanline* scanlines; } ;
struct TYPE_2__ {int w; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct xdaliclock*,int,int,int,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct xdaliclock *VAR_5, const struct frame *VAR_6, int VAR_7)
{
    for (int VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
        const struct scanline *VAR_9 = &VAR_6->scanlines[VAR_8];
        int VAR_10 = 0;
        int VAR_11 = 0;

        goto first_iter;

        for (; VAR_11 < VAR_2; VAR_11++) {
            if ((VAR_9->left[VAR_11] == VAR_9->right[VAR_11] ||
                 (VAR_9->left[VAR_11] == VAR_9->left[VAR_11 - 1] &&
                  VAR_9->right[VAR_11] == VAR_9->right[VAR_11 - 1]))) {
                continue;
            }

        first_iter:


            FUNC_0(VAR_5, VAR_7 + VAR_10, VAR_7 + VAR_9->left[VAR_11], VAR_8,
                                 VAR_5->gif_enc->w, VAR_0);



            FUNC_0(VAR_5, VAR_7 + VAR_9->left[VAR_11], VAR_7 + VAR_9->right[VAR_11],
                                 VAR_8, VAR_5->gif_enc->w, VAR_1);

            VAR_10 = VAR_9->right[VAR_11];
        }



        FUNC_0(VAR_5, VAR_7 + VAR_10, VAR_7 + VAR_4, VAR_8,
                             VAR_5->gif_enc->w, VAR_0);
    }
}
