
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct cs_etm_decoder {int prev_return; int dcd_tree; } ;
typedef int ocsd_datapath_resp_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,scalar_t__,size_t,int const*,scalar_t__*) ;

int FUNC_3(struct cs_etm_decoder *VAR_4,
           u64 VAR_5, const u8 *VAR_6,
           size_t VAR_7, size_t *VAR_8)
{
 int VAR_9 = 0;
 ocsd_datapath_resp_t VAR_10 = VAR_3;
 ocsd_datapath_resp_t VAR_11 = VAR_4->prev_return;
 size_t VAR_12 = 0;
 u32 VAR_13;

 while (VAR_12 < VAR_7) {
  if (FUNC_1(VAR_11)) {
   VAR_10 = FUNC_2(VAR_4->dcd_tree,
         VAR_2,
         0,
         0,
         ((void*)0),
         ((void*)0));
  } else if (FUNC_0(VAR_11)) {
   VAR_10 = FUNC_2(VAR_4->dcd_tree,
         VAR_1,
         VAR_5 + VAR_12,
         VAR_7 - VAR_12,
         &VAR_6[VAR_12],
         &VAR_13);
   VAR_12 += VAR_13;
  } else {
   VAR_9 = -VAR_0;
   break;
  }






  if (FUNC_1(VAR_10))
   break;

  VAR_11 = VAR_10;
 }

 VAR_4->prev_return = VAR_10;
 *VAR_8 = VAR_12;

 return VAR_9;
}
