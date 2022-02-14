
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct HPDF_MD5Context {int* bits; int * in; int buf; } ;
typedef int HPDF_UINT32 ;
typedef int HPDF_BYTE ;


 int FUNC_0 (int *,int const*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int*) ;

void
FUNC_3 (struct HPDF_MD5Context *VAR_0,
                 const HPDF_BYTE *VAR_1,
                 HPDF_UINT32 VAR_2)
{
    HPDF_UINT32 VAR_3;



    VAR_3 = VAR_0->bits[0];
    if ((VAR_0->bits[0] = VAR_3 + ((HPDF_UINT32) VAR_2 << 3)) < VAR_3)
        VAR_0->bits[1]++;
    VAR_0->bits[1] += VAR_2 >> 29;

    VAR_3 = (VAR_3 >> 3) & 0x3f;



    if (VAR_3) {
        HPDF_BYTE *VAR_4 = (HPDF_BYTE *) VAR_0->in + VAR_3;

        VAR_3 = 64 - VAR_3;
        if (VAR_2 < VAR_3)
        {
            FUNC_0 (VAR_4, VAR_1, VAR_2);
            return;
        }
        FUNC_0 (VAR_4, VAR_1, VAR_3);
        FUNC_1 (VAR_0->in, 16);
        FUNC_2 (VAR_0->buf, (HPDF_UINT32 *) VAR_0->in);
        VAR_1 += VAR_3;
        VAR_2 -= VAR_3;
    }


    while (VAR_2 >= 64) {
        FUNC_0 (VAR_0->in, VAR_1, 64);
        FUNC_1 (VAR_0->in, 16);
        FUNC_2 (VAR_0->buf, (HPDF_UINT32 *) VAR_0->in);
        VAR_1 += 64;
        VAR_2 -= 64;
    }



    FUNC_0 (VAR_0->in, VAR_1, VAR_2);
}
