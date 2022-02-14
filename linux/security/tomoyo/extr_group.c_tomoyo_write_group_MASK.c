
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct tomoyo_path_group {int member_name; int head; } ;
struct tomoyo_number_group {int head; int number; } ;
struct tomoyo_group {int member_list; } ;
struct tomoyo_address_group {int head; int address; } ;
struct tomoyo_acl_param {char* data; int * list; } ;
typedef int e ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;
 struct tomoyo_group* FUNC_0 (struct tomoyo_acl_param*,scalar_t__ const) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tomoyo_acl_param*,int *) ;
 int FUNC_3 (struct tomoyo_acl_param*,int *) ;
 int FUNC_4 (struct tomoyo_group*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct tomoyo_acl_param*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int *,int,struct tomoyo_acl_param*,int ) ;

int FUNC_8(struct tomoyo_acl_param *VAR_7, const u8 VAR_8)
{
 struct tomoyo_group *VAR_9 = FUNC_0(VAR_7, VAR_8);
 int VAR_10 = -VAR_0;

 if (!VAR_9)
  return -VAR_1;
 VAR_7->list = &VAR_9->member_list;
 if (VAR_8 == VAR_3) {
  struct tomoyo_path_group VAR_11 = { };

  VAR_11.member_name = FUNC_1(FUNC_6(VAR_7));
  if (!VAR_11.member_name) {
   VAR_10 = -VAR_1;
   goto out;
  }
  VAR_10 = FUNC_7(&VAR_11.head, sizeof(VAR_11), VAR_7,
       VAR_6);
  FUNC_5(VAR_11.member_name);
 } else if (VAR_8 == VAR_2) {
  struct tomoyo_number_group VAR_12 = { };

  if (VAR_7->data[0] == '@' ||
      !FUNC_3(VAR_7, &VAR_12.number))
   goto out;
  VAR_10 = FUNC_7(&VAR_12.head, sizeof(VAR_12), VAR_7,
       VAR_5);




 } else {
  struct tomoyo_address_group VAR_13 = { };

  if (VAR_7->data[0] == '@' ||
      !FUNC_2(VAR_7, &VAR_13.address))
   goto out;
  VAR_10 = FUNC_7(&VAR_13.head, sizeof(VAR_13), VAR_7,
          VAR_4);
 }
out:
 FUNC_4(VAR_9);
 return VAR_10;
}
