
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_regular_imgfmt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mp_regular_imgfmt*,int) ;
 scalar_t__ FUNC_1 (struct mp_regular_imgfmt*,struct mp_regular_imgfmt*) ;

int FUNC_2(struct mp_regular_imgfmt *VAR_2)
{
    for (int VAR_3 = VAR_1 + 1; VAR_3 < VAR_0; VAR_3++) {
        struct mp_regular_imgfmt VAR_4;
        if (FUNC_0(&VAR_4, VAR_3) && FUNC_1(VAR_2, &VAR_4))
            return VAR_3;
    }
    return 0;
}
