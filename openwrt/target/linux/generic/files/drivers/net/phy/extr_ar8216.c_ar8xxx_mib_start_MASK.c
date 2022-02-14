
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar8xxx_priv {int mib_poll_interval; int mib_work; } ;


 int FUNC_0 (struct ar8xxx_priv*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct ar8xxx_priv *VAR_0)
{
 if (!FUNC_0(VAR_0) || !VAR_0->mib_poll_interval)
  return;

 FUNC_2(&VAR_0->mib_work,
         FUNC_1(VAR_0->mib_poll_interval));
}
