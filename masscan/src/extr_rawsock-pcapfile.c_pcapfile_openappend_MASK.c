
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct PcapFile {unsigned int byte_order; int linktype; int * fp; int filename; } ;
typedef int newname ;
typedef int linkspec ;
typedef int FILE ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (unsigned int,unsigned char*) ;
 unsigned int FUNC_1 (unsigned int,unsigned char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (unsigned char*,int,int,int *) ;
 scalar_t__ FUNC_7 (int *,int ,int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (char*,char const*,int) ;
 int FUNC_10 (struct PcapFile*,int ,int) ;
 struct PcapFile* FUNC_11 (char const*,unsigned int) ;
 int FUNC_12 (char const*) ;
 size_t FUNC_13 (char*,int,char*,...) ;
 int VAR_5 ;
 char const* FUNC_14 (char const*,char) ;
 int FUNC_15 (char const*) ;
 scalar_t__ FUNC_16 (char const*,char*) ;

struct PcapFile *FUNC_17(const char *VAR_6, unsigned VAR_7)
{
    struct PcapFile *VAR_8;
    unsigned char VAR_9[24];
    unsigned VAR_10;
    unsigned VAR_11;
    FILE *VAR_12;




    VAR_12 = FUNC_4(VAR_6, "ab+");
    if (VAR_12 == ((void*)0) && VAR_4 == VAR_2) {
        return FUNC_11(VAR_6, VAR_7);
    }
    if (VAR_12 == ((void*)0)) {
        FUNC_5(VAR_5, "Could not open capture file to append frame\n");
        FUNC_12(VAR_6);
        return FUNC_17(VAR_6, VAR_7);
    }


    if (FUNC_6(VAR_9, 1, 24, VAR_12) != 24) {
        FUNC_5(VAR_5, "Error reading capture file header\n");
        FUNC_12(VAR_6);
        FUNC_3(VAR_12);
        return FUNC_17(VAR_6, VAR_7);
    }





    if (FUNC_7(VAR_12, 0, VAR_3) != 0) {
        FUNC_5(VAR_5, "Could not seek to end of capture file\n");
        FUNC_12(VAR_6);
        FUNC_3(VAR_12);
        return 0;
    }



    switch (VAR_9[0]<<24 | VAR_9[1]<<16 | VAR_9[2]<<8 | VAR_9[3]) {
    case 0xa1b2c3d4: VAR_10 = VAR_0; break;
    case 0xd4c3b2a1: VAR_10 = VAR_1; break;
    default:
        FUNC_5(VAR_5, "%s: unknown byte-order in cap file\n", VAR_6);
        FUNC_3(VAR_12);
        return FUNC_17(VAR_6, VAR_7);
    }



    {
        unsigned VAR_13 = FUNC_0(VAR_10, VAR_9+4);
        unsigned VAR_14 = FUNC_0(VAR_10, VAR_9+6);

        if (VAR_13 != 2 || VAR_14 != 4)
            FUNC_5(VAR_5, "%s: unknown version %u.%u\n", VAR_6, VAR_13, VAR_14);
    }


    VAR_11 = FUNC_1(VAR_10, VAR_9+20);
    if (VAR_7 != VAR_11) {




        char VAR_15[32];
        size_t VAR_16;
        char VAR_17[sizeof(VAR_8->filename)];
        size_t VAR_18;

        FUNC_3(VAR_12);

        VAR_16 = FUNC_13(VAR_15, sizeof(VAR_15), "-linktype%d", VAR_7);

        if (FUNC_16(VAR_6, VAR_15) || FUNC_15(VAR_6) + VAR_16 + 1 > sizeof(VAR_17)) {



            FUNC_5(VAR_5, "Giving up on appending %u-type frames onto a %u-type file\n",
                    VAR_7, VAR_11);
            return 0;
        }

        if (FUNC_14(VAR_6, '.'))
            VAR_18 = FUNC_14(VAR_6, '.')-VAR_6;
        else
            VAR_18 = FUNC_15(VAR_6);

        FUNC_9(VAR_17, VAR_6, VAR_18);
        FUNC_9(VAR_17+VAR_18, VAR_15, VAR_16);
        FUNC_9(VAR_17+VAR_18+VAR_16, VAR_6+VAR_18, FUNC_15(VAR_6+VAR_18)+1);

        return FUNC_17(VAR_17, VAR_7);
    }



    {

        VAR_8 = (struct PcapFile*)FUNC_8(sizeof(*VAR_8));
        if (VAR_8 == ((void*)0))
            FUNC_2(1);
        FUNC_10(VAR_8,0,sizeof(*VAR_8));
        VAR_8->byte_order = VAR_10;
        FUNC_13(VAR_8->filename, sizeof(VAR_8->filename),
                 "%s", VAR_6);
        VAR_8->fp = VAR_12;
        VAR_8->byte_order = VAR_10;
        VAR_8->linktype = VAR_7;
    }

    return VAR_8;
}
