
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ w_nr; } ;
struct rds_ib_connection {TYPE_2__ i_send_ring; } ;
struct TYPE_3__ {int imm_data; } ;
struct ib_wc {scalar_t__ wr_id; TYPE_1__ ex; int byte_len; int status; } ;
struct ib_cq {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ib_cq*,int ,struct ib_wc*) ;
 int FUNC_2 (struct rds_ib_connection*,struct ib_wc*) ;
 int FUNC_3 (struct rds_ib_connection*,struct ib_wc*) ;
 int FUNC_4 (char*,unsigned long long,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct rds_ib_connection *VAR_2, struct ib_cq *VAR_3,
       struct ib_wc *VAR_4)
{
 int VAR_5, VAR_6;
 struct ib_wc *VAR_7;

 while ((VAR_5 = FUNC_1(VAR_3, VAR_1, VAR_4)) > 0) {
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
   VAR_7 = VAR_4 + VAR_6;
   FUNC_4("wc wr_id 0x%llx status %u byte_len %u imm_data %u\n",
     (unsigned long long)VAR_7->wr_id, VAR_7->status,
     VAR_7->byte_len, FUNC_0(VAR_7->ex.imm_data));

   if (VAR_7->wr_id <= VAR_2->i_send_ring.w_nr ||
       VAR_7->wr_id == VAR_0)
    FUNC_3(VAR_2, VAR_7);
   else
    FUNC_2(VAR_2, VAR_7);

  }
 }
}
