
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xvctx {int original_image; } ;
struct vo {struct xvctx* priv; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vo*,int ) ;
 int FUNC_1 (struct vo*) ;
 int FUNC_2 (struct vo*,int) ;
 int FUNC_3 (struct vo*,int*,int ,void*) ;

__attribute__((used)) static int FUNC_4(struct vo *VAR_3, uint32_t VAR_4, void *VAR_5)
{
    struct xvctx *VAR_6 = VAR_3->priv;
    switch (VAR_4) {
    case 128:
        FUNC_1(VAR_3);
        return VAR_2;
    case 129:
        FUNC_0(VAR_3, VAR_6->original_image);
        return 1;
    }
    int VAR_7 = 0;
    int VAR_8 = FUNC_3(VAR_3, &VAR_7, VAR_4, VAR_5);
    if (VAR_7 & (VAR_0 | VAR_1))
        FUNC_1(VAR_3);
    FUNC_2(VAR_3, VAR_7);
    return VAR_8;
}
