
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_hwdec {struct cuda_hw_priv* priv; } ;
struct cuda_hw_priv {TYPE_1__* cu; } ;
struct TYPE_2__ {int (* cuGetErrorString ) (int ,char const**) ;int (* cuGetErrorName ) (int ,char const**) ;} ;
typedef int CUresult ;


 int VAR_0 ;
 int FUNC_0 (struct ra_hwdec const*,char*,...) ;
 int FUNC_1 (struct ra_hwdec const*,char*,char const*) ;
 int FUNC_2 (int ,char const**) ;
 int FUNC_3 (int ,char const**) ;

int FUNC_4(const struct ra_hwdec *VAR_1, CUresult VAR_2, const char *VAR_3)
{
    const char *VAR_4;
    const char *VAR_5;

    struct cuda_hw_priv *VAR_6 = VAR_1->priv;

    FUNC_1(VAR_1, "Calling %s\n", VAR_3);

    if (VAR_2 == VAR_0)
        return 0;

    VAR_6->cu->cuGetErrorName(VAR_2, &VAR_4);
    VAR_6->cu->cuGetErrorString(VAR_2, &VAR_5);

    FUNC_0(VAR_1, "%s failed", VAR_3);
    if (VAR_4 && VAR_5)
        FUNC_0(VAR_1, " -> %s: %s", VAR_4, VAR_5);
    FUNC_0(VAR_1, "\n");

    return -1;
}
