
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sha2_word64 ;
struct TYPE_4__ {int* bitcount; int* buffer; } ;
typedef TYPE_1__ SHA512_CTX ;


 int FUNC_0 (int*,unsigned int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int*) ;

void FUNC_3(SHA512_CTX* VAR_2) {
 unsigned int VAR_3;

 VAR_3 = (VAR_2->bitcount[0] >> 3) % VAR_0;


 FUNC_1(VAR_2->bitcount[0],VAR_2->bitcount[0]);
 FUNC_1(VAR_2->bitcount[1],VAR_2->bitcount[1]);

 if (VAR_3 > 0) {

  VAR_2->buffer[VAR_3++] = 0x80;

  if (VAR_3 <= VAR_1) {

   FUNC_0(&VAR_2->buffer[VAR_3], VAR_1 - VAR_3);
  } else {
   if (VAR_3 < VAR_0) {
    FUNC_0(&VAR_2->buffer[VAR_3], VAR_0 - VAR_3);
   }

   FUNC_2(VAR_2, (sha2_word64*)VAR_2->buffer);


   FUNC_0(VAR_2->buffer, VAR_0 - 2);
  }
 } else {

  FUNC_0(VAR_2->buffer, VAR_1);


  *VAR_2->buffer = 0x80;
 }

 *(sha2_word64*)&VAR_2->buffer[VAR_1] = VAR_2->bitcount[1];
 *(sha2_word64*)&VAR_2->buffer[VAR_1+8] = VAR_2->bitcount[0];


 FUNC_2(VAR_2, (sha2_word64*)VAR_2->buffer);
}
