
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sha256_ctx {int buflen; int* total; int* H; int * buffer; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,size_t) ;
 int FUNC_2 (int *,int,struct sha256_ctx*) ;

__attribute__((used)) static void * FUNC_3(struct sha256_ctx *VAR_1, void *VAR_2) {

 uint32_t VAR_3 = VAR_1->buflen;
 size_t VAR_4;
 unsigned int VAR_5;


 VAR_1->total[0] += VAR_3;
 if (VAR_1->total[0] < VAR_3) {
  ++VAR_1->total[1];
 }

 VAR_4 = VAR_3 >= 56 ? 64 + 56 - VAR_3 : 56 - VAR_3;
 FUNC_1(&VAR_1->buffer[VAR_3], VAR_0, VAR_4);


 *(uint32_t *) &VAR_1->buffer[VAR_3 + VAR_4 + 4] = FUNC_0 (VAR_1->total[0] << 3);
 *(uint32_t *) &VAR_1->buffer[VAR_3 + VAR_4] = FUNC_0 ((VAR_1->total[1] << 3) |
        (VAR_1->total[0] >> 29));


 FUNC_2(VAR_1->buffer, VAR_3 + VAR_4 + 8, VAR_1);


 for (VAR_5 = 0; VAR_5 < 8; ++VAR_5) {
  ((uint32_t *) VAR_2)[VAR_5] = FUNC_0(VAR_1->H[VAR_5]);
 }

 return VAR_2;
}
