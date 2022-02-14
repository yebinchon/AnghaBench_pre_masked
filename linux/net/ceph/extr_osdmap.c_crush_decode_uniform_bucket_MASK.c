
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int size; } ;
struct crush_bucket_uniform {int item_weight; TYPE_1__ h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void**) ;
 int FUNC_1 (void**,void*,int,int ) ;
 int FUNC_2 (char*,void*,void*) ;

__attribute__((used)) static int FUNC_3(void **VAR_2, void *VAR_3,
           struct crush_bucket_uniform *VAR_4)
{
 FUNC_2("crush_decode_uniform_bucket %p to %p\n", *VAR_2, VAR_3);
 FUNC_1(VAR_2, VAR_3, (1+VAR_4->h.size) * sizeof(u32), VAR_1);
 VAR_4->item_weight = FUNC_0(VAR_2);
 return 0;
bad:
 return -VAR_0;
}
