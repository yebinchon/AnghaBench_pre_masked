
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar8xxx_priv {int mib_work; int mib_lock; int reg_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 struct ar8xxx_priv* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct ar8xxx_priv *
FUNC_3(void)
{
 struct ar8xxx_priv *VAR_2;

 VAR_2 = FUNC_1(sizeof(struct ar8xxx_priv), VAR_0);
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 FUNC_2(&VAR_2->reg_mutex);
 FUNC_2(&VAR_2->mib_lock);
 FUNC_0(&VAR_2->mib_work, VAR_1);

 return VAR_2;
}
