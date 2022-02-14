
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int const sha2_word32 ;
typedef int sha2_byte ;
struct TYPE_4__ {int bitcount; int * buffer; } ;
typedef TYPE_1__ SHA256_CTX ;


 int FUNC_0 (int *,int const*,size_t) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int const*) ;
 int FUNC_2 (int) ;

void FUNC_3(SHA256_CTX* VAR_1, const sha2_byte *VAR_2, size_t VAR_3) {
 unsigned int VAR_4, VAR_5;

 if (VAR_3 == 0) {

  return;
 }


 FUNC_2(VAR_1 != ((void*)0) && VAR_2 != ((void*)0));

 VAR_5 = (VAR_1->bitcount >> 3) % VAR_0;
 if (VAR_5 > 0) {

  VAR_4 = VAR_0 - VAR_5;

  if (VAR_3 >= VAR_4) {

   FUNC_0(&VAR_1->buffer[VAR_5], VAR_2, VAR_4);
   VAR_1->bitcount += VAR_4 << 3;
   VAR_3 -= VAR_4;
   VAR_2 += VAR_4;
   FUNC_1(VAR_1, (sha2_word32*)VAR_1->buffer);
  } else {

   FUNC_0(&VAR_1->buffer[VAR_5], VAR_2, VAR_3);
   VAR_1->bitcount += VAR_3 << 3;

   VAR_5 = VAR_4 = 0;
   return;
  }
 }
 while (VAR_3 >= VAR_0) {

  FUNC_1(VAR_1, (const sha2_word32*)VAR_2);
  VAR_1->bitcount += VAR_0 << 3;
  VAR_3 -= VAR_0;
  VAR_2 += VAR_0;
 }
 if (VAR_3 > 0) {

  FUNC_0(VAR_1->buffer, VAR_2, VAR_3);
  VAR_1->bitcount += VAR_3 << 3;
 }

 VAR_5 = VAR_4 = 0;
}
