
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {struct priv* priv; } ;
struct priv {scalar_t__ fb_queue_len; } ;


 int FUNC_0 (struct vo*) ;

__attribute__((used)) static void FUNC_1(struct vo *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    if (VAR_1->fb_queue_len > 0) {
        FUNC_0(VAR_0);
    }
}
