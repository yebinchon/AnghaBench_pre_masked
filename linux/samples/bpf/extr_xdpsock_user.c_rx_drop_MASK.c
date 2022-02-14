
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct xsk_socket_info {unsigned int rx_npkts; int rx; TYPE_1__* umem; } ;
struct pollfd {int dummy; } ;
struct TYPE_4__ {scalar_t__ len; int addr; } ;
struct TYPE_3__ {int fq; int buffer; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,scalar_t__,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct pollfd*,int ,int ) ;
 unsigned int FUNC_3 (int *,int ,scalar_t__*) ;
 int FUNC_4 (int *,unsigned int) ;
 TYPE_2__* FUNC_5 (int *,scalar_t__) ;
 int * FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned int,scalar_t__*) ;
 int FUNC_9 (int *,unsigned int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 char* FUNC_12 (int ,int ) ;

__attribute__((used)) static void FUNC_13(struct xsk_socket_info *VAR_3, struct pollfd *VAR_4)
{
 unsigned int VAR_5, VAR_6;
 u32 VAR_7 = 0, VAR_8 = 0;
 int VAR_9;

 VAR_5 = FUNC_3(&VAR_3->rx, VAR_0, &VAR_7);
 if (!VAR_5) {
  if (FUNC_7(&VAR_3->umem->fq))
   VAR_9 = FUNC_2(VAR_4, VAR_1, VAR_2);
  return;
 }

 VAR_9 = FUNC_8(&VAR_3->umem->fq, VAR_5, &VAR_8);
 while (VAR_9 != VAR_5) {
  if (VAR_9 < 0)
   FUNC_0(-VAR_9);
  if (FUNC_7(&VAR_3->umem->fq))
   VAR_9 = FUNC_2(VAR_4, VAR_1, VAR_2);
  VAR_9 = FUNC_8(&VAR_3->umem->fq, VAR_5, &VAR_8);
 }

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  u64 VAR_10 = FUNC_5(&VAR_3->rx, VAR_7)->addr;
  u32 VAR_11 = FUNC_5(&VAR_3->rx, VAR_7++)->len;
  u64 VAR_12 = FUNC_11(VAR_10);

  VAR_10 = FUNC_10(VAR_10);
  char *VAR_13 = FUNC_12(VAR_3->umem->buffer, VAR_10);

  FUNC_1(VAR_13, VAR_11, VAR_10);
  *FUNC_6(&VAR_3->umem->fq, VAR_8++) = VAR_12;
 }

 FUNC_9(&VAR_3->umem->fq, VAR_5);
 FUNC_4(&VAR_3->rx, VAR_5);
 VAR_3->rx_npkts += VAR_5;
}
