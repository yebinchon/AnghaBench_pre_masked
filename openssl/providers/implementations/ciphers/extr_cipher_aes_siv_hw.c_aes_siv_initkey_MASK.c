
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* ctr; void* cbc; int siv; } ;
typedef int SIV128_CONTEXT ;
typedef TYPE_1__ PROV_AES_SIV_CTX ;


 int FUNC_0 (int *,unsigned char const*,size_t,void*,void*) ;
 void* FUNC_1 (int *,char*,char*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
    PROV_AES_SIV_CTX *VAR_3 = (PROV_AES_SIV_CTX *)VAR_0;
    SIV128_CONTEXT *VAR_4 = &VAR_3->siv;
    size_t VAR_5 = VAR_2 / 2;

    switch (VAR_5) {
    case 16:
        VAR_3->cbc = FUNC_1(((void*)0), "AES-128-CBC", "");
        VAR_3->ctr = FUNC_1(((void*)0), "AES-128-CTR", "");
        break;
    case 24:
        VAR_3->cbc = FUNC_1(((void*)0), "AES-192-CBC", "");
        VAR_3->ctr = FUNC_1(((void*)0), "AES-192-CTR", "");
        break;
    case 32:
        VAR_3->cbc = FUNC_1(((void*)0), "AES-256-CBC", "");
        VAR_3->ctr = FUNC_1(((void*)0), "AES-256-CTR", "");
        break;
    default:
        return 0;
    }




    return FUNC_0(VAR_4, VAR_1, VAR_5, VAR_3->cbc, VAR_3->ctr);
}
