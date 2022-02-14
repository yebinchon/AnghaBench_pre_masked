
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct lx6464es {int freq_ratio; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct lx6464es*,int ) ;
 int FUNC_3 (struct lx6464es*,int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct lx6464es *VAR_8)
{
 int VAR_9;
 u32 VAR_10 = FUNC_2(VAR_8, VAR_6);


 u32 VAR_11 = (VAR_10 & VAR_0) |
  (64 << VAR_4) |
  (64 << VAR_5) |
  (VAR_3 << VAR_2);

 FUNC_0(VAR_8->card->dev, "->lx_init_ethersound\n");

 VAR_8->freq_ratio = VAR_3;







 FUNC_3(VAR_8, VAR_6, VAR_11);

 for (VAR_9 = 0; VAR_9 != 1000; ++VAR_9) {
  if (FUNC_2(VAR_8, VAR_7) & 4) {
   FUNC_0(VAR_8->card->dev, "ethersound initialized after %dms\n",
       VAR_9);
   goto ethersound_initialized;
  }
  FUNC_4(1);
 }
 FUNC_1(VAR_8->card->dev,
     "ethersound could not be initialized after %dms\n", VAR_9);
 return -VAR_1;

 ethersound_initialized:
 FUNC_0(VAR_8->card->dev, "ethersound initialized\n");
 return 0;
}
