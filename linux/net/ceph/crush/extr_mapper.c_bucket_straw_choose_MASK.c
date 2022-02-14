
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t size; int* items; int hash; } ;
struct crush_bucket_straw {int* straws; TYPE_1__ h; } ;
typedef int __u64 ;
typedef size_t __u32 ;


 int FUNC_0 (int ,int,int,int) ;

__attribute__((used)) static int FUNC_1(const struct crush_bucket_straw *VAR_0,
          int VAR_1, int VAR_2)
{
 __u32 VAR_3;
 int VAR_4 = 0;
 __u64 VAR_5 = 0;
 __u64 VAR_6;

 for (VAR_3 = 0; VAR_3 < VAR_0->h.size; VAR_3++) {
  VAR_6 = FUNC_0(VAR_0->h.hash, VAR_1, VAR_0->h.items[VAR_3], VAR_2);
  VAR_6 &= 0xffff;
  VAR_6 *= VAR_0->straws[VAR_3];
  if (VAR_3 == 0 || VAR_6 > VAR_5) {
   VAR_4 = VAR_3;
   VAR_5 = VAR_6;
  }
 }
 return VAR_0->h.items[VAR_4];
}
