
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int INT ;
typedef int BYTE ;


 int FUNC_0 (int const*,int ) ;

__attribute__((used)) static INT FUNC_1(const BYTE *VAR_0, const BYTE *VAR_1)
{
    int VAR_2, VAR_3 = 0;

    while (VAR_0 < VAR_1)
    {
        int VAR_4 = *VAR_0++;
        for (VAR_2 = 0; VAR_2 < 8 && VAR_0 < VAR_1; VAR_2++, VAR_4 >>= 1)
 {
            if (VAR_4 & 1)
     {
                int VAR_5 = FUNC_0(VAR_0, 0);
                int VAR_6 = 3 + (VAR_5 >> 12);
                VAR_3 += VAR_6;
                VAR_0 += 2;
     }
            else VAR_3++, VAR_0++;
 }
    }

    return VAR_3;
}
