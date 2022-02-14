
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int prev; unsigned char first_char; int length; unsigned char value; } ;
typedef TYPE_1__ lzw_code ;
struct TYPE_9__ {unsigned char* rp; unsigned char* wp; int pos; TYPE_3__* state; } ;
typedef TYPE_2__ fz_stream ;
struct TYPE_10__ {unsigned char* buffer; int code_bits; int code; int old_code; int next_code; unsigned char* rp; unsigned char* wp; int eod; int min_bits; int early_change; unsigned char* bp; int old_tiff; int chain; scalar_t__ reverse_bits; TYPE_1__* table; } ;
typedef TYPE_3__ fz_lzwd ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,char*) ;

__attribute__((used)) static int
FUNC_8(fz_context *VAR_4, fz_stream *VAR_5, size_t VAR_6)
{
 fz_lzwd *VAR_7 = VAR_5->state;
 lzw_code *VAR_8 = VAR_7->table;
 unsigned char *VAR_9 = VAR_7->buffer;
 unsigned char *VAR_10 = VAR_9;
 unsigned char *VAR_11;
 unsigned char *VAR_12;
 int VAR_13;

 int VAR_14 = VAR_7->code_bits;
 int VAR_15 = VAR_7->code;
 int VAR_16 = VAR_7->old_code;
 int VAR_17 = VAR_7->next_code;

 if (VAR_6 > sizeof(VAR_7->buffer))
  VAR_6 = sizeof(VAR_7->buffer);
 VAR_11 = VAR_9 + VAR_6;

 while (VAR_7->rp < VAR_7->wp && VAR_10 < VAR_11)
  *VAR_10++ = *VAR_7->rp++;

 while (VAR_10 < VAR_11)
 {
  if (VAR_7->eod)
   return VAR_0;

  if (VAR_7->reverse_bits)
   VAR_15 = FUNC_6(VAR_4, VAR_7->chain, VAR_14);
  else
   VAR_15 = FUNC_5(VAR_4, VAR_7->chain, VAR_14);

  if (FUNC_4(VAR_4, VAR_7->chain))
  {
   VAR_7->eod = 1;
   break;
  }

  if (VAR_15 == FUNC_1(VAR_7))
  {
   VAR_7->eod = 1;
   break;
  }



  if (!VAR_7->old_tiff && VAR_17 > VAR_3 && VAR_15 != FUNC_0(VAR_7))
  {
   FUNC_7(VAR_4, "missing clear code in lzw decode");
   VAR_15 = FUNC_0(VAR_7);
  }

  if (VAR_15 == FUNC_0(VAR_7))
  {
   VAR_14 = VAR_7->min_bits;
   VAR_17 = FUNC_2(VAR_7);
   VAR_16 = -1;
   continue;
  }


  if (VAR_16 == -1)
  {
   VAR_16 = VAR_15;
  }
  else if (!VAR_7->old_tiff && VAR_17 == VAR_3)
  {

   FUNC_7(VAR_4, "tolerating a single out of range code in lzw decode");
   VAR_17++;
  }
  else if (VAR_15 > VAR_17 || (!VAR_7->old_tiff && VAR_17 >= VAR_3))
  {
   FUNC_7(VAR_4, "out of range code encountered in lzw decode");
  }
  else if (VAR_17 < VAR_3)
  {

   VAR_8[VAR_17].prev = VAR_16;
   VAR_8[VAR_17].first_char = VAR_8[VAR_16].first_char;
   VAR_8[VAR_17].length = VAR_8[VAR_16].length + 1;
   if (VAR_15 < VAR_17)
    VAR_8[VAR_17].value = VAR_8[VAR_15].first_char;
   else if (VAR_15 == VAR_17)
    VAR_8[VAR_17].value = VAR_8[VAR_17].first_char;
   else
    FUNC_7(VAR_4, "out of range code encountered in lzw decode");

   VAR_17 ++;

   if (VAR_17 > (1 << VAR_14) - VAR_7->early_change - 1)
   {
    VAR_14 ++;
    if (VAR_14 > VAR_1)
     VAR_14 = VAR_1;
   }

   VAR_16 = VAR_15;
  }


  if (VAR_15 >= FUNC_0(VAR_7))
  {
   VAR_13 = VAR_8[VAR_15].length;
   VAR_7->rp = VAR_7->bp;
   VAR_7->wp = VAR_7->bp + VAR_13;

   FUNC_3(VAR_13 < VAR_2);

   VAR_12 = VAR_7->wp;
   do {
    *(--VAR_12) = VAR_8[VAR_15].value;
    VAR_15 = VAR_8[VAR_15].prev;
   } while (VAR_15 >= 0 && VAR_12 > VAR_7->bp);
  }


  else
  {
   VAR_7->bp[0] = VAR_15;
   VAR_7->rp = VAR_7->bp;
   VAR_7->wp = VAR_7->bp + 1;
  }


  while (VAR_7->rp < VAR_7->wp && VAR_10 < VAR_11)
   *VAR_10++ = *VAR_7->rp++;
 }

 VAR_7->code_bits = VAR_14;
 VAR_7->code = VAR_15;
 VAR_7->old_code = VAR_16;
 VAR_7->next_code = VAR_17;

 VAR_5->rp = VAR_9;
 VAR_5->wp = VAR_10;
 if (VAR_9 == VAR_10)
  return VAR_0;
 VAR_5->pos += VAR_10 - VAR_9;

 return *VAR_5->rp++;
}
