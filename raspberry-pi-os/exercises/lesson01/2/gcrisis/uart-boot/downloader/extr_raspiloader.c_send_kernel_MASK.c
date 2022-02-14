
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int ssize_t ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,long,int ) ;
 int FUNC_4 (char const*,int ) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char*,char const*,size_t) ;
 int FUNC_7 (int,...) ;
 int VAR_5 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,char*,int) ;

void FUNC_10(int VAR_6, const char *VAR_7) {
    int VAR_8;
    off_t VAR_9;
    uint32_t VAR_10;
    ssize_t VAR_11;
    char *VAR_12;
    bool VAR_13 = 0;


    if ((VAR_8 = FUNC_4(VAR_7, VAR_2)) == -1) {
        FUNC_5(VAR_7);
        FUNC_0(VAR_6, VAR_1);
    }


    VAR_9 = FUNC_3(VAR_8, 0L, VAR_3);
    if (VAR_9 > 0x200000) {
        FUNC_1(VAR_5, "kernel too big\n");
        FUNC_0(VAR_6, VAR_1);
    }
    VAR_10 = FUNC_2(VAR_9);
    FUNC_3(VAR_8, 0L, VAR_4);

    FUNC_6("### sending kernel %s [%zu byte]\n", VAR_7, (size_t)VAR_9);


    VAR_12 = (uint8_t*)&VAR_10;
    VAR_11 = 0;
    while(VAR_11 < 4)
    {
        ssize_t VAR_14 = FUNC_9(VAR_6, &VAR_12[VAR_11], 4 - VAR_11);
         FUNC_8(VAR_6);
        if (VAR_14 == -1) {
            FUNC_5("write()");
            FUNC_0(VAR_6, VAR_1);
        }
        VAR_11 += VAR_14;
    }

    uint8_t VAR_15[4]={0};
    VAR_11=0;
    while(VAR_11<4){
    int VAR_16=FUNC_7(VAR_6, VAR_15, 4-VAR_11);
        VAR_11+=VAR_16;
    }
    uint32_t VAR_17=VAR_15[0]<<24|VAR_15[1]<<16|VAR_15[2]<<8|VAR_15[3];
    if(VAR_17!=VAR_10)
    {
        FUNC_5("size check error");
        FUNC_0(VAR_6, VAR_1);
    }
    while(!VAR_13)
    {
        char VAR_18[VAR_0];
        ssize_t VAR_19 = 0;
        ssize_t VAR_20 = FUNC_7(VAR_8, VAR_18, VAR_0);
        switch(VAR_20) {
        case -1:
            FUNC_5("read()");
            FUNC_0(VAR_6, VAR_1);
        case 0:
            VAR_13 = 1;
        }

        while(VAR_20 > 0)
        {
            ssize_t VAR_21 = FUNC_9(VAR_6, &VAR_18[VAR_19], VAR_20);

            FUNC_8(VAR_6);

            if (VAR_21 == -1) {
            FUNC_5("write()");
            FUNC_0(VAR_6, VAR_1);
            }
            VAR_20 -= VAR_21;
            VAR_19 += VAR_21;
        }
    }
    FUNC_1(VAR_5, "### finished sending\n");

    return;
}
