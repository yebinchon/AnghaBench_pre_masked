
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar8xxx_priv {int initialized; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ar8xxx_priv*) ;
 int FUNC_1 (struct ar8xxx_priv*,int ,int ,int ,int) ;
 int FUNC_2 (struct ar8xxx_priv*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct ar8xxx_priv *VAR_2)
{
 if (VAR_2->initialized)
  return 0;

 FUNC_2(VAR_2, VAR_1, VAR_0);
 FUNC_1(VAR_2, VAR_1, VAR_0, 0, 1000);

 FUNC_0(VAR_2);

 VAR_2->initialized = 1;
 return 0;
}
