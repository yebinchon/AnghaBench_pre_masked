
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut32 ;
struct TYPE_4__ {int bitcount; int * buffer; } ;
typedef TYPE_1__ R_SHA256_CTX ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int *,int const*,size_t) ;

void FUNC_2(R_SHA256_CTX *VAR_1, const ut8 *VAR_2, size_t VAR_3) {
 unsigned int VAR_4, VAR_5;


 if (!VAR_1 || !VAR_2 || VAR_3 == 0) {
  return;
 }

 VAR_5 = (VAR_1->bitcount >> 3) % VAR_0;
 if (VAR_5 > 0) {

  VAR_4 = VAR_0 - VAR_5;

  if (VAR_3 >= VAR_4) {

   FUNC_1 (&VAR_1->buffer[VAR_5], VAR_2, VAR_4);
   VAR_1->bitcount += VAR_4 << 3;
   VAR_3 -= VAR_4;
   VAR_2 += VAR_4;
   FUNC_0 (VAR_1, (ut32 *) VAR_1->buffer);
  } else {

   FUNC_1 (&VAR_1->buffer[VAR_5], VAR_2, VAR_3);
   VAR_1->bitcount += VAR_3 << 3;

   VAR_5 = VAR_4 = 0;
   return;
  }
 }
 while (VAR_3 >= VAR_0) {

  FUNC_0 (VAR_1, (ut32 *) VAR_2);
  VAR_1->bitcount += VAR_0 << 3;
  VAR_3 -= VAR_0;
  VAR_2 += VAR_0;
 }
 if (VAR_3 > 0) {

  FUNC_1 (VAR_1->buffer, VAR_2, VAR_3);
  VAR_1->bitcount += VAR_3 << 3;
 }

 VAR_5 = VAR_4 = 0;
}
