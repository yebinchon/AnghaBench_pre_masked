
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vo {struct priv* priv; } ;
struct priv {int display; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct vo*) ;

__attribute__((used)) static int FUNC_2(struct vo *VAR_2, uint32_t VAR_3, void *VAR_4)
{
    struct priv *VAR_5 = VAR_2->priv;
    switch (VAR_3) {
    case 129:
        FUNC_1(VAR_2);
        return VAR_1;
    case 128:
        FUNC_0(VAR_5->display, (char *)VAR_4);
        return VAR_1;
    }
    return VAR_0;
}
