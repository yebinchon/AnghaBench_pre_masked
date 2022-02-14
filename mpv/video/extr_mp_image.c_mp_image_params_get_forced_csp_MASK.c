
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_image_params {int hw_subfmt; int imgfmt; } ;
typedef enum mp_csp { ____Placeholder_mp_csp } mp_csp ;


 int FUNC_0 (int) ;

__attribute__((used)) static enum mp_csp FUNC_1(struct mp_image_params *VAR_0)
{
    int VAR_1 = VAR_0->hw_subfmt ? VAR_0->hw_subfmt : VAR_0->imgfmt;
    return FUNC_0(VAR_1);
}
