
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lowpan_peer {struct l2cap_chan* chan; int list; scalar_t__ lladdr; int peer_addr; } ;
struct lowpan_btle_dev {int notify_peers; } ;
struct l2cap_chan {int dst; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 struct lowpan_peer* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct lowpan_btle_dev*,struct lowpan_peer*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static struct l2cap_chan *FUNC_11(struct l2cap_chan *VAR_3,
     struct lowpan_btle_dev *VAR_4,
     bool VAR_5)
{
 struct lowpan_peer *VAR_6;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->chan = VAR_3;
 FUNC_5(&VAR_6->peer_addr, 0, sizeof(struct in6_addr));

 FUNC_2((void *)VAR_6->lladdr, &VAR_3->dst);

 FUNC_4(&VAR_6->peer_addr, VAR_6->lladdr);

 FUNC_9(&VAR_1);
 FUNC_1(&VAR_6->list);
 FUNC_7(VAR_4, VAR_6);
 FUNC_10(&VAR_1);


 if (VAR_5)
  FUNC_0(&VAR_4->notify_peers, VAR_2);
 FUNC_8(&VAR_4->notify_peers, FUNC_6(100));

 return VAR_6->chan;
}
