
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rds_ib_connection {int dummy; } ;
struct rds_ib_ack_state {int dummy; } ;
struct TYPE_2__ {int imm_data; } ;
struct ib_wc {TYPE_1__ ex; int byte_len; int status; scalar_t__ wr_id; } ;
struct ib_cq {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ib_cq*,int ,struct ib_wc*) ;
 int FUNC_2 (struct rds_ib_connection*,struct ib_wc*,struct rds_ib_ack_state*) ;
 int FUNC_3 (char*,unsigned long long,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct rds_ib_connection *VAR_1, struct ib_cq *VAR_2,
       struct ib_wc *VAR_3,
       struct rds_ib_ack_state *VAR_4)
{
 int VAR_5, VAR_6;
 struct ib_wc *VAR_7;

 while ((VAR_5 = FUNC_1(VAR_2, VAR_0, VAR_3)) > 0) {
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
   VAR_7 = VAR_3 + VAR_6;
   FUNC_3("wc wr_id 0x%llx status %u byte_len %u imm_data %u\n",
     (unsigned long long)VAR_7->wr_id, VAR_7->status,
     VAR_7->byte_len, FUNC_0(VAR_7->ex.imm_data));

   FUNC_2(VAR_1, VAR_7, VAR_4);
  }
 }
}
