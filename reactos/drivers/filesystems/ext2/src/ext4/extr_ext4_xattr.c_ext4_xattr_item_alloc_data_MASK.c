
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_xattr_item {size_t data_size; void* data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (size_t,int ) ;
 int FUNC_2 (void*,void const*,size_t) ;

__attribute__((used)) static int FUNC_3(struct ext4_xattr_item *VAR_2,
          const void *VAR_3, size_t VAR_4)
{
 void *VAR_5 = ((void*)0);
 FUNC_0(!VAR_2->data);
 VAR_5 = FUNC_1(VAR_4, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 if (VAR_3)
  FUNC_2(VAR_5, VAR_3, VAR_4);

 VAR_2->data = VAR_5;
 VAR_2->data_size = VAR_4;
 return 0;
}
