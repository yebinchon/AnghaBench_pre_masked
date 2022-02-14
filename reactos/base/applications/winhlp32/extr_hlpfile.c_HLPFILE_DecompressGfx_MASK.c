
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BYTE ;


 int const* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int const*,int const*,int*) ;
 int FUNC_2 (int const*,int const*,int*,unsigned int) ;
 unsigned int FUNC_3 (int const*,int const*) ;
 int* FUNC_4 (int ,int ,unsigned int) ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,int,unsigned int,unsigned int) ;
 int FUNC_8 (char*,unsigned int,unsigned int) ;

__attribute__((used)) static const BYTE* FUNC_9(const BYTE* VAR_1, unsigned VAR_2, unsigned VAR_3, BYTE VAR_4,
                                              BYTE** VAR_5)
{
    const BYTE* VAR_6;
    BYTE* VAR_7;
    unsigned VAR_8;

    FUNC_7("Unpacking (%d) from %u bytes to %u bytes\n", VAR_4, VAR_2, VAR_3);

    switch (VAR_4)
    {
    case 0:
        if (VAR_3 != VAR_2)
            FUNC_8("Bogus gfx sizes (uncompressed): %u / %u\n", VAR_3, VAR_2);
        VAR_6 = VAR_1;
        *VAR_5 = ((void*)0);
        break;
    case 1:
        VAR_6 = *VAR_5 = FUNC_4(FUNC_0(), 0, VAR_3);
        if (!VAR_6) return ((void*)0);
        FUNC_2(VAR_1, VAR_1 + VAR_2, *VAR_5, VAR_3);
        break;
    case 2:
        VAR_8 = FUNC_3(VAR_1, VAR_1 + VAR_2);
        VAR_6 = *VAR_5 = FUNC_4(FUNC_0(), 0, VAR_8);
        if (!VAR_6) return ((void*)0);
        FUNC_1(VAR_1, VAR_1 + VAR_2, *VAR_5);
        if (VAR_8 != VAR_3)
            FUNC_8("Bogus gfx sizes (LZ77): %u / %u\n", VAR_8, VAR_3);
        break;
    case 3:
        VAR_8 = FUNC_3(VAR_1, VAR_1 + VAR_2);
        VAR_7 = FUNC_4(FUNC_0(), 0, VAR_8);
        if (!VAR_7) return VAR_0;
        FUNC_1(VAR_1, VAR_1 + VAR_2, VAR_7);
        VAR_6 = *VAR_5 = FUNC_4(FUNC_0(), 0, VAR_3);
        if (!VAR_6)
        {
            FUNC_5(FUNC_0(), 0, VAR_7);
            return VAR_0;
        }
        FUNC_2(VAR_7, VAR_7 + VAR_8, *VAR_5, VAR_3);
        FUNC_5(FUNC_0(), 0, VAR_7);
        break;
    default:
        FUNC_6("Unsupported packing %u\n", VAR_4);
        return ((void*)0);
    }
    return VAR_6;
}
