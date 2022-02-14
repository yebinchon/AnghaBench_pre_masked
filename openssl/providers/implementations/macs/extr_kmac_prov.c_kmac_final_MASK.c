
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmac_data_st {int out_len; scalar_t__ xof_mode; int * ctx; } ;
typedef int EVP_MD_CTX ;


 scalar_t__ FUNC_0 (int *,unsigned char*,int) ;
 scalar_t__ FUNC_1 (int *,unsigned char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (unsigned char*,int*,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, unsigned char *VAR_2, size_t *VAR_3,
                      size_t VAR_4)
{
    struct kmac_data_st *VAR_5 = VAR_1;
    EVP_MD_CTX *VAR_6 = VAR_5->ctx;
    int VAR_7, VAR_8;
    unsigned char VAR_9[VAR_0];
    int VAR_10;


    VAR_7 = (VAR_5->xof_mode ? 0 : (VAR_5->out_len * 8));

    VAR_10 = FUNC_2(VAR_9, &VAR_8, VAR_7)
        && FUNC_1(VAR_6, VAR_9, VAR_8)
        && FUNC_0(VAR_6, VAR_2, VAR_5->out_len);
    if (VAR_10 && VAR_3 != ((void*)0))
        *VAR_3 = VAR_5->out_len;
    return VAR_10;
}
