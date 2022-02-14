
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WORD ;
typedef int WCHAR ;
struct TYPE_3__ {int base; scalar_t__* parts; } ;
typedef TYPE_1__ VowelComponents ;
typedef int INT ;
typedef int HDC ;


 int FUNC_0 (int ,int,int*,int*,scalar_t__*) ;
 int FUNC_1 (int,int,int,int,int *) ;

__attribute__((used)) static void FUNC_2(HDC VAR_0, WCHAR *VAR_1, INT *VAR_2, const VowelComponents VAR_3[], WORD* VAR_4, INT VAR_5)
{
    int VAR_6;
    int VAR_7;

    for (VAR_7 = 0; VAR_7 < *VAR_2; VAR_7++)
    {
        for (VAR_6 = 0; VAR_3[VAR_6].base != 0x0; VAR_6++)
        {
            if (VAR_1[VAR_7] == VAR_3[VAR_6].base)
            {
                int VAR_8 = 0;
                FUNC_0(VAR_0, VAR_7, VAR_2, VAR_1, VAR_3[VAR_6].parts);
                if (VAR_3[VAR_6].parts[1]) { VAR_7++; VAR_8++; }
                if (VAR_3[VAR_6].parts[2]) { VAR_7++; VAR_8++; }
                FUNC_1(VAR_7, VAR_8, 1, VAR_5, VAR_4);
                break;
            }
        }
    }
}
