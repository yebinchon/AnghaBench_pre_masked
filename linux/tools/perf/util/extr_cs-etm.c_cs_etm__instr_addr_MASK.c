
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cs_etm_queue {int dummy; } ;
struct cs_etm_packet {scalar_t__ isa; int start_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct cs_etm_queue*,int,int) ;

__attribute__((used)) static inline u64 FUNC_1(struct cs_etm_queue *VAR_1,
         u64 VAR_2,
         const struct cs_etm_packet *VAR_3,
         u64 VAR_4)
{
 if (VAR_3->isa == VAR_0) {
  u64 VAR_5 = VAR_3->start_addr;

  while (VAR_4 > 0) {
   VAR_5 += FUNC_0(VAR_1,
             VAR_2, VAR_5);
   VAR_4--;
  }
  return VAR_5;
 }


 return VAR_3->start_addr + VAR_4 * 4;
}
