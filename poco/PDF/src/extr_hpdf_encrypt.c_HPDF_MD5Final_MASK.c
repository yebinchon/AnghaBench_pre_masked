
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct HPDF_MD5Context {int* bits; scalar_t__ buf; int * in; } ;
typedef int ctx ;
typedef int HPDF_UINT32 ;
typedef int HPDF_BYTE ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (scalar_t__,int*) ;

void
FUNC_4 (HPDF_BYTE VAR_0[16],
                struct HPDF_MD5Context *VAR_1)
{
    HPDF_UINT32 VAR_2;
    HPDF_BYTE *VAR_3;


    VAR_2 = (VAR_1->bits[0] >> 3) & 0x3F;



    VAR_3 = VAR_1->in + VAR_2;
    *VAR_3++ = 0x80;


    VAR_2 = 64 - 1 - VAR_2;


    if (VAR_2 < 8) {

        FUNC_1 (VAR_3, 0, VAR_2);
        FUNC_2 (VAR_1->in, 16);
        FUNC_3 (VAR_1->buf, (HPDF_UINT32 *) VAR_1->in);


        FUNC_1 (VAR_1->in, 0, 56);
    } else {

        FUNC_1 (VAR_3, 0, VAR_2 - 8);
    }
    FUNC_2 (VAR_1->in, 14);


    ((HPDF_UINT32 *) VAR_1->in)[14] = VAR_1->bits[0];
    ((HPDF_UINT32 *) VAR_1->in)[15] = VAR_1->bits[1];

    FUNC_3 (VAR_1->buf, (HPDF_UINT32 *) VAR_1->in);
    FUNC_2 ((HPDF_BYTE *) VAR_1->buf, 4);
    FUNC_0 ((HPDF_BYTE *)VAR_0, (HPDF_BYTE *)VAR_1->buf, 16);
    FUNC_1 ((HPDF_BYTE *)VAR_1, 0, sizeof (VAR_1));
}
