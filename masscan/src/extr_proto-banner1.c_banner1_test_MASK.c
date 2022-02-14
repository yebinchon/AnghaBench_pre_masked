
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct PreprocessedInfo {int dummy; } ;
struct PcapFile {int dummy; } ;
typedef int px ;


 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (struct PcapFile*) ;
 unsigned int FUNC_2 (struct PcapFile*) ;
 struct PcapFile* FUNC_3 (char const*) ;
 int FUNC_4 (struct PcapFile*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned char*,int) ;
 unsigned int FUNC_5 (unsigned char*,unsigned int,unsigned int,struct PreprocessedInfo*) ;
 int VAR_0 ;

void
FUNC_6(const char *VAR_1)
{
    struct PcapFile *VAR_2;
    unsigned VAR_3;

    VAR_2 = FUNC_3(VAR_1);
    if (VAR_2 == ((void*)0)) {
        FUNC_0(VAR_0, "%s: can't open capture file\n", VAR_1);
        return;
    }

    VAR_3 = FUNC_2(VAR_2);

    for (;;) {
        int VAR_4;
        unsigned VAR_5;
        unsigned VAR_6;
        unsigned VAR_7;
        unsigned VAR_8;
        unsigned char VAR_9[65536];
        struct PreprocessedInfo VAR_10;
        unsigned VAR_11;


        VAR_4 = FUNC_4(
                    VAR_2,
                    &VAR_5, &VAR_6,
                    &VAR_7, &VAR_8,
                    VAR_9, sizeof(VAR_9));
        if (VAR_4 == 0)
            break;


        VAR_11 = FUNC_5(VAR_9, VAR_8, VAR_3, &VAR_10);
        if (VAR_11 == 0)
            continue;

    }

    FUNC_1(VAR_2);
}
