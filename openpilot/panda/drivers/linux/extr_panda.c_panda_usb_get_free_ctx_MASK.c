
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panda_usb_ctx {scalar_t__ ndx; int dlc; } ;
struct panda_inf_priv {int netdev; int free_ctx_cnt; struct panda_usb_ctx* tx_context; } ;
struct can_frame {int can_dlc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static inline struct panda_usb_ctx *FUNC_4(struct panda_inf_priv *VAR_2,
        struct can_frame *VAR_3)
{
  int VAR_4 = 0;
  struct panda_usb_ctx *VAR_5 = ((void*)0);

  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
    if (VAR_2->tx_context[VAR_4].ndx == VAR_0) {
      VAR_5 = &VAR_2->tx_context[VAR_4];
      VAR_5->ndx = VAR_4;
      VAR_5->dlc = VAR_3->can_dlc;

      FUNC_0(&VAR_2->free_ctx_cnt);
      break;
    }
  }

  FUNC_3("CTX num %d\n", FUNC_1(&VAR_2->free_ctx_cnt));
  if (!FUNC_1(&VAR_2->free_ctx_cnt)){

    FUNC_3("SENDING TOO FAST\n");
    FUNC_2(VAR_2->netdev);
  }

  return VAR_5;
}
