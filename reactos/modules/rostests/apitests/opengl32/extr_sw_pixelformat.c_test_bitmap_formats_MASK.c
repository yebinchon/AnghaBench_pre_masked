
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_color {int dummy; } ;
typedef int INT ;
typedef int * HDC ;
typedef int * HBITMAP ;


 int FUNC_0 (int const*) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int const,void**) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int *,struct test_color const**) ;
 int FUNC_7 (char*,int const) ;

__attribute__((used)) static void FUNC_8(const struct test_color ** VAR_0)
{
    HBITMAP VAR_1, VAR_2;
    HDC VAR_3;
    static const INT VAR_4 [] = {4, 8, 16, 24, 32};
    INT VAR_5;
    void* VAR_6;

    VAR_3 = FUNC_1(((void*)0));
    FUNC_5 (VAR_3 != ((void*)0), "Failed creating a memory DC.\n");

    for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4); VAR_5++)
    {
        VAR_2 = FUNC_4(VAR_4[VAR_5], &VAR_6);
        FUNC_5(VAR_2 != ((void*)0), "Failed to create DIB for %u bpp\n", VAR_4[VAR_5]);

        VAR_1 = FUNC_3(VAR_3, VAR_2);
        FUNC_5 (VAR_1 != ((void*)0), "Failed to select the DIB\n");

        FUNC_7("testing DIB %ubpp\n", VAR_4[VAR_5]);

        FUNC_6(VAR_3, VAR_0);

        FUNC_3(VAR_3, VAR_1);
        FUNC_2(VAR_2);
    }
}
