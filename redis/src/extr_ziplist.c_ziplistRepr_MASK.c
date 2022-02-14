
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int headersize; unsigned int len; int prevrawlen; int encoding; int prevrawlensize; } ;
typedef TYPE_1__ zlentry ;


 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (unsigned char*) ;
 unsigned char VAR_0 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (unsigned char*,int,int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,...) ;
 int VAR_1 ;
 int FUNC_10 (unsigned char*,TYPE_1__*) ;
 scalar_t__ FUNC_11 (unsigned char*,int ) ;

void FUNC_12(unsigned char *VAR_2) {
    unsigned char *VAR_3;
    int VAR_4 = 0;
    zlentry VAR_5;

    FUNC_9(
        "{total bytes %d} "
        "{num entries %u}\n"
        "{tail offset %u}\n",
        FUNC_7(FUNC_0(VAR_2)),
        FUNC_6(FUNC_2(VAR_2)),
        FUNC_7(FUNC_3(VAR_2)));
    VAR_3 = FUNC_1(VAR_2);
    while(*VAR_3 != VAR_0) {
        FUNC_10(VAR_3, &VAR_5);
        FUNC_9(
            "{\n"
                "\taddr 0x%08lx,\n"
                "\tindex %2d,\n"
                "\toffset %5ld,\n"
                "\thdr+entry len: %5u,\n"
                "\thdr len%2u,\n"
                "\tprevrawlen: %5u,\n"
                "\tprevrawlensize: %2u,\n"
                "\tpayload %5u\n",
            (long unsigned)VAR_3,
            VAR_4,
            (unsigned long) (VAR_3-VAR_2),
            VAR_5.headersize+VAR_5.len,
            VAR_5.headersize,
            VAR_5.prevrawlen,
            VAR_5.prevrawlensize,
            VAR_5.len);
        FUNC_9("\tbytes: ");
        for (unsigned int VAR_6 = 0; VAR_6 < VAR_5.headersize+VAR_5.len; VAR_6++) {
            FUNC_9("%02x|",VAR_3[VAR_6]);
        }
        FUNC_9("\n");
        VAR_3 += VAR_5.headersize;
        if (FUNC_4(VAR_5.encoding)) {
            FUNC_9("\t[str]");
            if (VAR_5.len > 40) {
                if (FUNC_5(VAR_3,40,1,VAR_1) == 0) FUNC_8("fwrite");
                FUNC_9("...");
            } else {
                if (VAR_5.len &&
                    FUNC_5(VAR_3,VAR_5.len,1,VAR_1) == 0) FUNC_8("fwrite");
            }
        } else {
            FUNC_9("\t[int]%lld", (long long) FUNC_11(VAR_3,VAR_5.encoding));
        }
        FUNC_9("\n}\n");
        VAR_3 += VAR_5.len;
        VAR_4++;
    }
    FUNC_9("{end}\n\n");
}
