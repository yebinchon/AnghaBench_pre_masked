
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sub_table ;
typedef int offsets ;
typedef scalar_t__ WORD ;
typedef scalar_t__ WCHAR ;
struct TYPE_3__ {int* LeadByte; } ;
typedef int FILE ;
typedef TYPE_1__ CPINFOEXA ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__*,int,int,int *) ;
 int FUNC_2 (scalar_t__*,int ,int) ;

__attribute__((used)) static BOOL FUNC_3(FILE *VAR_3, CPINFOEXA *VAR_4, WCHAR *VAR_5)
{
    WCHAR VAR_6[256];
    WORD VAR_7, VAR_8[256];
    int VAR_9, VAR_10, VAR_11;

    FUNC_2(VAR_8, 0, sizeof(VAR_8));

    VAR_7 = 0;

    for(VAR_9 = 0; VAR_9 < VAR_1; VAR_9 += 2) {
        for(VAR_11 = VAR_4->LeadByte[VAR_9]; VAR_11 != 0 && VAR_11 <= VAR_4->LeadByte[VAR_9 + 1]; VAR_11++) {
            VAR_7 += 256;
            VAR_8[VAR_11] = VAR_7;
        }
    }

    if(FUNC_1(VAR_8, 1, sizeof(VAR_8), VAR_3) != sizeof(VAR_8))
        return VAR_0;

    for(VAR_9 = 0; VAR_9 < VAR_1; VAR_9 += 2) {
        for(VAR_11 = VAR_4->LeadByte[VAR_9]; VAR_11 != 0 && VAR_11 <= VAR_4->LeadByte[VAR_9 + 1]; VAR_11++) {

            for(VAR_10 = FUNC_0(0, VAR_11); VAR_10 <= FUNC_0(0xFF, VAR_11); VAR_10++) {
                VAR_6[VAR_10 - FUNC_0(0, VAR_11)] = VAR_5[VAR_10];
            }

            if(FUNC_1(VAR_6, 1, sizeof(VAR_6), VAR_3) != sizeof(VAR_6))
                return VAR_0;
        }
    }

    return VAR_2;
}
