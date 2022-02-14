
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* buf; int * ctx; } ;
typedef TYPE_1__ loopargs_t ;
typedef int EVP_CIPHER_CTX ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int *,int *,int ,int) ;
 int FUNC_2 (int *,unsigned char*,int*) ;
 int FUNC_3 (int *,unsigned char*,int*,unsigned char*,int) ;
 int FUNC_4 (int *,unsigned char*,int*) ;
 int FUNC_5 (int *,unsigned char*,int*,unsigned char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static int FUNC_6(void *VAR_5)
{
    loopargs_t *VAR_6 = *(loopargs_t **) VAR_5;
    unsigned char *VAR_7 = VAR_6->buf;
    EVP_CIPHER_CTX *VAR_8 = VAR_6->ctx;
    int VAR_9, VAR_10, VAR_11;

    int VAR_12 = VAR_3 * 4 * VAR_2[0] / VAR_2[VAR_4];

    if (VAR_0) {
        for (VAR_10 = 0; FUNC_0(VAR_12); VAR_10++) {
            VAR_11 = FUNC_3(VAR_8, VAR_7, &VAR_9, VAR_7, VAR_2[VAR_4]);
            if (VAR_11 != 1) {

                FUNC_1(VAR_8, ((void*)0), ((void*)0), ((void*)0), VAR_1, -1);
            }
        }
    } else {
        for (VAR_10 = 0; FUNC_0(VAR_12); VAR_10++) {
            VAR_11 = FUNC_5(VAR_8, VAR_7, &VAR_9, VAR_7, VAR_2[VAR_4]);
            if (VAR_11 != 1) {

                FUNC_1(VAR_8, ((void*)0), ((void*)0), ((void*)0), VAR_1, -1);
            }
        }
    }
    if (VAR_0)
        FUNC_2(VAR_8, VAR_7, &VAR_9);
    else
        FUNC_4(VAR_8, VAR_7, &VAR_9);
    return VAR_10;
}
