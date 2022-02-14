
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct test_data TYPE_1__ ;


struct test_data {int grey; int const cx; int const cy; int const cur; int const max; int const bpp; char const* comment; } ;
typedef int const INT ;
typedef int HIMAGELIST ;
typedef int BYTE ;


 unsigned int FUNC_0 (TYPE_1__ const*) ;

 int const VAR_0 ;
 int FUNC_1 (int ,int const,int const,int const,int,int const,int const,char*) ;
 int FUNC_2 (int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(HIMAGELIST VAR_1, INT VAR_2)
{
    unsigned int VAR_3;
    static const struct test_data
    {
        BYTE grey;
        INT cx, cy, cur, max, bpp;
        const char *comment;
    } VAR_4[] =
    {
        { 255, 128, 128, 1, 2, 24, "total 1" },
        { 170, 128, 128, 2, 7, 24, "total 2" },
        { 85, 128, 128, 3, 7, 24, "total 3" },
        { 0, 128, 128, 4, 7, 24, "total 4" },
        { 0, 128, 128, 5, 7, 24, "total 5" },
        { 85, 128, 128, 6, 7, 24, "total 6" },
        { 170, 128, 128, 7, 12, 24, "total 7" },
        { 255, 128, 128, 8, 12, 24, "total 8" },
        { 255, 128, 128, 9, 12, 24, "total 9" },
        { 170, 128, 128, 10, 12, 24, "total 10" },
        { 85, 128, 128, 11, 12, 24, "total 11" },
        { 0, 128, 128, 12, 17, 24, "total 12" },
        { 0, 128, 128, 13, 17, 24, "total 13" },
        { 85, 128, 128, 14, 17, 24, "total 14" },
        { 170, 128, 128, 15, 17, 24, "total 15" },
        { 255, 128, 128, 16, 17, 24, "total 16" },
        { 255, 128, 128, 17, 22, 24, "total 17" },
        { 170, 128, 128, 18, 22, 24, "total 18" },
        { 85, 128, 128, 19, 22, 24, "total 19" },
        { 0, 128, 128, 20, 22, 24, "total 20" },
        { 0, 128, 128, 21, 22, 24, "total 21" },
        { 85, 128, 128, 22, 27, 24, "total 22" },
        { 170, 128, 128, 23, 27, 24, "total 23" },
        { 255, 128, 128, 24, 27, 24, "total 24" }
    };

    FUNC_1(VAR_1, 128, 128, 0, 2, VAR_2, VAR_0, "total 0");

    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_4); VAR_3++)
    {
        FUNC_2(VAR_1, VAR_4[VAR_3].grey, VAR_3 + 1);
        FUNC_1(VAR_1, VAR_4[VAR_3].cx, VAR_4[VAR_3].cy, VAR_4[VAR_3].cur, VAR_4[VAR_3].max, VAR_2, VAR_4[VAR_3].bpp, VAR_4[VAR_3].comment);
    }
}
