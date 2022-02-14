
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_4__ {int* bitcount; int* buffer; } ;
typedef TYPE_1__ pg_sha512_ctx ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,int*) ;
 int FUNC_2 (int*,int ,unsigned int) ;

__attribute__((used)) static void
FUNC_3(pg_sha512_ctx *VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = (VAR_2->bitcount[0] >> 3) % VAR_0;


 FUNC_0(VAR_2->bitcount[0], VAR_2->bitcount[0]);
 FUNC_0(VAR_2->bitcount[1], VAR_2->bitcount[1]);

 if (VAR_3 > 0)
 {

  VAR_2->buffer[VAR_3++] = 0x80;

  if (VAR_3 <= VAR_1)
  {

   FUNC_2(&VAR_2->buffer[VAR_3], 0, VAR_1 - VAR_3);
  }
  else
  {
   if (VAR_3 < VAR_0)
   {
    FUNC_2(&VAR_2->buffer[VAR_3], 0, VAR_0 - VAR_3);
   }

   FUNC_1(VAR_2, VAR_2->buffer);


   FUNC_2(VAR_2->buffer, 0, VAR_0 - 2);
  }
 }
 else
 {

  FUNC_2(VAR_2->buffer, 0, VAR_1);


  *VAR_2->buffer = 0x80;
 }

 *(uint64 *) &VAR_2->buffer[VAR_1] = VAR_2->bitcount[1];
 *(uint64 *) &VAR_2->buffer[VAR_1 + 8] = VAR_2->bitcount[0];


 FUNC_1(VAR_2, VAR_2->buffer);
}
