
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct xsk_socket_info {unsigned int outstanding_tx; int tx; } ;
typedef int pkt_data ;
struct TYPE_2__ {unsigned int addr; int len; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct xsk_socket_info*) ;
 unsigned int FUNC_1 (int *,unsigned int,unsigned int*) ;
 int FUNC_2 (int *,unsigned int) ;
 TYPE_1__* FUNC_3 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct xsk_socket_info *VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 if (FUNC_1(&VAR_3->tx, VAR_0, &VAR_5) == VAR_0) {
  unsigned int VAR_6;

  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   FUNC_3(&VAR_3->tx, VAR_5 + VAR_6)->addr =
    (VAR_4 + VAR_6) << VAR_2;
   FUNC_3(&VAR_3->tx, VAR_5 + VAR_6)->len =
    sizeof(pkt_data) - 1;
  }

  FUNC_2(&VAR_3->tx, VAR_0);
  VAR_3->outstanding_tx += VAR_0;
  VAR_4 += VAR_0;
  VAR_4 %= VAR_1;
 }

 FUNC_0(VAR_3);
}
