
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hash_ctx; } ;
typedef TYPE_1__ jbig2dec_params_t ;
struct TYPE_6__ {unsigned int stride; unsigned int height; int data; } ;
typedef TYPE_2__ Jbig2Image ;


 int FUNC_0 (int ,int ,unsigned int) ;

__attribute__((used)) static void
FUNC_1(jbig2dec_params_t *VAR_0, Jbig2Image *VAR_1)
{
    unsigned int VAR_2 = VAR_1->stride * VAR_1->height;

    FUNC_0(VAR_0->hash_ctx, VAR_1->data, VAR_2);
}
