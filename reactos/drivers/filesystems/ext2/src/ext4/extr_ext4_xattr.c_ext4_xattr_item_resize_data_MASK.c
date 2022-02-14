
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_xattr_item {size_t data_size; void* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (size_t,int ) ;
 int FUNC_2 (void*,void*,size_t) ;

__attribute__((used)) static int FUNC_3(struct ext4_xattr_item *VAR_2,
           size_t VAR_3)
{
 if (VAR_3 != VAR_2->data_size) {
  void *VAR_4;
  VAR_4 = FUNC_1(VAR_3, VAR_1);
  if (!VAR_4)
   return -VAR_0;

  FUNC_2(VAR_4, VAR_2->data, VAR_2->data_size);
  FUNC_0(VAR_2->data);

  VAR_2->data = VAR_4;
  VAR_2->data_size = VAR_3;
 }
 return 0;
}
