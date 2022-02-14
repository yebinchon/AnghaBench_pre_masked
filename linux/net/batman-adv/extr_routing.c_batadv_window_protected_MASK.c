
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_priv {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct batadv_priv*,char*) ;
 int FUNC_1 (unsigned long,int ) ;
 unsigned long VAR_3 ;

bool FUNC_2(struct batadv_priv *VAR_4, s32 VAR_5,
        s32 VAR_6, unsigned long *VAR_7,
        bool *VAR_8)
{
 if (VAR_5 <= -VAR_6 ||
     VAR_5 >= VAR_1) {
  if (!FUNC_1(*VAR_7,
       VAR_2))
   return 1;

  *VAR_7 = VAR_3;
  if (VAR_8)
   *VAR_8 = 1;
  FUNC_0(VAR_0, VAR_4,
      "old packet received, start protection\n");
 }

 return 0;
}
