
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sha256_ctx {int buflen; int total64; int* total; int* H; int * buffer; void** buffer32; } ;
typedef int UINTN ;
typedef int UINT32 ;


 int FUNC_0 (int *,int ,int) ;
 void* FUNC_1 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int,struct sha256_ctx*) ;

void *FUNC_3(struct sha256_ctx *VAR_3, void *VAR_4) {

        UINT32 VAR_5 = VAR_3->buflen;
        UINTN VAR_6, VAR_7;


        VAR_3->total64 += VAR_5;

        VAR_6 = VAR_5 >= 56 ? 64 + 56 - VAR_5 : 56 - VAR_5;
        FUNC_0 (&VAR_3->buffer[VAR_5], VAR_2, VAR_6);


        VAR_3->buffer32[(VAR_5 + VAR_6 + 4) / 4] = FUNC_1 (VAR_3->total[VAR_1] << 3);
        VAR_3->buffer32[(VAR_5 + VAR_6) / 4] = FUNC_1 ((VAR_3->total[VAR_0] << 3)
                                                 | (VAR_3->total[VAR_1] >> 29));


        FUNC_2 (VAR_3->buffer, VAR_5 + VAR_6 + 8, VAR_3);


        for (VAR_7 = 0; VAR_7 < 8; ++VAR_7)
                ((UINT32 *) VAR_4)[VAR_7] = FUNC_1 (VAR_3->H[VAR_7]);

        return VAR_4;
}
