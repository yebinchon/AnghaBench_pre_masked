
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {struct priv* priv; } ;
struct priv {scalar_t__ display; scalar_t__ update; int display_nr; } ;


 int FUNC_0 (struct vo*,char*) ;
 int FUNC_1 (struct vo*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int ,struct vo*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(struct vo *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;

    VAR_2->display = FUNC_3(VAR_2->display_nr);
    VAR_2->update = FUNC_4(0);
    if (!VAR_2->display || !VAR_2->update) {
        FUNC_0(VAR_1, "Could not get DISPMANX objects.\n");
        if (VAR_2->display)
            FUNC_2(VAR_2->display);
        VAR_2->display = 0;
        VAR_2->update = 0;
        return -1;
    }

    FUNC_1(VAR_1);

    FUNC_5(VAR_2->display, VAR_0, VAR_1);

    return 0;
}
