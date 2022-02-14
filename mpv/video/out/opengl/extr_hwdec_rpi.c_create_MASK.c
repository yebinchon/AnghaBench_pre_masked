
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_hwdec {int log; struct priv* priv; } ;
struct priv {int renderer; int log; } ;


 int VAR_0 ;
 int FUNC_0 (struct ra_hwdec*,char*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct ra_hwdec *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    VAR_2->log = VAR_1->log;

    FUNC_1();

    if (FUNC_4()) {
        FUNC_0(VAR_1, "Could not initialize MMAL.\n");
        return -1;
    }

    if (FUNC_2(VAR_0, &VAR_2->renderer))
    {
        FUNC_0(VAR_1, "Could not create MMAL renderer.\n");
        FUNC_3();
        return -1;
    }

    return 0;
}
