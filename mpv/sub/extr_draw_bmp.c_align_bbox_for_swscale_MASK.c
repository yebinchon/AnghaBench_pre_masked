
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_rect {int member_3; int member_2; int member_1; int member_0; } ;
struct mp_image {int h; int w; } ;


 int FUNC_0 (int,int,struct mp_rect*) ;
 int FUNC_1 (struct mp_image*,int*,int*) ;
 int FUNC_2 (struct mp_rect*,struct mp_rect*) ;

__attribute__((used)) static bool FUNC_3(struct mp_image *VAR_0, struct mp_rect *VAR_1)
{
    struct mp_rect VAR_2 = {0, 0, VAR_0->w, VAR_0->h};

    if (!FUNC_2(VAR_1, &VAR_2))
        return 0;
    int VAR_3, VAR_4;
    FUNC_1(VAR_0, &VAR_3, &VAR_4);
    FUNC_0(VAR_3, VAR_4, VAR_1);
    return FUNC_2(VAR_1, &VAR_2);
}
