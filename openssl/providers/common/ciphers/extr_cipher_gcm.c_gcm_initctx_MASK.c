
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pad; size_t ivlen_min; size_t keylen; int libctx; int const* hw; scalar_t__ ivlen; void* tls_aad_len; void* taglen; int mode; } ;
typedef int PROV_GCM_HW ;
typedef TYPE_1__ PROV_GCM_CTX ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (void*) ;
 void* VAR_3 ;

void FUNC_1(void *VAR_4, PROV_GCM_CTX *VAR_5, size_t VAR_6,
                 const PROV_GCM_HW *VAR_7, size_t VAR_8)
{
    VAR_5->pad = 1;
    VAR_5->mode = VAR_0;
    VAR_5->taglen = VAR_3;
    VAR_5->tls_aad_len = VAR_3;
    VAR_5->ivlen_min = VAR_8;
    VAR_5->ivlen = (VAR_2 + VAR_1);
    VAR_5->keylen = VAR_6 / 8;
    VAR_5->hw = VAR_7;
    VAR_5->libctx = FUNC_0(VAR_4);
}
