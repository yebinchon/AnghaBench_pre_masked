
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crush_choose_arg {int dummy; } ;
struct TYPE_2__ {unsigned int size; int* items; int hash; } ;
struct crush_bucket_straw2 {TYPE_1__ h; } ;
typedef scalar_t__ __u32 ;
typedef scalar_t__ __s64 ;
typedef int __s32 ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int ,int,int ,int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (char*,scalar_t__,int ) ;
 int * FUNC_4 (struct crush_bucket_straw2 const*,struct crush_choose_arg const*) ;
 scalar_t__* FUNC_5 (struct crush_bucket_straw2 const*,struct crush_choose_arg const*,int) ;

__attribute__((used)) static int FUNC_6(const struct crush_bucket_straw2 *VAR_1,
    int VAR_2, int VAR_3,
    const struct crush_choose_arg *VAR_4,
    int VAR_5)
{
 unsigned int VAR_6, VAR_7 = 0;
 unsigned int VAR_8;
 __s64 VAR_9, VAR_10, VAR_11 = 0;
 __u32 *VAR_12 = FUNC_5(VAR_1, VAR_4, VAR_5);
 __s32 *VAR_13 = FUNC_4(VAR_1, VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_1->h.size; VAR_6++) {
  FUNC_3("weight 0x%x item %d\n", VAR_12[VAR_6], VAR_13[VAR_6]);
  if (VAR_12[VAR_6]) {
   VAR_8 = FUNC_0(VAR_1->h.hash, VAR_2, VAR_13[VAR_6], VAR_3);
   VAR_8 &= 0xffff;
   VAR_9 = FUNC_1(VAR_8) - 0x1000000000000ll;







   VAR_10 = FUNC_2(VAR_9, VAR_12[VAR_6]);
  } else {
   VAR_10 = VAR_0;
  }

  if (VAR_6 == 0 || VAR_10 > VAR_11) {
   VAR_7 = VAR_6;
   VAR_11 = VAR_10;
  }
 }

 return VAR_1->h.items[VAR_7];
}
