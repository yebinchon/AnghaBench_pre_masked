
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct xsk_socket_info {unsigned int rx_npkts; unsigned int outstanding_tx; int rx; int tx; TYPE_1__* umem; } ;
struct pollfd {int dummy; } ;
struct TYPE_6__ {scalar_t__ len; int addr; } ;
struct TYPE_5__ {scalar_t__ len; int addr; } ;
struct TYPE_4__ {int buffer; int fq; } ;


 int VAR_0 ;
 int FUNC_0 (struct xsk_socket_info*,struct pollfd*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,scalar_t__,int ) ;
 int FUNC_3 (struct xsk_socket_info*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct pollfd*,int ,int ) ;
 int FUNC_5 (char*) ;
 unsigned int FUNC_6 (int *,int ,scalar_t__*) ;
 int FUNC_7 (int *,unsigned int) ;
 TYPE_3__* FUNC_8 (int *,scalar_t__) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned int,scalar_t__*) ;
 int FUNC_11 (int *,unsigned int) ;
 TYPE_2__* FUNC_12 (int *,scalar_t__) ;
 int FUNC_13 (int ) ;
 char* FUNC_14 (int ,int ) ;

__attribute__((used)) static void FUNC_15(struct xsk_socket_info *VAR_3, struct pollfd *VAR_4)
{
 unsigned int VAR_5, VAR_6;
 u32 VAR_7 = 0, VAR_8 = 0;
 int VAR_9;

 FUNC_0(VAR_3, VAR_4);

 VAR_5 = FUNC_6(&VAR_3->rx, VAR_0, &VAR_7);
 if (!VAR_5) {
  if (FUNC_9(&VAR_3->umem->fq))
   VAR_9 = FUNC_4(VAR_4, VAR_1, VAR_2);
  return;
 }

 VAR_9 = FUNC_10(&VAR_3->tx, VAR_5, &VAR_8);
 while (VAR_9 != VAR_5) {
  if (VAR_9 < 0)
   FUNC_1(-VAR_9);
  if (FUNC_9(&VAR_3->tx))
   FUNC_3(VAR_3);
  VAR_9 = FUNC_10(&VAR_3->tx, VAR_5, &VAR_8);
 }

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  u64 VAR_10 = FUNC_8(&VAR_3->rx, VAR_7)->addr;
  u32 VAR_11 = FUNC_8(&VAR_3->rx, VAR_7++)->len;
  u64 VAR_12 = VAR_10;

  VAR_10 = FUNC_13(VAR_10);
  char *VAR_13 = FUNC_14(VAR_3->umem->buffer, VAR_10);

  FUNC_5(VAR_13);

  FUNC_2(VAR_13, VAR_11, VAR_10);
  FUNC_12(&VAR_3->tx, VAR_8)->addr = VAR_12;
  FUNC_12(&VAR_3->tx, VAR_8++)->len = VAR_11;
 }

 FUNC_11(&VAR_3->tx, VAR_5);
 FUNC_7(&VAR_3->rx, VAR_5);

 VAR_3->rx_npkts += VAR_5;
 VAR_3->outstanding_tx += VAR_5;
}
