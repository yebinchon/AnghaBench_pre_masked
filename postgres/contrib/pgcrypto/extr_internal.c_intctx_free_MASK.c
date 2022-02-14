
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct int_ctx {scalar_t__ ptr; } ;
typedef struct int_ctx PX_Cipher ;


 int FUNC_0 (struct int_ctx*) ;
 int FUNC_1 (struct int_ctx*,int ,int) ;

__attribute__((used)) static void
FUNC_2(PX_Cipher *VAR_0)
{
 struct int_ctx *VAR_1 = (struct int_ctx *) VAR_0->ptr;

 if (VAR_1)
 {
  FUNC_1(VAR_1, 0, sizeof *VAR_1);
  FUNC_0(VAR_1);
 }
 FUNC_0(VAR_0);
}
