
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* buf; unsigned char* buf2; unsigned int siglen; int ** ecdsa; } ;
typedef TYPE_1__ loopargs_t ;
typedef int EC_KEY ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned char*,int,unsigned char*,unsigned int,int *) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int ** VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static int FUNC_4(void *VAR_3)
{
    loopargs_t *VAR_4 = *(loopargs_t **) VAR_3;
    unsigned char *VAR_5 = VAR_4->buf;
    EC_KEY **VAR_6 = VAR_4->ecdsa;
    unsigned char *VAR_7 = VAR_4->buf2;
    unsigned int VAR_8 = VAR_4->siglen;
    int VAR_9, VAR_10;
    for (VAR_10 = 0; FUNC_1(VAR_1[VAR_2][1]); VAR_10++) {
        VAR_9 = FUNC_2(0, VAR_5, 20, VAR_7, VAR_8, VAR_6[VAR_2]);
        if (VAR_9 != 1) {
            FUNC_0(VAR_0, "ECDSA verify failure\n");
            FUNC_3(VAR_0);
            VAR_10 = -1;
            break;
        }
    }
    return VAR_10;
}
