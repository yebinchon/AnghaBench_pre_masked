
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* opaque; void* zfree; void* zalloc; } ;
typedef TYPE_1__ z_stream ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,char*,char*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int,unsigned char*) ;
 char* FUNC_5 (int) ;
 unsigned char* VAR_2 ;
 int FUNC_6 (char*,char*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*) ;

int FUNC_9(int VAR_4, char **VAR_5)
{
    int VAR_6, VAR_7, VAR_8;
    char *VAR_9;
    unsigned char *VAR_10;
    z_stream VAR_11;


    VAR_10 = VAR_2;
    VAR_11.zalloc = VAR_0;
    VAR_11.zfree = VAR_0;
    VAR_11.opaque = VAR_0;
    VAR_6 = FUNC_4(&VAR_11, 15, VAR_10);
    if (VAR_6 != VAR_1) {
        FUNC_0(VAR_3, "gun out of memory error--aborting\n");
        return 1;
    }


    VAR_4--;
    VAR_5++;
    VAR_8 = 0;
    if (VAR_4 && FUNC_7(*VAR_5, "-h") == 0) {
        FUNC_0(VAR_3, "gun 1.6 (17 Jan 2010)\n");
        FUNC_0(VAR_3, "Copyright (C) 2003-2010 Mark Adler\n");
        FUNC_0(VAR_3, "usage: gun [-t] [file1.gz [file2.Z ...]]\n");
        return 0;
    }
    if (VAR_4 && FUNC_7(*VAR_5, "-t") == 0) {
        VAR_8 = 1;
        VAR_4--;
        VAR_5++;
    }
    if (VAR_4)
        do {
            if (VAR_8)
                VAR_9 = ((void*)0);
            else {
                VAR_7 = (int)FUNC_8(*VAR_5);
                if (FUNC_7(*VAR_5 + VAR_7 - 3, ".gz") == 0 ||
                    FUNC_7(*VAR_5 + VAR_7 - 3, "-gz") == 0)
                    VAR_7 -= 3;
                else if (FUNC_7(*VAR_5 + VAR_7 - 2, ".z") == 0 ||
                    FUNC_7(*VAR_5 + VAR_7 - 2, "-z") == 0 ||
                    FUNC_7(*VAR_5 + VAR_7 - 2, "_z") == 0 ||
                    FUNC_7(*VAR_5 + VAR_7 - 2, ".Z") == 0)
                    VAR_7 -= 2;
                else {
                    FUNC_0(VAR_3, "gun error: no gz type on %s--skipping\n",
                            *VAR_5);
                    continue;
                }
                VAR_9 = FUNC_5(VAR_7 + 1);
                if (VAR_9 == ((void*)0)) {
                    FUNC_0(VAR_3, "gun out of memory error--aborting\n");
                    VAR_6 = 1;
                    break;
                }
                FUNC_6(VAR_9, *VAR_5, VAR_7);
                VAR_9[VAR_7] = 0;
            }
            VAR_6 = FUNC_2(&VAR_11, *VAR_5, VAR_9, VAR_8);
            if (VAR_9 != ((void*)0)) FUNC_1(VAR_9);
            if (VAR_6) break;
        } while (VAR_5++, --VAR_4);
    else
        VAR_6 = FUNC_2(&VAR_11, ((void*)0), ((void*)0), VAR_8);


    FUNC_3(&VAR_11);
    return VAR_6;
}
