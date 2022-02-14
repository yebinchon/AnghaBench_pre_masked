
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lowpan_peer {int list; } ;
struct lowpan_btle_dev {int peer_count; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct lowpan_peer*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;

__attribute__((used)) static inline bool FUNC_5(struct lowpan_btle_dev *VAR_2,
       struct lowpan_peer *VAR_3)
{
 FUNC_3(&VAR_3->list);
 FUNC_2(VAR_3, VAR_1);

 FUNC_4(VAR_0);

 if (FUNC_1(&VAR_2->peer_count)) {
  FUNC_0("last peer");
  return 1;
 }

 return 0;
}
