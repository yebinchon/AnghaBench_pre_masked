
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_sock {int rs_lock; int rs_cong_mask; scalar_t__ rs_cong_monitor; } ;
struct rds_cong_map {int m_waitq; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rds_cong_map*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,struct rds_cong_map*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ,int) ;

int FUNC_9(struct rds_cong_map *VAR_3, __be16 VAR_4, int VAR_5,
    struct rds_sock *VAR_6)
{
 if (!FUNC_3(VAR_3, VAR_4))
  return 0;
 if (VAR_5) {
  if (VAR_6 && VAR_6->rs_cong_monitor) {
   unsigned long VAR_7;



   FUNC_6(&VAR_6->rs_lock, VAR_7);
   VAR_6->rs_cong_mask |= FUNC_0(FUNC_2(VAR_4));
   FUNC_7(&VAR_6->rs_lock, VAR_7);



   if (!FUNC_3(VAR_3, VAR_4))
    return 0;
  }
  FUNC_4(VAR_2);
  return -VAR_0;
 }

 FUNC_4(VAR_1);
 FUNC_5("waiting on map %p for port %u\n", VAR_3, FUNC_1(VAR_4));

 return FUNC_8(VAR_3->m_waitq,
     !FUNC_3(VAR_3, VAR_4));
}
