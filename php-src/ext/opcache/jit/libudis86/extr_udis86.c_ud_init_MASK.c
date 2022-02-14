
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ud {int asm_buf_int; int mnemonic; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (struct ud*,int ,int) ;
 int FUNC_2 (struct ud*,int ) ;
 int FUNC_3 (struct ud*,int) ;
 int FUNC_4 (struct ud*,int ) ;

extern void
FUNC_5(struct ud* VAR_2)
{
  FUNC_0((void*)VAR_2, 0, sizeof(struct ud));
  FUNC_3(VAR_2, 16);
  VAR_2->mnemonic = VAR_0;
  FUNC_4(VAR_2, 0);

  FUNC_2(VAR_2, VAR_1);


  FUNC_1(VAR_2, VAR_2->asm_buf_int, sizeof(VAR_2->asm_buf_int));
}
