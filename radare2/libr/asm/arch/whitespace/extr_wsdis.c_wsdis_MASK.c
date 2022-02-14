
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_3__ {int size; int buf_asm; } ;
typedef TYPE_1__ RAsmOp ;
 int const* FUNC_0 (int const*,int) ;
 int FUNC_1 (int const*,int) ;
 int FUNC_2 (int const*,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char const*) ;
 char* FUNC_6 (char*,int) ;
 int FUNC_7 (int const*,int,int) ;

int FUNC_8(RAsmOp *VAR_0, const ut8 *VAR_1, int VAR_2) {
 const char *VAR_3 = ((void*)0);
 const ut8 *VAR_4 = VAR_1;
 switch (FUNC_1 (VAR_1, VAR_2)) {
 case 128:
  return VAR_0->size = 0;
 case 130:
  FUNC_5 (&VAR_0->buf_asm, "nop");
  return VAR_0->size = 1;
 case 129:
  VAR_4++;
  if (!FUNC_0 (VAR_4, VAR_2 - 1)) {
   return VAR_0->size = 0;
  }
  switch (*FUNC_0 (VAR_4, VAR_2 - 1)) {
  case ' ':
   if (FUNC_7 (FUNC_0 (VAR_4, VAR_2 - 1), 10, VAR_2 - 1) == -1) {
    return VAR_0->size = 0;
   }
   int VAR_5 = FUNC_7 (VAR_4 - 1, 10, VAR_2);
   FUNC_5 (&VAR_0->buf_asm, FUNC_6 ("push %d", VAR_5));
   return VAR_0->size = VAR_5;
  case 10:
   VAR_4 = FUNC_0 (VAR_4, VAR_2 - 1) + 1;
   VAR_4 = FUNC_0 (VAR_4, VAR_2 - (VAR_4 - VAR_1));
   if (!VAR_4) {
    return VAR_0->size = 0;
   }
   switch (*VAR_4) {
   case ' ':
    FUNC_5 (&VAR_0->buf_asm, "dup");
    break;
   case '\t':
    FUNC_5 (&VAR_0->buf_asm, "swap");
    break;
   case 10:
    FUNC_5 (&VAR_0->buf_asm, "pop");
    break;
   }
   return VAR_0->size = VAR_4 - VAR_1 + 1;
  case '\t':
   VAR_4 = FUNC_0 (VAR_4, VAR_2 - 1) + 1;
   VAR_4 = FUNC_0 (VAR_4, VAR_2 - (VAR_4 - VAR_1));
   if (!VAR_4) {
    return VAR_0->size = 0;
   }
   switch (*VAR_4) {
   case ' ':
    FUNC_5 (&VAR_0->buf_asm, "copy");
    break;
   case 10:
    FUNC_5 (&VAR_0->buf_asm, "slide");
    break;
   case '\t':
    FUNC_5 (&VAR_0->buf_asm, "illegal_stack_t");
    return VAR_0->size = VAR_4 - VAR_1 + 1;
   }
   VAR_4++;
   if (-1 == FUNC_7 (VAR_4, 10, VAR_2 - (VAR_4 - VAR_1) - 1)) {
    FUNC_5 (&VAR_0->buf_asm, "");
    return VAR_0->size = 0;
   }
   if (FUNC_4 (&VAR_0->buf_asm) < 6) {
    FUNC_3 (&VAR_0->buf_asm, FUNC_6 (" %d", FUNC_2 (VAR_4, VAR_2 - (VAR_4 - VAR_1) - 1)));
   }
   return VAR_0->size = FUNC_7 (VAR_4, 10, VAR_2 - (VAR_4 - VAR_1) - 1) + VAR_4 - VAR_1 + 1;
  }
 case 132:
  VAR_4 = FUNC_0 (VAR_4 + 1, VAR_2 - 1) + 1;
  VAR_4 = FUNC_0 (VAR_4, VAR_2 - (VAR_4 - VAR_1));
  if (!VAR_4) {
   return VAR_0->size = 0;
  }
  switch (*VAR_4) {
  case ' ':
   FUNC_5 (&VAR_0->buf_asm, "store");
   break;
  case '\t':
   FUNC_5 (&VAR_0->buf_asm, "load");
   break;
  case 10:
   FUNC_5 (&VAR_0->buf_asm, "illegal_heap");
   break;
  }
  return VAR_0->size = VAR_4 - VAR_1 + 1;
 case 131:
  VAR_4 = FUNC_0 (VAR_4 + 1, VAR_2 - 1) + 1;
  VAR_4 = FUNC_0 (VAR_4, VAR_2 - (VAR_4 - VAR_1));
  if (!VAR_4) {
   return VAR_0->size = 0;
  }
  switch (*VAR_4) {
  case ' ':
   VAR_4++;
   VAR_4 = FUNC_0 (VAR_4, VAR_2 - (VAR_4 - VAR_1));
   if (!VAR_4) {
    return VAR_0->size = 0;
   }
   switch (*VAR_4) {
   case ' ':
    FUNC_5 (&VAR_0->buf_asm, "putc");
    return VAR_0->size = VAR_4 - VAR_1 + 1;
   case '\t':
    FUNC_5 (&VAR_0->buf_asm, "puti");
    return VAR_0->size = VAR_4 - VAR_1 + 1;
   }
   break;
  case '\t':
   VAR_4++;
   VAR_4 = FUNC_0 (VAR_4, VAR_2 - (VAR_4 - VAR_1));
   if (!VAR_4) {
    return VAR_0->size = 0;
   }
   switch (*VAR_4) {
   case ' ':
    FUNC_5 (&VAR_0->buf_asm, "getc");
    return VAR_0->size = VAR_4 - VAR_1 + 1;
   case '\t':
    FUNC_5 (&VAR_0->buf_asm, "geti");
    return VAR_0->size = VAR_4 - VAR_1 + 1;
   }
  }
  FUNC_5 (&VAR_0->buf_asm, "illegal_io");
  return VAR_0->size = VAR_4 - VAR_1 + 1;
  break;
 case 134:
  VAR_4 = FUNC_0 (VAR_4 + 1, VAR_2 - 1) + 1;
  VAR_4 = FUNC_0 (VAR_4, VAR_2 - (VAR_4 - VAR_1));
  if (!VAR_4) {
   return VAR_0->size = 0;
  }
  switch (*VAR_4) {
  case ' ':
   VAR_4++;
   VAR_4 = FUNC_0 (VAR_4, VAR_2 - (VAR_4 - VAR_1));
   if (!VAR_4) {
    return VAR_0->size = 0;
   }
   switch (*VAR_4) {
   case ' ': VAR_3 = "add"; break;
   case '\t': VAR_3 = "sub"; break;
   case 10: VAR_3 = "mul"; break;
   }
   break;
  case '\t':
   VAR_4++;
   VAR_4 = FUNC_0 (VAR_4, VAR_2 - (VAR_4 - VAR_1));
   if (!VAR_4) {
    return VAR_0->size = 0;
   }
   switch (*VAR_4) {
   case ' ': VAR_3 = "div"; break;
   case '\t': VAR_3 = "mod"; break;
   case 10: VAR_3 = "illegal_ar_t"; break;
   }
   break;
  case 10:
   VAR_3 = "illegal_ar";
   break;
  }
  if (VAR_3) {
   FUNC_5 (&VAR_0->buf_asm, VAR_3);
  }
  return VAR_0->size = VAR_4 - VAR_1 + 1;
 case 133:
  VAR_4 = FUNC_0 (VAR_4 + 1, VAR_2 - 1);
  if (!VAR_4) {
   return VAR_0->size = 0;
  }
  switch (*VAR_4) {
  case 10:
   VAR_4++;
   VAR_4 = FUNC_0 (VAR_4, VAR_2 - (VAR_4 - VAR_1));
   if (!VAR_4) {
    return VAR_0->size = 0;
   }
   if (*VAR_4 == 10) {
    FUNC_5 (&VAR_0->buf_asm, "exit");
   } else {
    FUNC_5 (&VAR_0->buf_asm, "illegal_fl_lf");
   }
   return VAR_0->size = VAR_4 - VAR_1 + 1;
  case '\t':
   VAR_4++;
   VAR_4 = FUNC_0 (VAR_4, VAR_2 - (VAR_4 - VAR_1));
   if (!VAR_4) {
    return VAR_0->size = 0;
   }
   switch (*VAR_4) {
   case 10:
    FUNC_5 (&VAR_0->buf_asm, "ret");
    return VAR_0->size = VAR_4 - VAR_1 + 1;
   case '\t':
    FUNC_5 (&VAR_0->buf_asm, "jn");
    break;
   case ' ':
    FUNC_5 (&VAR_0->buf_asm, "jz");
    break;
   }
   VAR_4++;
   if (-1 == FUNC_7 (VAR_4, 10, VAR_2 - (VAR_4 - VAR_1))) {
    FUNC_5 (&VAR_0->buf_asm, "");
    return VAR_0->size = 0;
   }
   if (FUNC_4 (&VAR_0->buf_asm) == 2) {
    FUNC_3 (&VAR_0->buf_asm, FUNC_6 (" %d", FUNC_2 (VAR_4, VAR_2 - (VAR_4 - VAR_1) - 1)));
   }
   return VAR_0->size = VAR_4 - VAR_1 + FUNC_7 (VAR_4, 10, VAR_2 - (VAR_4 - VAR_1)) + 1;
  case ' ':
   VAR_4++;
   VAR_4 = FUNC_0 (VAR_4, VAR_2 - (VAR_4 - VAR_1));
   if (!VAR_4) {
    return VAR_0->size = 0;
   }
   switch (*VAR_4) {
   case 10: VAR_3 = "jmp"; break;
   case '\t': VAR_3 = "call"; break;
   case ' ': VAR_3 = "mark"; break;
   }
   VAR_4++;
   if (-1 == FUNC_7 (VAR_4, 10, VAR_2 - (VAR_4 - VAR_1))) {
    FUNC_5 (&VAR_0->buf_asm, "invalid");
    return VAR_0->size = 0;
   }
   if (VAR_3) {
    FUNC_5 (&VAR_0->buf_asm, VAR_3);
   }
   FUNC_3 (&VAR_0->buf_asm, FUNC_6 (" %d", FUNC_2 (VAR_4, VAR_2 - (VAR_4 - VAR_1) - 1)));
   return VAR_0->size = VAR_4 - VAR_1 + FUNC_7 (VAR_4, 10, VAR_2 - (VAR_4 - VAR_1)) + 1;
  }
 }
 FUNC_5 (&VAR_0->buf_asm, "wtf");
 return VAR_0->size = 0;
}
