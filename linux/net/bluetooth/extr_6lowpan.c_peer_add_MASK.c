
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lowpan_peer {int list; } ;
struct lowpan_btle_dev {int peer_count; int peers; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static inline void FUNC_2(struct lowpan_btle_dev *VAR_0,
       struct lowpan_peer *VAR_1)
{
 FUNC_1(&VAR_1->list, &VAR_0->peers);
 FUNC_0(&VAR_0->peer_count);
}
