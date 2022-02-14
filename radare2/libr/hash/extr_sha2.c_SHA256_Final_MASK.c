
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
typedef int ut32 ;
struct TYPE_5__ {int bitcount; int* buffer; int * state; } ;
typedef TYPE_1__ R_SHA256_CTX ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int*,int ,unsigned int) ;
 int FUNC_5 (TYPE_1__*,int) ;

void FUNC_6(ut8 *VAR_3, R_SHA256_CTX *VAR_4) {
 ut32 *VAR_5 = (ut32 *) VAR_3;
 unsigned int VAR_6;


 if (!VAR_4) {
  return;
 }


 if (VAR_3 != (ut8 *) 0) {
  VAR_6 = (VAR_4->bitcount >> 3) % VAR_0;


  FUNC_1 (VAR_4->bitcount, VAR_4->bitcount);

  if (VAR_6 > 0) {

   VAR_4->buffer[VAR_6++] = 0x80;

   if (VAR_6 <= VAR_2) {

    FUNC_4 (&VAR_4->buffer[VAR_6], 0, VAR_2 - VAR_6);
   } else {
    if (VAR_6 < VAR_0) {
     FUNC_4 (&VAR_4->buffer[VAR_6], 0, VAR_0 - VAR_6);
    }

    FUNC_2 (VAR_4, (ut32 *) VAR_4->buffer);


    FUNC_4 (VAR_4->buffer, 0, VAR_2);
   }
  } else {

   FUNC_4 (VAR_4->buffer, 0, VAR_2);


   *VAR_4->buffer = 0x80;
  }




  {
   ut64 *VAR_7 = (ut64 *) ((ut8 *) VAR_4->buffer + VAR_2);
   *VAR_7 = (ut64) VAR_4->bitcount;
  }



  FUNC_2 (VAR_4, (ut32 *) VAR_4->buffer);


  {

   int VAR_8;
   for (VAR_8 = 0; VAR_8 < 8; VAR_8++) {
    FUNC_0 (VAR_4->state[VAR_8], VAR_4->state[VAR_8]);
    *VAR_5++ = VAR_4->state[VAR_8];
   }
  }



 }


 FUNC_5 (VAR_4, sizeof(*VAR_4));
 VAR_6 = 0;
}
