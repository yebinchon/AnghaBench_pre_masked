
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ud {char* asm_buf_int; char* asm_buf; size_t asm_buf_size; } ;



void
FUNC_0(struct ud *VAR_0, char *VAR_1, size_t VAR_2)
{
  if (VAR_1 == ((void*)0)) {
    FUNC_0(VAR_0, VAR_0->asm_buf_int, sizeof(VAR_0->asm_buf_int));
  } else {
    VAR_0->asm_buf = VAR_1;
    VAR_0->asm_buf_size = VAR_2;
  }
}
