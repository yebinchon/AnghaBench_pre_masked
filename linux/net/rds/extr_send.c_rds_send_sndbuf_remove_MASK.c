
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct rds_sock {scalar_t__ rs_snd_bytes; int rs_lock; } ;
struct TYPE_3__ {int h_len; } ;
struct TYPE_4__ {TYPE_1__ i_hdr; } ;
struct rds_message {TYPE_2__ m_inc; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct rds_sock *VAR_1, struct rds_message *VAR_2)
{
 u32 VAR_3 = FUNC_2(VAR_2->m_inc.i_hdr.h_len);

 FUNC_1(&VAR_1->rs_lock);

 FUNC_0(VAR_1->rs_snd_bytes < VAR_3);
 VAR_1->rs_snd_bytes -= VAR_3;

 if (VAR_1->rs_snd_bytes == 0)
  FUNC_3(VAR_0);
}
