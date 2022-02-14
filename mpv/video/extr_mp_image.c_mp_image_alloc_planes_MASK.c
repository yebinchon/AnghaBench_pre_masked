
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mp_image {TYPE_1__** bufs; int h; int w; int imgfmt; int * planes; } ;
struct TYPE_3__ {int size; int data; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__**) ;
 int FUNC_3 (struct mp_image*,int,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int) ;

__attribute__((used)) static bool FUNC_5(struct mp_image *VAR_1)
{
    FUNC_0(!VAR_1->planes[0]);
    FUNC_0(!VAR_1->bufs[0]);

    int VAR_2 = VAR_0;

    int VAR_3 = FUNC_4(VAR_1->imgfmt, VAR_1->w, VAR_1->h, VAR_2);
    if (VAR_3 < 0)
        return 0;


    VAR_1->bufs[0] = FUNC_1(VAR_3 + VAR_2);
    if (!VAR_1->bufs[0])
        return 0;

    if (!FUNC_3(VAR_1, VAR_2, VAR_1->bufs[0]->data, VAR_1->bufs[0]->size)) {
        FUNC_2(&VAR_1->bufs[0]);
        return 0;
    }

    return 1;
}
