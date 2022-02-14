
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbcs_table {int * cp2uni; int * cp2uni_glyphs; } ;
typedef int WCHAR ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0( const struct sbcs_table *VAR_1, int VAR_2,
                                 const unsigned char *VAR_3, unsigned int VAR_4,
                                 WCHAR *VAR_5, unsigned int VAR_6 )
{
    const WCHAR * const VAR_7 = (VAR_2 & VAR_0) ? VAR_1->cp2uni_glyphs : VAR_1->cp2uni;
    int VAR_8 = VAR_4;

    if (VAR_6 < VAR_4)
    {

        VAR_4 = VAR_6;
        VAR_8 = -1;
    }

    for (;;)
    {
        switch(VAR_4)
        {
        default:
        case 16: VAR_5[15] = VAR_7[VAR_3[15]];
        case 15: VAR_5[14] = VAR_7[VAR_3[14]];
        case 14: VAR_5[13] = VAR_7[VAR_3[13]];
        case 13: VAR_5[12] = VAR_7[VAR_3[12]];
        case 12: VAR_5[11] = VAR_7[VAR_3[11]];
        case 11: VAR_5[10] = VAR_7[VAR_3[10]];
        case 10: VAR_5[9] = VAR_7[VAR_3[9]];
        case 9: VAR_5[8] = VAR_7[VAR_3[8]];
        case 8: VAR_5[7] = VAR_7[VAR_3[7]];
        case 7: VAR_5[6] = VAR_7[VAR_3[6]];
        case 6: VAR_5[5] = VAR_7[VAR_3[5]];
        case 5: VAR_5[4] = VAR_7[VAR_3[4]];
        case 4: VAR_5[3] = VAR_7[VAR_3[3]];
        case 3: VAR_5[2] = VAR_7[VAR_3[2]];
        case 2: VAR_5[1] = VAR_7[VAR_3[1]];
        case 1: VAR_5[0] = VAR_7[VAR_3[0]];
        case 0: break;
        }
        if (VAR_4 < 16) return VAR_8;
        VAR_5 += 16;
        VAR_3 += 16;
        VAR_4 -= 16;
    }
}
