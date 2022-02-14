
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_clk {int (* set_rate ) (struct device*,struct fsi_priv*) ;int * own; int * div; int * ick; int * xck; scalar_t__ count; scalar_t__ rate; } ;
struct fsi_priv {struct fsi_clk clock; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*) ;
 void* FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct fsi_priv*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1,
   struct fsi_priv *VAR_2,
   int VAR_3,
   int VAR_4,
   int VAR_5,
   int (*VAR_6)(struct device *VAR_7,
     struct fsi_priv *VAR_8))
{
 struct fsi_clk *VAR_9 = &VAR_2->clock;
 int VAR_10 = FUNC_3(VAR_2);

 VAR_9->xck = ((void*)0);
 VAR_9->ick = ((void*)0);
 VAR_9->div = ((void*)0);
 VAR_9->rate = 0;
 VAR_9->count = 0;
 VAR_9->set_rate = VAR_6;

 VAR_9->own = FUNC_2(VAR_1, ((void*)0));
 if (FUNC_0(VAR_9->own))
  return -VAR_0;


 if (VAR_3) {
  VAR_9->xck = FUNC_2(VAR_1, VAR_10 ? "xcka" : "xckb");
  if (FUNC_0(VAR_9->xck)) {
   FUNC_1(VAR_1, "can't get xck clock\n");
   return -VAR_0;
  }
  if (VAR_9->xck == VAR_9->own) {
   FUNC_1(VAR_1, "cpu doesn't support xck clock\n");
   return -VAR_0;
  }
 }


 if (VAR_4) {
  VAR_9->ick = FUNC_2(VAR_1, VAR_10 ? "icka" : "ickb");
  if (FUNC_0(VAR_9->ick)) {
   FUNC_1(VAR_1, "can't get ick clock\n");
   return -VAR_0;
  }
  if (VAR_9->ick == VAR_9->own) {
   FUNC_1(VAR_1, "cpu doesn't support ick clock\n");
   return -VAR_0;
  }
 }


 if (VAR_5) {
  VAR_9->div = FUNC_2(VAR_1, VAR_10 ? "diva" : "divb");
  if (FUNC_0(VAR_9->div)) {
   FUNC_1(VAR_1, "can't get div clock\n");
   return -VAR_0;
  }
  if (VAR_9->div == VAR_9->own) {
   FUNC_1(VAR_1, "cpu doesn't support div clock\n");
   return -VAR_0;
  }
 }

 return 0;
}
