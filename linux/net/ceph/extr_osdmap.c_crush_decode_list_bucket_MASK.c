
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int size; } ;
struct crush_bucket_list {void** sum_weights; void** item_weights; TYPE_1__ h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (void**) ;
 int FUNC_1 (void**,void*,int,int ) ;
 int FUNC_2 (char*,void*,void*) ;
 void* FUNC_3 (int,int,int ) ;

__attribute__((used)) static int FUNC_4(void **VAR_4, void *VAR_5,
        struct crush_bucket_list *VAR_6)
{
 int VAR_7;
 FUNC_2("crush_decode_list_bucket %p to %p\n", *VAR_4, VAR_5);
 VAR_6->item_weights = FUNC_3(VAR_6->h.size, sizeof(u32), VAR_2);
 if (VAR_6->item_weights == ((void*)0))
  return -VAR_1;
 VAR_6->sum_weights = FUNC_3(VAR_6->h.size, sizeof(u32), VAR_2);
 if (VAR_6->sum_weights == ((void*)0))
  return -VAR_1;
 FUNC_1(VAR_4, VAR_5, 2 * VAR_6->h.size * sizeof(u32), VAR_3);
 for (VAR_7 = 0; VAR_7 < VAR_6->h.size; VAR_7++) {
  VAR_6->item_weights[VAR_7] = FUNC_0(VAR_4);
  VAR_6->sum_weights[VAR_7] = FUNC_0(VAR_4);
 }
 return 0;
bad:
 return -VAR_0;
}
