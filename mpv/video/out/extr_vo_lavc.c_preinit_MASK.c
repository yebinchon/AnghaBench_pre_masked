
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {int log; int encode_lavc_ctx; struct priv* priv; } ;
struct priv {int enc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct priv*,int ) ;

__attribute__((used)) static int FUNC_2(struct vo *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    VAR_2->enc = FUNC_0(VAR_1->encode_lavc_ctx, VAR_0, VAR_1->log);
    if (!VAR_2->enc)
        return -1;
    FUNC_1(VAR_2, VAR_2->enc);
    return 0;
}
