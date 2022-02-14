
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name ;
typedef int HGDIOBJ ;
typedef int HFONT ;
typedef int HDC ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int,int,int,int ,int ,int ,int ,int ,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int,char*) ;
 int VAR_6 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (int,char*,int ,char const*) ;

__attribute__((used)) static BOOL FUNC_8(HDC VAR_7, const char* VAR_8)
{
    char VAR_9[64];
    BOOL VAR_10;

    HFONT VAR_11 = FUNC_0(0, 0, 0, 0, VAR_5, VAR_4, VAR_4, VAR_4, VAR_1,
                            VAR_6, VAR_0, VAR_3, VAR_2, VAR_8);
    HGDIOBJ VAR_12 = FUNC_4(VAR_7, VAR_11);


    FUNC_5(0xdeadbeef);

    VAR_10 = FUNC_3(VAR_7, sizeof(VAR_9), VAR_9);
    FUNC_7(VAR_10, "GetTextFaceA error %lu for %s\n", FUNC_2(), VAR_8);
    FUNC_4(VAR_7, VAR_12);
    FUNC_1(VAR_11);

    if (VAR_10)
    {
        return !FUNC_6(VAR_9, VAR_8);
    }
    return VAR_4;
}
