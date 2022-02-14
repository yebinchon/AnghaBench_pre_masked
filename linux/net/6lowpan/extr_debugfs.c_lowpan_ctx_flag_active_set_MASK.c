
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct lowpan_iphc_ctx {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, u64 VAR_3)
{
 struct lowpan_iphc_ctx *VAR_4 = VAR_2;

 if (VAR_3 != 0 && VAR_3 != 1)
  return -VAR_0;

 if (VAR_3)
  FUNC_1(VAR_1, &VAR_4->flags);
 else
  FUNC_0(VAR_1, &VAR_4->flags);

 return 0;
}
