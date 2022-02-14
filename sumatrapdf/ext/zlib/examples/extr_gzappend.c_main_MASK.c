
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int z_stream ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (char*,int,int *,int) ;
 int FUNC_3 (char*) ;

int FUNC_4(int VAR_1, char **VAR_2)
{
    int VAR_3, VAR_4;
    z_stream VAR_5;


    VAR_1--; VAR_2++;


    if (*VAR_2 == ((void*)0)) {
        FUNC_3(
            "gzappend 1.2 (11 Oct 2012) Copyright (C) 2003, 2012 Mark Adler\n"
               );
        FUNC_3(
            "usage: gzappend [-level] file.gz [ addthis [ andthis ... ]]\n");
        return 0;
    }


    VAR_4 = VAR_0;
    if (VAR_2[0][0] == '-') {
        if (VAR_2[0][1] < '0' || VAR_2[0][1] > '9' || VAR_2[0][2] != 0)
            FUNC_0("invalid compression level", "");
        VAR_4 = VAR_2[0][1] - '0';
        if (*++VAR_2 == ((void*)0)) FUNC_0("no gzip file name after options", "");
    }


    VAR_3 = FUNC_1(*VAR_2++, &VAR_5, VAR_4);


    if (*VAR_2 == ((void*)0))
        FUNC_2(((void*)0), VAR_3, &VAR_5, 1);
    else
        do {
            FUNC_2(*VAR_2, VAR_3, &VAR_5, VAR_2[1] == ((void*)0));
        } while (*++VAR_2 != ((void*)0));
    return 0;
}
