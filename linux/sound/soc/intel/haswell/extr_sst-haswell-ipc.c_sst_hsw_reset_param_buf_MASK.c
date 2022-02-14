
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_hsw {scalar_t__ param_buf; scalar_t__ param_idx_r; scalar_t__ param_idx_w; } ;


 int FUNC_0 (void*,int ,int) ;

void FUNC_1(struct sst_hsw *VAR_0)
{
 VAR_0->param_idx_w = 0;
 VAR_0->param_idx_r = 0;
 FUNC_0((void *)VAR_0->param_buf, 0, sizeof(VAR_0->param_buf));
}
