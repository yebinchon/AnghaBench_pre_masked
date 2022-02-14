
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int num_pkts; scalar_t__ blk_len; } ;
struct block_desc {TYPE_1__ h1; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int,scalar_t__,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct block_desc *VAR_1, uint32_t VAR_2, int VAR_3)
{
 if (VAR_1->h1.num_pkts && VAR_2 != VAR_1->h1.blk_len) {
  FUNC_1(VAR_0, "\nblock:%u with %upackets, expected "
   "len:%ld != actual len:%ld\n", VAR_3,
   VAR_1->h1.num_pkts, VAR_2, VAR_1->h1.blk_len);
  FUNC_0(1);
 }
}
