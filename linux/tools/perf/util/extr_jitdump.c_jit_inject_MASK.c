
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jit_buf_desc {int dummy; } ;


 int FUNC_0 (int ,char*,char*,...) ;
 int FUNC_1 (struct jit_buf_desc*) ;
 int FUNC_2 (struct jit_buf_desc*,char*) ;
 int FUNC_3 (struct jit_buf_desc*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_4(struct jit_buf_desc *VAR_2, char *VAR_3)
{
 int VAR_4;

 if (VAR_1 > 0)
  FUNC_0(VAR_0, "injecting: %s\n", VAR_3);

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (VAR_4)
  return -1;

 VAR_4 = FUNC_3(VAR_2);

 FUNC_1(VAR_2);

 if (VAR_1 > 0)
  FUNC_0(VAR_0, "injected: %s (%d)\n", VAR_3, VAR_4);

 return 0;
}
