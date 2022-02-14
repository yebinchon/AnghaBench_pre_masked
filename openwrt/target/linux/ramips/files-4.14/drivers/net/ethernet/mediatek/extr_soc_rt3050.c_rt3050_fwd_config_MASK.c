
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fe_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct fe_priv*) ;
 int FUNC_1 (struct fe_priv*) ;
 int FUNC_2 (struct fe_priv*) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_4(struct fe_priv *VAR_5)
{
 int VAR_6;

 if (VAR_4 != VAR_2) {
  VAR_6 = FUNC_2(VAR_5);
  if (VAR_6)
   return VAR_6;
 }

 FUNC_1(VAR_5);
 if (VAR_4 != VAR_3)
  FUNC_3(VAR_0, VAR_1);
 FUNC_0(VAR_5);

 return 0;
}
