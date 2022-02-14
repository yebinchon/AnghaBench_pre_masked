
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,unsigned long const*,int) ;
 int FUNC_4 (int ,int) ;
 int VAR_1 ;

bool FUNC_5(u32 *VAR_2,
          const unsigned long *VAR_3)
{
 bool VAR_4 = 1;


 if (VAR_0 > 32) {
  FUNC_0(VAR_1);

  FUNC_4(VAR_1, VAR_0);
  FUNC_2(VAR_1, 32);
  FUNC_1(VAR_1, VAR_1, VAR_0);
  if (FUNC_3(VAR_1, VAR_3,
          VAR_0)) {

   VAR_4 = 0;
  }
 }
 *VAR_2 = VAR_3[0];
 return VAR_4;
}
