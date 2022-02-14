
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char FUNC_0 (int ) ;

__attribute__((used)) static long FUNC_1(const unsigned char* VAR_0, const unsigned char** VAR_1)
{
    long VAR_2 = 0;
    unsigned char VAR_3;
    unsigned VAR_4 = 0;
    const unsigned VAR_5 = sizeof(int) * 8;

    do
    {
        VAR_3 = FUNC_0(VAR_0++);
        VAR_2 |= (VAR_3 & 0x7f) << VAR_4;
        VAR_4 += 7;
    } while (VAR_3 & 0x80);
    if (VAR_1) *VAR_1 = VAR_0;




    if ((VAR_4 < VAR_5) && (VAR_3 & 0x40))
    {
        VAR_2 |= - (1 << VAR_4);
    }
    return VAR_2;
}
