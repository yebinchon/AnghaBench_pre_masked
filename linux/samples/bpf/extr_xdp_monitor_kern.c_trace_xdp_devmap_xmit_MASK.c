
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct devmap_xmit_ctx {scalar_t__ drops; scalar_t__ err; scalar_t__ sent; } ;
struct datarec {int info; int err; int dropped; int processed; } ;


 struct datarec* FUNC_0 (int *,int *) ;
 int VAR_0 ;

int FUNC_1(struct devmap_xmit_ctx *VAR_1)
{
 struct datarec *VAR_2;
 u32 VAR_3 = 0;

 VAR_2 = FUNC_0(&VAR_0, &VAR_3);
 if (!VAR_2)
  return 0;
 VAR_2->processed += VAR_1->sent;
 VAR_2->dropped += VAR_1->drops;


 VAR_2->info += 1;


 if (VAR_1->err)
  VAR_2->err++;


 if (VAR_1->drops < 0)
  VAR_2->err++;

 return 1;
}
