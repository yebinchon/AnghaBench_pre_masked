
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_clk {scalar_t__ count; int (* set_rate ) (struct device*,struct fsi_priv*) ;int div; int ick; int xck; } ;
struct fsi_priv {struct fsi_clk clock; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct fsi_priv*) ;
 int FUNC_2 (struct fsi_priv*) ;
 int FUNC_3 (struct device*,struct fsi_priv*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1,
     struct fsi_priv *VAR_2)
{
 struct fsi_clk *VAR_3 = &VAR_2->clock;
 int VAR_4 = -VAR_0;

 if (!FUNC_2(VAR_2))
  return VAR_4;

 if (0 == VAR_3->count) {
  VAR_4 = VAR_3->set_rate(VAR_1, VAR_2);
  if (VAR_4 < 0) {
   FUNC_1(VAR_2);
   return VAR_4;
  }

  FUNC_0(VAR_3->xck);
  FUNC_0(VAR_3->ick);
  FUNC_0(VAR_3->div);

  VAR_3->count++;
 }

 return VAR_4;
}
