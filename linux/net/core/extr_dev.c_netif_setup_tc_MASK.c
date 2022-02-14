
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_tc_txq {unsigned int offset; unsigned int count; } ;
struct net_device {struct netdev_tc_txq* tc_to_txq; scalar_t__ num_tc; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*,int,int ) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1, unsigned int VAR_2)
{
 int VAR_3;
 struct netdev_tc_txq *VAR_4 = &VAR_1->tc_to_txq[0];


 if (VAR_4->offset + VAR_4->count > VAR_2) {
  FUNC_2("Number of in use tx queues changed invalidating tc mappings. Priority traffic classification disabled!\n");
  VAR_1->num_tc = 0;
  return;
 }


 for (VAR_3 = 1; VAR_3 < VAR_0 + 1; VAR_3++) {
  int VAR_5 = FUNC_0(VAR_1, VAR_3);

  VAR_4 = &VAR_1->tc_to_txq[VAR_5];
  if (VAR_4->offset + VAR_4->count > VAR_2) {
   FUNC_2("Number of in use tx queues changed. Priority %i to tc mapping %i is no longer valid. Setting map to 0\n",
    VAR_3, VAR_5);
   FUNC_1(VAR_1, VAR_3, 0);
  }
 }
}
