
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {struct priv* priv; } ;
struct priv {int shutdown; struct encoder_context* enc; } ;
struct encoder_context {int dummy; } ;


 int FUNC_0 (struct encoder_context*,int *) ;

__attribute__((used)) static void FUNC_1(struct vo *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    struct encoder_context *VAR_2 = VAR_1->enc;

    if (!VAR_1->shutdown)
        FUNC_0(VAR_2, ((void*)0));
}
