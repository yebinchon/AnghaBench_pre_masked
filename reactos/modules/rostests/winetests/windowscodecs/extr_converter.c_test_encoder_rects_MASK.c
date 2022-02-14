
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bitmap_data {int dummy; } ;
struct TYPE_3__ {int Width; int Height; scalar_t__ Y; scalar_t__ X; } ;
typedef TYPE_1__ WICRect ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bitmap_data const**,int *,struct bitmap_data const**,int *,TYPE_1__*,int *,char*,int *) ;
 struct bitmap_data VAR_2 ;

__attribute__((used)) static void FUNC_1(void)
{
    const struct bitmap_data *VAR_3[2];
    const struct bitmap_data *VAR_4[2];
    WICRect VAR_5;

    VAR_3[0] = &VAR_2;
    VAR_3[1] = ((void*)0);
    VAR_4[0] = &VAR_2;
    VAR_4[1] = ((void*)0);

    VAR_5.X = 0;
    VAR_5.Y = 0;
    VAR_5.Width = 32;
    VAR_5.Height = 2;

    FUNC_0(VAR_3, &VAR_1, VAR_4, &VAR_0, &VAR_5, ((void*)0), "test_encoder_rects full", ((void*)0));

    VAR_5.Width = 0;
    FUNC_0(VAR_3, &VAR_1, VAR_4, &VAR_0, &VAR_5, ((void*)0), "test_encoder_rects width=0", ((void*)0));

    VAR_5.Width = -1;
    FUNC_0(VAR_3, &VAR_1, VAR_4, &VAR_0, &VAR_5, ((void*)0), "test_encoder_rects width=-1", ((void*)0));

    VAR_5.Width = 32;
    VAR_5.Height = 0;
    FUNC_0(VAR_3, &VAR_1, VAR_4, &VAR_0, &VAR_5, ((void*)0), "test_encoder_rects height=0", ((void*)0));

    VAR_5.Height = -1;
    FUNC_0(VAR_3, &VAR_1, VAR_4, &VAR_0, &VAR_5, ((void*)0), "test_encoder_rects height=-1", ((void*)0));
}
