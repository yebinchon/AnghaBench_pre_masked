
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct tfrc_loss_hist {scalar_t__ const counter; TYPE_1__** ring; } ;
struct TYPE_2__ {int li_length; } ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (scalar_t__ const) ;

__attribute__((used)) static inline u32 FUNC_2(struct tfrc_loss_hist *VAR_0, const u8 VAR_1)
{
 FUNC_0(VAR_1 >= VAR_0->counter);
 return VAR_0->ring[FUNC_1(VAR_0->counter - VAR_1 - 1)]->li_length;
}
