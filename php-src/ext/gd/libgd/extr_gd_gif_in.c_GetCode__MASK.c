
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gdIOCtx ;
struct TYPE_3__ {int curbit; int lastbit; int last_byte; int* buf; scalar_t__ done; } ;
typedef TYPE_1__ CODE_STATIC_DATA ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int*,int*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_1(gdIOCtx *VAR_3, CODE_STATIC_DATA *VAR_4, int VAR_5, int VAR_6, int *VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 int VAR_11;

 if (VAR_6) {
  VAR_4->curbit = 0;
  VAR_4->lastbit = 0;
  VAR_4->last_byte = 2;
  VAR_4->done = VAR_1;
  return 0;
 }

 if ( (VAR_4->curbit + VAR_5) >= VAR_4->lastbit) {
  if (VAR_4->done) {
   if (VAR_4->curbit >= VAR_4->lastbit) {

   }
   return -1;
  }
  VAR_4->buf[0] = VAR_4->buf[VAR_4->last_byte-2];
  VAR_4->buf[1] = VAR_4->buf[VAR_4->last_byte-1];

               if ((VAR_11 = FUNC_0(VAR_3, &VAR_4->buf[2], VAR_7)) <= 0)
   VAR_4->done = VAR_2;

  VAR_4->last_byte = 2 + VAR_11;
  VAR_4->curbit = (VAR_4->curbit - VAR_4->lastbit) + 16;
  VAR_4->lastbit = (2+VAR_11)*8 ;
 }

 if ((VAR_4->curbit + VAR_5 - 1) >= (VAR_0 * 8)) {
  VAR_10 = -1;
 } else {
  VAR_10 = 0;
  for (VAR_8 = VAR_4->curbit, VAR_9 = 0; VAR_9 < VAR_5; ++VAR_8, ++VAR_9) {
   VAR_10 |= ((VAR_4->buf[VAR_8 / 8] & (1 << (VAR_8 % 8))) != 0) << VAR_9;
  }
 }

 VAR_4->curbit += VAR_5;
 return VAR_10;
}
