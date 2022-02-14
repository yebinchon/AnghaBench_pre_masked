
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo {struct priv* priv; } ;
struct priv {TYPE_1__* next_image; } ;
struct TYPE_2__ {scalar_t__* planes; } ;
typedef int AVMediaCodecBuffer ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_1__**) ;

__attribute__((used)) static void FUNC_2(struct vo *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    if (!VAR_1->next_image)
        return;

    AVMediaCodecBuffer *VAR_2 = (AVMediaCodecBuffer *)VAR_1->next_image->planes[3];
    FUNC_0(VAR_2, 1);
    FUNC_1(&VAR_1->next_image);
}
