
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct uniphier_aio_sub {int compr_bytes; int rd_offs; int wr_offs; } ;


 int FUNC_0 (int ,int ,int ) ;

u64 FUNC_1(struct uniphier_aio_sub *VAR_0)
{
 return FUNC_0(VAR_0->wr_offs, VAR_0->rd_offs, VAR_0->compr_bytes);
}
