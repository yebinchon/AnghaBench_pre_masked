
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct xt_hmark_info {scalar_t__ proto_mask; scalar_t__ hoffset; int hmodulus; int hashrnd; } ;
struct TYPE_2__ {int v32; } ;
struct hmark_tuple {scalar_t__ proto; TYPE_1__ uports; int dst; int src; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline u32
FUNC_4(struct hmark_tuple *VAR_0, const struct xt_hmark_info *VAR_1)
{
 u32 VAR_2;
 u32 VAR_3 = FUNC_1(VAR_0->src);
 u32 VAR_4 = FUNC_1(VAR_0->dst);

 if (VAR_4 < VAR_3)
  FUNC_3(VAR_3, VAR_4);

 VAR_2 = FUNC_0(VAR_3, VAR_4, VAR_0->uports.v32, VAR_1->hashrnd);
 VAR_2 = VAR_2 ^ (VAR_0->proto & VAR_1->proto_mask);

 return FUNC_2(VAR_2, VAR_1->hmodulus) + VAR_1->hoffset;
}
