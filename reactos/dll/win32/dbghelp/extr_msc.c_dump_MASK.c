
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BYTE ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char,int) ;
 unsigned int FUNC_2 (int,unsigned int) ;
 int FUNC_3 (char*,char*,unsigned int) ;

__attribute__((used)) static void FUNC_4(const void* VAR_0, unsigned VAR_1)
{
    unsigned int VAR_2, VAR_3;
    char VAR_4[128];
    const char* VAR_5 = "0123456789abcdef";
    const BYTE* VAR_6 = VAR_0;

    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2 += 16)
    {
        FUNC_3(VAR_4, "%08x: ", VAR_2);
        FUNC_1(VAR_4 + 10, ' ', 3 * 16 + 1 + 16);
        for (VAR_3 = 0; VAR_3 < FUNC_2(16, VAR_1 - VAR_2); VAR_3++)
        {
            VAR_4[10 + 3 * VAR_3 + 0] = VAR_5[VAR_6[VAR_2 + VAR_3] >> 4];
            VAR_4[10 + 3 * VAR_3 + 1] = VAR_5[VAR_6[VAR_2 + VAR_3] & 15];
            VAR_4[10 + 3 * VAR_3 + 2] = ' ';
            VAR_4[10 + 3 * 16 + 1 + VAR_3] = (VAR_6[VAR_2 + VAR_3] >= 0x20 && VAR_6[VAR_2 + VAR_3] < 0x7f) ?
                VAR_6[VAR_2 + VAR_3] : '.';
        }
        VAR_4[10 + 3 * 16] = ' ';
        VAR_4[10 + 3 * 16 + 1 + 16] = '\0';
        FUNC_0("%s\n", VAR_4);
    }
}
