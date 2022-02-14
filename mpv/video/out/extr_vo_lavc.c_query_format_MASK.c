
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vo {struct priv* priv; } ;
struct priv {TYPE_3__* enc; } ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_6__ {TYPE_2__* encoder; } ;
struct TYPE_5__ {TYPE_1__* codec; } ;
struct TYPE_4__ {int* pix_fmts; } ;


 int const VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct vo *VAR_1, int VAR_2)
{
    struct priv *VAR_3 = VAR_1->priv;

    enum AVPixelFormat VAR_4 = FUNC_0(VAR_2);
    const enum AVPixelFormat *VAR_5 = VAR_3->enc->encoder->codec->pix_fmts;

    if (!VAR_5)
        return 1;

    while (*VAR_5 != VAR_0) {
        if (*VAR_5 == VAR_4)
            return 1;
        VAR_5++;
    }

    return 0;
}
