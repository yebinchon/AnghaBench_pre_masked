
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U16 ;
typedef int HUF_CElt ;
typedef int BYTE ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int,int const*,size_t const,int const*,int) ;
 int FUNC_2 (int * const,int ) ;
 int FUNC_3 (int) ;
 int VAR_0 ;

__attribute__((used)) static size_t
FUNC_4(void* VAR_1, size_t VAR_2,
                              const void* VAR_3, size_t VAR_4,
                              const HUF_CElt* VAR_5, int VAR_6)
{
    size_t const VAR_7 = (VAR_4+3)/4;
    const BYTE* VAR_8 = (const BYTE*) VAR_3;
    const BYTE* const VAR_9 = VAR_8 + VAR_4;
    BYTE* const VAR_10 = (BYTE*) VAR_1;
    BYTE* const VAR_11 = VAR_10 + VAR_2;
    BYTE* VAR_12 = VAR_10;

    if (VAR_2 < 6 + 1 + 1 + 1 + 8) return 0;
    if (VAR_4 < 12) return 0;
    VAR_12 += 6;

    { FUNC_0(VAR_0, FUNC_1(VAR_12, VAR_11-VAR_12, VAR_8, VAR_7, VAR_5, VAR_6) );
        if (VAR_0==0) return 0;
        FUNC_3(VAR_0 <= 65535);
        FUNC_2(VAR_10, (U16)VAR_0);
        VAR_12 += VAR_0;
    }

    VAR_8 += VAR_7;
    { FUNC_0(VAR_0, FUNC_1(VAR_12, VAR_11-VAR_12, VAR_8, VAR_7, VAR_5, VAR_6) );
        if (VAR_0==0) return 0;
        FUNC_3(VAR_0 <= 65535);
        FUNC_2(VAR_10+2, (U16)VAR_0);
        VAR_12 += VAR_0;
    }

    VAR_8 += VAR_7;
    { FUNC_0(VAR_0, FUNC_1(VAR_12, VAR_11-VAR_12, VAR_8, VAR_7, VAR_5, VAR_6) );
        if (VAR_0==0) return 0;
        FUNC_3(VAR_0 <= 65535);
        FUNC_2(VAR_10+4, (U16)VAR_0);
        VAR_12 += VAR_0;
    }

    VAR_8 += VAR_7;
    { FUNC_0(VAR_0, FUNC_1(VAR_12, VAR_11-VAR_12, VAR_8, VAR_9-VAR_8, VAR_5, VAR_6) );
        if (VAR_0==0) return 0;
        VAR_12 += VAR_0;
    }

    return VAR_12-VAR_10;
}
