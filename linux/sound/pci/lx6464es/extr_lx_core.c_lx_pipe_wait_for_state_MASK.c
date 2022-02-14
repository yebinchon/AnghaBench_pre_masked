
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct lx6464es {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct lx6464es*,int ,int,scalar_t__*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct lx6464es *VAR_1, u32 VAR_2,
      int VAR_3, u16 VAR_4)
{
 int VAR_5;



 for (VAR_5 = 0; VAR_5 != 50; ++VAR_5) {
  u16 VAR_6;
  int VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_6);

  if (VAR_7 < 0)
   return VAR_7;

  if (!VAR_7 && VAR_6 == VAR_4)
   return 0;

  FUNC_1(1);
 }

 return -VAR_0;
}
