
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int send_flags; } ;
struct rds_ib_send_work {TYPE_1__ s_wr; } ;
struct rds_ib_connection {scalar_t__ i_unsignaled_wrs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct rds_ib_connection *VAR_2,
          struct rds_ib_send_work *VAR_3,
          bool VAR_4)
{





 if (VAR_2->i_unsignaled_wrs-- == 0 || VAR_4) {
  VAR_2->i_unsignaled_wrs = VAR_1;
  VAR_3->s_wr.send_flags |= VAR_0;
  return 1;
 }
 return 0;
}
