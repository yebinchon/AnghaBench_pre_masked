
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ num; int len; scalar_t__ type; unsigned char* data; } ;
struct TYPE_6__ {scalar_t__ currpkt; int droprec; unsigned int epoch; unsigned int currrec; unsigned int dropepoch; scalar_t__ injected; int pkts; } ;
typedef TYPE_1__ MEMPACKET_TEST_CTX ;
typedef TYPE_2__ MEMPACKET ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_3 (char*,unsigned char*,int) ;
 int FUNC_4 (unsigned char*,unsigned char*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 TYPE_2__* FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(BIO *VAR_7, char *VAR_8, int VAR_9)
{
    MEMPACKET_TEST_CTX *VAR_10 = FUNC_1(VAR_7);
    MEMPACKET *VAR_11;
    unsigned char *VAR_12;
    int VAR_13;
    unsigned int VAR_14, VAR_15, VAR_16, VAR_17;

    FUNC_0(VAR_7);
    VAR_11 = FUNC_7(VAR_10->pkts, 0);
    if (VAR_11 == ((void*)0) || VAR_11->num != VAR_10->currpkt) {

        FUNC_2(VAR_7);
        return -1;
    }
    (void)FUNC_6(VAR_10->pkts);
    VAR_10->currpkt++;

    if (VAR_9 > VAR_11->len)
        VAR_9 = VAR_11->len;

    if (VAR_11->type != VAR_3
            && (VAR_10->injected || VAR_10->droprec >= 0)) {






        for (VAR_13 = VAR_11->len, VAR_12 = VAR_11->data; VAR_13 > 0; VAR_13 -= VAR_16) {
            if (VAR_13 < VAR_0)
                return -1;
            VAR_17 = (VAR_12[VAR_1] << 8) | VAR_12[VAR_2];
            if (VAR_17 != VAR_10->epoch) {
                VAR_10->epoch = VAR_17;
                VAR_10->currrec = 0;
            }
            VAR_14 = VAR_10->currrec;
            VAR_15 = 0;
            do {
                VAR_12[VAR_6 - VAR_15] = VAR_14 & 0xFF;
                VAR_14 >>= 8;
                VAR_15++;
            } while (VAR_14 > 0);

            VAR_16 = ((VAR_12[VAR_4] << 8) | VAR_12[VAR_5])
                  + VAR_0;
            if (VAR_13 < (int)VAR_16)
                return -1;
            if (VAR_10->droprec == (int)VAR_10->currrec && VAR_10->dropepoch == VAR_17) {
                if (VAR_13 > (int)VAR_16)
                    FUNC_4(VAR_12, VAR_12 + VAR_16, VAR_13 - VAR_16);
                VAR_9 -= VAR_16;
                VAR_10->droprec = -1;
                if (VAR_9 == 0)
                    FUNC_2(VAR_7);
            } else {
                VAR_12 += VAR_16;
            }

            VAR_10->currrec++;
        }
    }

    FUNC_3(VAR_8, VAR_11->data, VAR_9);
    FUNC_5(VAR_11);
    return VAR_9;
}
