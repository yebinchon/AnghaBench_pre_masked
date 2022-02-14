
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_clk {int div; int ick; int xck; int count; } ;
struct fsi_priv {struct fsi_clk clock; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct fsi_priv*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1,
       struct fsi_priv *VAR_2)
{
 struct fsi_clk *VAR_3 = &VAR_2->clock;

 if (!FUNC_1(VAR_2))
  return -VAR_0;

 if (1 == VAR_3->count--) {
  FUNC_0(VAR_3->xck);
  FUNC_0(VAR_3->ick);
  FUNC_0(VAR_3->div);
 }

 return 0;
}
