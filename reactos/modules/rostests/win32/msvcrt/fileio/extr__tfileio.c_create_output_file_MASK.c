
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;
typedef int FILE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;

__attribute__((used)) static BOOL FUNC_6(TCHAR* VAR_3, TCHAR* VAR_4, TCHAR* VAR_5)
{
    BOOL VAR_6 = VAR_0;
    FILE *VAR_7 = FUNC_2(VAR_3, VAR_4);
    if (VAR_7 != ((void*)0)) {
        if (FUNC_1(VAR_5, VAR_7) != VAR_2) {
            VAR_6 = VAR_1;
        } else {
            FUNC_3(FUNC_0("ERROR: failed to write data to file \"%s\"\n"), VAR_3);
            FUNC_3(FUNC_0("ERROR: ferror returned %d\n"), FUNC_5(VAR_7));
        }
        FUNC_4(VAR_7);
    } else {
        FUNC_3(FUNC_0("ERROR: failed to open/create file \"%s\" for output\n"), VAR_3);
        FUNC_3(FUNC_0("ERROR: ferror returned %d\n"), FUNC_5(VAR_7));
    }
    return VAR_6;
}
