
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gdIOCtx ;
struct TYPE_3__ {int set_code_size; int code_size; int clear_code; int end_code; int max_code_size; int max_code; int** table; int* sp; int* stack; int firstcode; int oldcode; int scd; void* fresh; } ;
typedef TYPE_1__ LZW_STATIC_DATA ;


 void* VAR_0 ;
 void* FUNC_0 (int *,int *,int,void*,int*) ;
 int FUNC_1 (int *,unsigned char*,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;

__attribute__((used)) static int
FUNC_2(gdIOCtx *VAR_4, LZW_STATIC_DATA *VAR_5, char VAR_6, int VAR_7, int *VAR_8)
{
 int VAR_9, VAR_10, VAR_11;

 if (VAR_6) {
  VAR_5->set_code_size = VAR_7;
  VAR_5->code_size = VAR_5->set_code_size+1;
  VAR_5->clear_code = 1 << VAR_5->set_code_size ;
  VAR_5->end_code = VAR_5->clear_code + 1;
  VAR_5->max_code_size = 2*VAR_5->clear_code;
  VAR_5->max_code = VAR_5->clear_code+2;

  FUNC_0(VAR_4, &VAR_5->scd, 0, VAR_3, VAR_8);

  VAR_5->fresh = VAR_3;

  for (VAR_11 = 0; VAR_11 < VAR_5->clear_code; ++VAR_11) {
   VAR_5->table[0][VAR_11] = 0;
   VAR_5->table[1][VAR_11] = VAR_11;
  }
  for (; VAR_11 < (1<<VAR_1); ++VAR_11)
   VAR_5->table[0][VAR_11] = VAR_5->table[1][0] = 0;

  VAR_5->sp = VAR_5->stack;

  return 0;
 } else if (VAR_5->fresh) {
  VAR_5->fresh = VAR_0;
  do {
   VAR_5->firstcode = VAR_5->oldcode =
   FUNC_0(VAR_4, &VAR_5->scd, VAR_5->code_size, VAR_0, VAR_8);
  } while (VAR_5->firstcode == VAR_5->clear_code);
  return VAR_5->firstcode;
 }

 if (VAR_5->sp > VAR_5->stack)
  return *--VAR_5->sp;

 while ((VAR_9 = FUNC_0(VAR_4, &VAR_5->scd, VAR_5->code_size, VAR_0, VAR_8)) >= 0) {
  if (VAR_9 == VAR_5->clear_code) {
   for (VAR_11 = 0; VAR_11 < VAR_5->clear_code; ++VAR_11) {
    VAR_5->table[0][VAR_11] = 0;
    VAR_5->table[1][VAR_11] = VAR_11;
   }
   for (; VAR_11 < (1<<VAR_1); ++VAR_11)
    VAR_5->table[0][VAR_11] = VAR_5->table[1][VAR_11] = 0;
   VAR_5->code_size = VAR_5->set_code_size+1;
   VAR_5->max_code_size = 2*VAR_5->clear_code;
   VAR_5->max_code = VAR_5->clear_code+2;
   VAR_5->sp = VAR_5->stack;
   VAR_5->firstcode = VAR_5->oldcode =
        FUNC_0(VAR_4, &VAR_5->scd, VAR_5->code_size, VAR_0, VAR_8);
   return VAR_5->firstcode;
  } else if (VAR_9 == VAR_5->end_code) {
   int VAR_12;
   unsigned char VAR_13[260];

   if (*VAR_8)
    return -2;

   while ((VAR_12 = FUNC_1(VAR_4, VAR_13, VAR_8)) > 0)
    ;

   if (VAR_12 != 0)
    return -2;
  }

  VAR_10 = VAR_9;

  if (VAR_5->sp == (VAR_5->stack + VAR_2)) {

   return -1;
  }

  if (VAR_9 >= VAR_5->max_code) {
   *VAR_5->sp++ = VAR_5->firstcode;
   VAR_9 = VAR_5->oldcode;
  }

  while (VAR_9 >= VAR_5->clear_code) {
   if (VAR_5->sp == (VAR_5->stack + VAR_2)) {

    return -1;
   }
   *VAR_5->sp++ = VAR_5->table[1][VAR_9];
   if (VAR_9 == VAR_5->table[0][VAR_9]) {

   }
   VAR_9 = VAR_5->table[0][VAR_9];
  }

  *VAR_5->sp++ = VAR_5->firstcode = VAR_5->table[1][VAR_9];

  if ((VAR_9 = VAR_5->max_code) <(1<<VAR_1)) {
   VAR_5->table[0][VAR_9] = VAR_5->oldcode;
   VAR_5->table[1][VAR_9] = VAR_5->firstcode;
   ++VAR_5->max_code;
   if ((VAR_5->max_code >= VAR_5->max_code_size) &&
     (VAR_5->max_code_size < (1<<VAR_1))) {
    VAR_5->max_code_size *= 2;
    ++VAR_5->code_size;
   }
  }

  VAR_5->oldcode = VAR_10;

  if (VAR_5->sp > VAR_5->stack)
   return *--VAR_5->sp;
 }
 return VAR_9;
}
