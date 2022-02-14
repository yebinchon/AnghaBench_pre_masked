
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,int ,int ) ;
 scalar_t__ FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_1 ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_9(int VAR_5)
{
 static bool VAR_6;
 int VAR_7;

 if (FUNC_6(!VAR_2)) {
  if (FUNC_5(VAR_5, VAR_4))
   return VAR_5;
 } else if (!VAR_6) {
  FUNC_7("workqueue: round-robin CPU selection forced, expect performance impact\n");
  VAR_6 = 1;
 }

 if (FUNC_2(VAR_4))
  return VAR_5;

 VAR_7 = FUNC_0(VAR_3);
 VAR_7 = FUNC_4(VAR_7, VAR_4, VAR_0);
 if (FUNC_8(VAR_7 >= VAR_1)) {
  VAR_7 = FUNC_3(VAR_4, VAR_0);
  if (FUNC_8(VAR_7 >= VAR_1))
   return VAR_5;
 }
 FUNC_1(VAR_3, VAR_7);

 return VAR_7;
}
