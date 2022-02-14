
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_xattr_item {char* name; size_t name_len; int is_data; int list_node; scalar_t__ data_size; int * data; scalar_t__ name_index; } ;
typedef scalar_t__ __u8 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 struct ext4_xattr_item* FUNC_1 (int,int ) ;
 int FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (char*,char const*,size_t) ;

__attribute__((used)) static struct ext4_xattr_item *
FUNC_4(__u8 VAR_4, const char *VAR_5, size_t VAR_6)
{
 struct ext4_xattr_item *VAR_7;
 VAR_7 = FUNC_1(sizeof(struct ext4_xattr_item) + VAR_6, VAR_2);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->name_index = VAR_4;
 VAR_7->name = (char *)(VAR_7 + 1);
 VAR_7->name_len = VAR_6;
 VAR_7->data = ((void*)0);
 VAR_7->data_size = 0;
 FUNC_0(&VAR_7->list_node);

 FUNC_3(VAR_7->name, VAR_5, VAR_6);

 if (VAR_4 == VAR_0 &&
     VAR_6 == 4 &&
     !FUNC_2(VAR_5, "data", 4))
  VAR_7->is_data = VAR_3;
 else
  VAR_7->is_data = VAR_1;

 return VAR_7;
}
