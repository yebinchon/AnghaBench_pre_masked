
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fe_priv {int rx_napi; TYPE_1__* soc; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int rx_int; int tx_int; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 struct fe_priv* FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_3, void *VAR_4)
{
 struct fe_priv *VAR_5 = FUNC_6(VAR_4);
 u32 VAR_6, VAR_7;

 VAR_6 = FUNC_2(VAR_0);

 if (FUNC_7(!VAR_6))
  return VAR_2;

 VAR_7 = (VAR_5->soc->rx_int | VAR_5->soc->tx_int);
 if (FUNC_4(VAR_6 & VAR_7)) {
  if (FUNC_4(FUNC_5(&VAR_5->rx_napi))) {
   FUNC_1(VAR_7);
   FUNC_0(&VAR_5->rx_napi);
  }
 } else {
  FUNC_3(VAR_6, VAR_0);
 }

 return VAR_1;
}
