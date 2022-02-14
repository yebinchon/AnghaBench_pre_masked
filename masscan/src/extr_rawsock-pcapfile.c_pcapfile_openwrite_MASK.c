
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct PcapFile {unsigned int linktype; int byte_order; int * fp; int filename; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int,int,int *) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct PcapFile*,int ,int) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int ,int,char*,char const*) ;
 int VAR_1 ;

struct PcapFile *FUNC_9(const char *VAR_2, unsigned VAR_3)
{
    char VAR_4[] =
            "\xd4\xc3\xb2\xa1\x02\x00\x04\x00"
            "\x00\x00\x00\x00\x00\x00\x00\x00"
            "\xff\xff\x00\x00\x69\x00\x00\x00";
    FILE *VAR_5;

    VAR_4[20] = (char)(VAR_3>>0);
    VAR_4[21] = (char)(VAR_3>>8);


    VAR_5 = FUNC_2(VAR_2, "wb");
    if (VAR_5 == ((void*)0)) {
        FUNC_3(VAR_1, "Could not open capture file\n");
        FUNC_7(VAR_2);
        return 0;
    }


    if (FUNC_4(VAR_4, 1, 24, VAR_5) != 24) {
        FUNC_3(VAR_1, "Could not write capture file header\n");
        FUNC_7(VAR_2);
        FUNC_1(VAR_5);
        return 0;
    }

    {
        struct PcapFile *VAR_6 = 0;
        VAR_6 = (struct PcapFile*)FUNC_5(sizeof(*VAR_6));
        if (VAR_6 == ((void*)0))
            FUNC_0(1);
        FUNC_6(VAR_6,0,sizeof(*VAR_6));

        FUNC_8(VAR_6->filename, sizeof(VAR_6->filename),
                 "%s", VAR_2);

        VAR_6->fp = VAR_5;
        VAR_6->byte_order = VAR_0;
        VAR_6->linktype = VAR_3;
        return VAR_6;
    }

}
