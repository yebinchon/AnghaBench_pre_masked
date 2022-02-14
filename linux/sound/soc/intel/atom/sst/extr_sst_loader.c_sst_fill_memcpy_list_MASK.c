
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sst_memcpy_list {int is_io; int memcpylist; int size; void const* src; void* dstn; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sst_memcpy_list* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,struct list_head*) ;

__attribute__((used)) static int FUNC_2(struct list_head *VAR_2,
   void *VAR_3, const void *VAR_4, u32 VAR_5, bool VAR_6)
{
 struct sst_memcpy_list *VAR_7;

 VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;
 VAR_7->dstn = VAR_3;
 VAR_7->src = VAR_4;
 VAR_7->size = VAR_5;
 VAR_7->is_io = VAR_6;
 FUNC_1(&VAR_7->memcpylist, VAR_2);

 return 0;
}
