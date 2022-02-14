
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpass_variant {int rdma_channels; int wrdma_channel_start; int wrdma_channels; } ;
struct lpass_data {int dma_ch_bit_map; struct lpass_variant* variant; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static int FUNC_3(struct lpass_data *VAR_2,
        int VAR_3)
{
 struct lpass_variant *VAR_4 = VAR_2->variant;
 int VAR_5 = 0;

 if (VAR_3 == VAR_1) {
  VAR_5 = FUNC_0(&VAR_2->dma_ch_bit_map,
     VAR_4->rdma_channels);

  if (VAR_5 >= VAR_4->rdma_channels)
   return -VAR_0;
 } else {
  VAR_5 = FUNC_1(&VAR_2->dma_ch_bit_map,
     VAR_4->wrdma_channel_start +
     VAR_4->wrdma_channels,
     VAR_4->wrdma_channel_start);

  if (VAR_5 >= VAR_4->wrdma_channel_start + VAR_4->wrdma_channels)
   return -VAR_0;
 }

 FUNC_2(VAR_5, &VAR_2->dma_ch_bit_map);

 return VAR_5;
}
