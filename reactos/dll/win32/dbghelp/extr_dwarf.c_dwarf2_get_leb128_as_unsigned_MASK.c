
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char FUNC_0 (int ) ;

__attribute__((used)) static unsigned long FUNC_1(const unsigned char* VAR_0, const unsigned char** VAR_1)
{
    unsigned long VAR_2 = 0;
    unsigned char VAR_3;
    unsigned VAR_4 = 0;

    do
    {
        VAR_3 = FUNC_0(VAR_0++);
        VAR_2 |= (VAR_3 & 0x7f) << VAR_4;
        VAR_4 += 7;
    } while (VAR_3 & 0x80);

    if (VAR_1) *VAR_1 = VAR_0;
    return VAR_2;
}
