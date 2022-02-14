
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ HANDLE ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int *) ;
 scalar_t__ FUNC_2 (char*,int ,int ,int *,int ,int ,int ) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 () ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (int,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int,char*,...) ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char*,char*) ;

__attribute__((used)) static void FUNC_16(void)
{
    char VAR_5[VAR_4], VAR_6[VAR_4];
    HANDLE VAR_7;
    int VAR_8;
    WCHAR VAR_9[VAR_4];

    if (!&FUNC_13) return;

    FUNC_4(VAR_4, VAR_9);
    FUNC_8(VAR_4, VAR_5);
    VAR_8 = FUNC_10(VAR_5);
    FUNC_12(VAR_8, "SetCurrentDirectory error %d\n", FUNC_6());

    VAR_8 = FUNC_1("foo", ((void*)0));
    FUNC_12(VAR_8, "CreateDirectory error %d\n", FUNC_6());
    VAR_7 = FUNC_2("foo\\file", VAR_1, 0, ((void*)0), VAR_0, 0, 0);
    FUNC_12(VAR_7 != VAR_3, "failed to create temp file\n");
    FUNC_0(VAR_7);
    VAR_8 = FUNC_1("bar", ((void*)0));
    FUNC_12(VAR_8, "CreateDirectory error %d\n", FUNC_6());
    VAR_8 = FUNC_10("bar");
    FUNC_12(VAR_8, "SetCurrentDirectory error %d\n", FUNC_6());

    VAR_8 = FUNC_5("..\\foo\\file");
    FUNC_12(VAR_8 != VAR_2, "GetFileAttributes error %d\n", FUNC_6());

    FUNC_15(VAR_6, "deadbeef");
    VAR_8 = FUNC_13(".", VAR_6, VAR_4);
    FUNC_12(VAR_8, "GetLongPathName error %d\n", FUNC_6());
    FUNC_12(!FUNC_14(VAR_6, "."), "expected ., got %s\n", VAR_6);
    FUNC_15(VAR_6, "deadbeef");
    VAR_8 = FUNC_7(".", VAR_6, VAR_4);
    FUNC_12(VAR_8, "GetShortPathName error %d\n", FUNC_6());
    FUNC_12(!FUNC_14(VAR_6, "."), "expected ., got %s\n", VAR_6);

    FUNC_15(VAR_6, "deadbeef");
    VAR_8 = FUNC_13("..", VAR_6, VAR_4);
    FUNC_12(VAR_8, "GetLongPathName error %d\n", FUNC_6());
    FUNC_12(!FUNC_14(VAR_6, ".."), "expected .., got %s\n", VAR_6);
    FUNC_15(VAR_6, "deadbeef");
    VAR_8 = FUNC_7("..", VAR_6, VAR_4);
    FUNC_12(VAR_8, "GetShortPathName error %d\n", FUNC_6());
    FUNC_12(!FUNC_14(VAR_6, ".."), "expected .., got %s\n", VAR_6);

    FUNC_15(VAR_6, "deadbeef");
    VAR_8 = FUNC_13("..\\foo\\file", VAR_6, VAR_4);
    FUNC_12(VAR_8, "GetLongPathName error %d\n", FUNC_6());
    FUNC_12(!FUNC_14(VAR_6, "..\\foo\\file"), "expected ..\\foo\\file, got %s\n", VAR_6);
    FUNC_15(VAR_6, "deadbeef");
    VAR_8 = FUNC_7("..\\foo\\file", VAR_6, VAR_4);
    FUNC_12(VAR_8, "GetShortPathName error %d\n", FUNC_6());
    FUNC_12(!FUNC_14(VAR_6, "..\\foo\\file"), "expected ..\\foo\\file, got %s\n", VAR_6);

    FUNC_15(VAR_6, "deadbeef");
    VAR_8 = FUNC_13(".\\..\\foo\\file", VAR_6, VAR_4);
    FUNC_12(VAR_8, "GetLongPathName error %d\n", FUNC_6());
    FUNC_12(!FUNC_14(VAR_6, ".\\..\\foo\\file"), "expected .\\..\\foo\\file, got %s\n", VAR_6);
    FUNC_15(VAR_6, "deadbeef");
    VAR_8 = FUNC_7(".\\..\\foo\\file", VAR_6, VAR_4);
    FUNC_12(VAR_8, "GetShortPathName error %d\n", FUNC_6());
    FUNC_12(!FUNC_14(VAR_6, ".\\..\\foo\\file"), "expected .\\..\\foo\\file, got %s\n", VAR_6);


    FUNC_15(VAR_6, "deadbeef");
    VAR_8 = FUNC_13("..\\\\foo\\file", VAR_6, VAR_4);
    FUNC_12(VAR_8, "GetLongPathName error %d\n", FUNC_6());
    FUNC_12(!FUNC_14(VAR_6, "..\\\\foo\\file"), "expected ..\\\\foo\\file, got %s\n", VAR_6);
    FUNC_15(VAR_6, "deadbeef");
    VAR_8 = FUNC_7("..\\\\foo\\file", VAR_6, VAR_4);
    FUNC_12(VAR_8, "GetShortPathName error %d\n", FUNC_6());
    FUNC_12(!FUNC_14(VAR_6, "..\\\\foo\\file"), "expected ..\\\\foo\\file, got %s\n", VAR_6);

    FUNC_10("..");
    FUNC_3("foo\\file");
    FUNC_9("foo");
    FUNC_9("bar");
    FUNC_11(VAR_9);
}
