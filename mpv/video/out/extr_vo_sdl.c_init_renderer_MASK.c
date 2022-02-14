
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {struct priv* priv; } ;
struct priv {scalar_t__ renderer_index; } ;


 int FUNC_0 (struct vo*,char*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (struct vo*,int,int *) ;

__attribute__((used)) static int FUNC_4(struct vo *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;

    int VAR_3 = FUNC_2();
    int VAR_4;

    if (VAR_2->renderer_index >= 0)
        if (FUNC_3(VAR_1, VAR_2->renderer_index, ((void*)0)))
            return 0;

    for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
        if (FUNC_3(VAR_1, VAR_4, FUNC_1(VAR_0)))
            return 0;

    for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
        if (FUNC_3(VAR_1, VAR_4, ((void*)0)))
            return 0;

    FUNC_0(VAR_1, "No supported renderer\n");
    return -1;
}
