
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int fd; scalar_t__ close_fd; int thread; } ;
struct mp_input_src {struct priv* priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mp_input_src*,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mp_input_src *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    FUNC_0(VAR_1->thread);
    if (VAR_1->close_fd)
        FUNC_2(VAR_1->fd);

    FUNC_1(VAR_0, "Exited.\n");
}
