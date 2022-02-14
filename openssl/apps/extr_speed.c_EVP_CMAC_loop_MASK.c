
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mac ;
struct TYPE_2__ {unsigned char* buf; int * cmac_ctx; } ;
typedef TYPE_1__ loopargs_t ;
typedef int key ;
typedef int CMAC_CTX ;


 int FUNC_0 (int *,unsigned char*,size_t*) ;
 int FUNC_1 (int *,char const*,int,int ,int *) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static int FUNC_4(void *VAR_4)
{
    loopargs_t *VAR_5 = *(loopargs_t **) VAR_4;
    unsigned char *VAR_6 = VAR_5->buf;
    CMAC_CTX *VAR_7 = VAR_5->cmac_ctx;
    static const char VAR_8[16] = "This is a key...";
    unsigned char VAR_9[16];
    size_t VAR_10 = sizeof(VAR_9);
    int VAR_11;

    int VAR_12 = VAR_2 * 4 * VAR_1[0] / VAR_1[VAR_3];


    for (VAR_11 = 0; FUNC_3(VAR_12); VAR_11++) {
        if (!FUNC_1(VAR_7, VAR_8, sizeof(VAR_8), VAR_0, ((void*)0))
                || !FUNC_2(VAR_7, VAR_6, VAR_1[VAR_3])
                || !FUNC_0(VAR_7, VAR_9, &VAR_10))
            return -1;
    }
    return VAR_11;
}
