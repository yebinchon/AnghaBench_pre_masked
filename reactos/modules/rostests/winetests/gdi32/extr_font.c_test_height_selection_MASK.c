
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct font_data {char* member_0; int member_1; int member_3; int member_4; int member_5; int member_6; int member_8; int const member_9; int member_7; int const member_2; } ;
typedef int * HDC ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;



 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,struct font_data const*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(void)
{
    static const struct font_data VAR_0[] =
    {
        {"Tahoma", -12, 129, 14, 12, 2, 2, 0, 96, 128 },
        {"Tahoma", -24, 129, 29, 24, 5, 5, 0, 96, 128 },
        {"Tahoma", -48, 129, 58, 48, 10, 10, 0, 96, 128 },
        {"Tahoma", -96, 129, 116, 96, 20, 20, 0, 96, 128 },
        {"Tahoma", -192, 129, 232, 192, 40, 40, 0, 96, 128 },
        {"Tahoma", 12, 129, 12, 10, 2, 2, 0, 96, 128 },
        {"Tahoma", 24, 129, 24, 20, 4, 4, 0, 96, 128 },
        {"Tahoma", 48, 129, 48, 40, 8, 8, 0, 96, 128 },
        {"Tahoma", 96, 129, 96, 80, 16, 17, 0, 96, 130 },
        {"Tahoma", 192, 129, 192, 159, 33, 33, 0, 96, 128 },
        {"", 0, 0, 0, 0, 0, 0, 0, 0, 0 }
    };
    HDC VAR_1 = FUNC_0(0);
    FUNC_2(VAR_1 != ((void*)0), "failed to create hdc\n");

    FUNC_3( VAR_1, VAR_0 );
    FUNC_4( VAR_1 );

    FUNC_1(VAR_1);
}
