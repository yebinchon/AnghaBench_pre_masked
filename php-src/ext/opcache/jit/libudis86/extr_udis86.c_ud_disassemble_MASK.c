
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ud {char* asm_buf; int (* translator ) (struct ud*) ;scalar_t__ inp_end; } ;


 int FUNC_0 (struct ud*) ;
 int FUNC_1 (struct ud*) ;

extern unsigned int
FUNC_2(struct ud* VAR_0)
{
  int VAR_1;
  if (VAR_0->inp_end) {
    return 0;
  }
  if ((VAR_1 = FUNC_1(VAR_0)) > 0) {
    if (VAR_0->translator != ((void*)0)) {
      VAR_0->asm_buf[0] = '\0';
      VAR_0->translator(VAR_0);
    }
  }
  return VAR_1;
}
