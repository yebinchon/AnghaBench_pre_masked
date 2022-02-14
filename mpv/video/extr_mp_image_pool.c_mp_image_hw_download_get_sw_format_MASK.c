
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_image {int hwctx; } ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int ,int ,int**,int ) ;
 int FUNC_2 (int) ;

int FUNC_3(struct mp_image *VAR_2)
{
    if (!VAR_2->hwctx)
        return 0;


    int VAR_3 = 0;
    enum AVPixelFormat *VAR_4;
    if (FUNC_1(VAR_2->hwctx,
            VAR_0, &VAR_4, 0) < 0)
        return 0;
    for (int VAR_5 = 0; VAR_4[VAR_5] != VAR_1; VAR_5++) {
        VAR_3 = FUNC_2(VAR_4[VAR_5]);
        if (VAR_3)
            break;
    }
    FUNC_0(VAR_4);

    return VAR_3;
}
