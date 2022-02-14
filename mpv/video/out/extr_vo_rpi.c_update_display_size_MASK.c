
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct vo {struct priv* priv; } ;
struct priv {scalar_t__ w; scalar_t__ h; } ;


 int FUNC_0 (struct vo*,char*) ;
 int FUNC_1 (struct vo*,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct vo *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    uint32_t VAR_2 = 0, VAR_3 = 0;
    if (FUNC_2(0, &VAR_2, &VAR_3) < 0) {
        FUNC_0(VAR_0, "Could not get display size.\n");
        return -1;
    }

    if (VAR_1->w == VAR_2 && VAR_1->h == VAR_3)
        return 0;

    VAR_1->w = VAR_2;
    VAR_1->h = VAR_3;

    FUNC_1(VAR_0, "Display size: %dx%d\n", VAR_1->w, VAR_1->h);

    return 0;
}
