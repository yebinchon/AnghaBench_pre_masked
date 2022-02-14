
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int signature ;
typedef int ar_stream ;
typedef int ar_archive_rar ;
typedef int ar_archive ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int,int ,int ,int ,int ,int *,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*) ;

ar_archive *FUNC_5(ar_stream *VAR_6)
{
    char VAR_7[VAR_0];
    if (!FUNC_2(VAR_6, 0, VAR_1))
        return ((void*)0);
    if (FUNC_1(VAR_6, VAR_7, sizeof(VAR_7)) != sizeof(VAR_7))
        return ((void*)0);
    if (FUNC_3(VAR_7, "Rar!\x1A\x07\x00", sizeof(VAR_7)) != 0) {
        if (FUNC_3(VAR_7, "Rar!\x1A\x07\x01", sizeof(VAR_7)) == 0)
            FUNC_4("RAR 5 format isn't supported");
        else if (FUNC_3(VAR_7, "RE~^", 4) == 0)
            FUNC_4("Ancient RAR format isn't supported");
        else if (FUNC_3(VAR_7, "MZ", 2) == 0 || FUNC_3(VAR_7, "\x7F\x45LF", 4) == 0)
            FUNC_4("SFX archives aren't supported");
        return ((void*)0);
    }

    return FUNC_0(VAR_6, sizeof(ar_archive_rar), VAR_2, VAR_4, VAR_3, VAR_5, ((void*)0), VAR_0);
}
