
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct test_color {int dummy; } ;
typedef int pfd ;
struct TYPE_3__ {int dwFlags; } ;
typedef TYPE_1__ PIXELFORMATDESCRIPTOR ;
typedef int * HWND ;
typedef int HDC ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*,int ,int,int,int,int,int *,int *,int *,int *) ;
 int FUNC_2 (int ,int,int,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int,char*,...) ;
 int * VAR_4 ;
 int FUNC_7 (int ,int,int ,struct test_color const*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_8(const struct test_color **VAR_5)
{
    int VAR_6, VAR_7, VAR_8;
    int VAR_9, VAR_10;
    HDC VAR_11;
    HWND VAR_12;
    PIXELFORMATDESCRIPTOR VAR_13;

    VAR_12 = FUNC_1("static", "Title", VAR_3, 10, 10, 200, 200, ((void*)0), ((void*)0),
            ((void*)0), ((void*)0));
    if (!VAR_12)
    {
        FUNC_6(VAR_12 != ((void*)0), "Failed to create a window.\n");
        return;
    }

    VAR_11 = FUNC_4( VAR_12 );
    VAR_7 = FUNC_2(VAR_11, 0, 0, ((void*)0));
    FUNC_6(VAR_7 > 0, "DescribePixelFormat failed.\n");

    for (VAR_6 = 1; VAR_6 <= VAR_7; VAR_6++)
    {
        VAR_8 = FUNC_2(VAR_11, VAR_6, sizeof(VAR_13), &VAR_13);
        FUNC_6(VAR_8 == VAR_7, "Number of pixel formats changed!\n");

        if (VAR_13.dwFlags & VAR_1)
            break;
    }

    FUNC_6(VAR_6 < VAR_7, "No generic pixel format!\n");


    for (VAR_9 = 0; VAR_9 < 3; VAR_9++)
    {

        for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_4); VAR_10++)
        {
            FUNC_7(VAR_11, VAR_7, VAR_6++, &VAR_5[0][VAR_9], VAR_4[VAR_10], VAR_2, VAR_0);
        }


        for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_4); VAR_10++)
        {
            FUNC_7(VAR_11, VAR_7, VAR_6++, &VAR_5[0][VAR_9], VAR_4[VAR_10], VAR_2, VAR_2);
        }
    }

    VAR_5++;


    while (*VAR_5)
    {
        for (VAR_9 = 0; VAR_9 < 3; VAR_9++)
        {
            for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_4); VAR_10++)
            {
                FUNC_7(VAR_11, VAR_7, VAR_6++, &VAR_5[0][VAR_9], VAR_4[VAR_10], VAR_0, VAR_0);
            }
        }
        VAR_5++;
    }


    FUNC_6(VAR_6 - 1 == VAR_7, "We didn't test all generic formats : tested %u, total %u.\n", VAR_6, VAR_7);

    FUNC_5( VAR_12, VAR_11 );
    FUNC_3( VAR_12 );
}
