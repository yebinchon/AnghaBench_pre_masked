
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct access {int have; TYPE_1__* list; } ;
typedef int off_t ;
struct TYPE_2__ {int out; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int *,int ,struct access**) ;
 int FUNC_1 (int *,struct access*,int,unsigned char*,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct access*) ;
 int FUNC_6 (unsigned char*,int,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_7(int VAR_4, char **VAR_5)
{
    int VAR_6;
    off_t VAR_7;
    FILE *VAR_8;
    struct access *VAR_9 = ((void*)0);
    unsigned char VAR_10[VAR_0];


    if (VAR_4 != 2) {
        FUNC_4(VAR_2, "usage: zran file.gz\n");
        return 1;
    }
    VAR_8 = FUNC_3(VAR_5[1], "rb");
    if (VAR_8 == ((void*)0)) {
        FUNC_4(VAR_2, "zran: could not open %s for reading\n", VAR_5[1]);
        return 1;
    }


    VAR_6 = FUNC_0(VAR_8, VAR_1, &VAR_9);
    if (VAR_6 < 0) {
        FUNC_2(VAR_8);
        switch (VAR_6) {
        case 128:
            FUNC_4(VAR_2, "zran: out of memory\n");
            break;
        case 130:
            FUNC_4(VAR_2, "zran: compressed data error in %s\n", VAR_5[1]);
            break;
        case 129:
            FUNC_4(VAR_2, "zran: read error on %s\n", VAR_5[1]);
            break;
        default:
            FUNC_4(VAR_2, "zran: error %d while building index\n", VAR_6);
        }
        return 1;
    }
    FUNC_4(VAR_2, "zran: built index with %d access points\n", VAR_6);


    VAR_7 = (VAR_9->list[VAR_9->have - 1].out << 1) / 3;
    VAR_6 = FUNC_1(VAR_8, VAR_9, VAR_7, VAR_10, VAR_0);
    if (VAR_6 < 0)
        FUNC_4(VAR_2, "zran: extraction failed: %s error\n",
                VAR_6 == 128 ? "out of memory" : "input corrupted");
    else {
        FUNC_6(VAR_10, 1, VAR_6, VAR_3);
        FUNC_4(VAR_2, "zran: extracted %d bytes at %llu\n", VAR_6, VAR_7);
    }


    FUNC_5(VAR_9);
    FUNC_2(VAR_8);
    return 0;
}
