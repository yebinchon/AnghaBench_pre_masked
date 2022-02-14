
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d_print_info {int len; char* buf; char last_char; } ;


 int FUNC_0 (struct d_print_info*) ;

__attribute__((used)) static inline void
FUNC_1 (struct d_print_info *VAR_0, char VAR_1)
{
  if (VAR_0->len == sizeof (VAR_0->buf) - 1)
    FUNC_0 (VAR_0);

  VAR_0->buf[VAR_0->len++] = VAR_1;
  VAR_0->last_char = VAR_1;
}
