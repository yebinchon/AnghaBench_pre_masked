
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_priv {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned long*,scalar_t__) ;
 int FUNC_1 (int ,struct batadv_priv*,char*,...) ;
 int FUNC_2 (unsigned long*,scalar_t__) ;
 int FUNC_3 (unsigned long*,scalar_t__) ;

bool FUNC_4(void *VAR_3, unsigned long *VAR_4,
      s32 VAR_5, int VAR_6)
{
 struct batadv_priv *VAR_7 = VAR_3;




 if (VAR_5 <= 0 && VAR_5 > -VAR_2) {
  if (VAR_6)
   FUNC_2(VAR_4, -VAR_5);
  return 0;
 }




 if (VAR_5 > 0 && VAR_5 < VAR_2) {
  FUNC_0(VAR_4, VAR_5);

  if (VAR_6)
   FUNC_2(VAR_4, 0);
  return 1;
 }


 if (VAR_5 >= VAR_2 &&
     VAR_5 < VAR_1) {
  FUNC_1(VAR_0, VAR_7,
      "We missed a lot of packets (%i) !\n",
      VAR_5 - 1);
  FUNC_3(VAR_4, VAR_2);
  if (VAR_6)
   FUNC_2(VAR_4, 0);
  return 1;
 }
 FUNC_1(VAR_0, VAR_7,
     "Other host probably restarted!\n");

 FUNC_3(VAR_4, VAR_2);
 if (VAR_6)
  FUNC_2(VAR_4, 0);

 return 1;
}
