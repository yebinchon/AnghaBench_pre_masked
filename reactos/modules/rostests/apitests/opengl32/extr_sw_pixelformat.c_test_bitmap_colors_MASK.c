
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct test_color {int dummy; } ;
typedef int pfd ;
struct TYPE_3__ {int dwFlags; } ;
typedef TYPE_1__ PIXELFORMATDESCRIPTOR ;
typedef int INT ;
typedef int HDC ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,char*,...) ;
 int * VAR_3 ;
 int FUNC_3 (int ,int,int ,struct test_color const*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(HDC VAR_4, const struct test_color** VAR_5)
{
    INT VAR_6, VAR_7, VAR_8;
    PIXELFORMATDESCRIPTOR VAR_9;
    INT VAR_10, VAR_11;

    VAR_6 = FUNC_1(VAR_4, 0, 0, ((void*)0));
    FUNC_2(VAR_6 > 0, "DescribePixelFormat failed.\n");

    for (VAR_7 = 1; VAR_7 <= VAR_6; VAR_7++)
    {
        VAR_8 = FUNC_1(VAR_4, VAR_7, sizeof(VAR_9), &VAR_9);
        FUNC_2(VAR_8 == VAR_6, "Number of pixel formats changed!\n");

        if (VAR_9.dwFlags & VAR_1)
            break;
    }

    FUNC_2(VAR_7 < VAR_6, "No generic pixel format!\n");


    for (VAR_10 = 0; VAR_10 < 3; VAR_10++)
    {

        for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_3); VAR_11++)
        {
            FUNC_3(VAR_4, VAR_6, VAR_7++, &VAR_5[0][VAR_10], VAR_3[VAR_11], VAR_2, VAR_0);
        }


        for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_3); VAR_11++)
        {
            FUNC_3(VAR_4, VAR_6, VAR_7++, &VAR_5[0][VAR_10], VAR_3[VAR_11], VAR_2, VAR_2);
        }
    }

    VAR_5++;


    while (*VAR_5)
    {
        for (VAR_10 = 0; VAR_10 < 3; VAR_10++)
        {
            for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_3); VAR_11++)
            {
                FUNC_3(VAR_4, VAR_6, VAR_7++, &VAR_5[0][VAR_10], VAR_3[VAR_11], VAR_0, VAR_0);
            }
        }
        VAR_5++;
    }


    FUNC_2(VAR_7 - 1 == VAR_6, "We didn't test all generic formats : tested %u, total %u.\n", VAR_7, VAR_6);
}
