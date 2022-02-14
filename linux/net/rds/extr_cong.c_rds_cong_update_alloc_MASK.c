
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int h_flags; } ;
struct TYPE_4__ {TYPE_1__ i_hdr; } ;
struct rds_message {TYPE_2__ m_inc; } ;
struct rds_connection {struct rds_cong_map* c_lcong; } ;
struct rds_cong_map {int m_page_addrs; } ;


 int FUNC_0 (struct rds_message*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct rds_message* FUNC_1 (int ,int ) ;

struct rds_message *FUNC_2(struct rds_connection *VAR_2)
{
 struct rds_cong_map *VAR_3 = VAR_2->c_lcong;
 struct rds_message *VAR_4;

 VAR_4 = FUNC_1(VAR_3->m_page_addrs, VAR_0);
 if (!FUNC_0(VAR_4))
  VAR_4->m_inc.i_hdr.h_flags = VAR_1;

 return VAR_4;
}
