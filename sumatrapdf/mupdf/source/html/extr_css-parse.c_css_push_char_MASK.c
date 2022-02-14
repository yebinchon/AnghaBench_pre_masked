
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexbuf {int string_len; int* string; } ;


 int FUNC_0 (struct lexbuf*,char*) ;
 scalar_t__ FUNC_1 (int*) ;

__attribute__((used)) static void FUNC_2(struct lexbuf *VAR_0, int VAR_1)
{
 if (VAR_0->string_len + 1 >= (int)FUNC_1(VAR_0->string))
  FUNC_0(VAR_0, "token too long");
 VAR_0->string[VAR_0->string_len++] = VAR_1;
}
