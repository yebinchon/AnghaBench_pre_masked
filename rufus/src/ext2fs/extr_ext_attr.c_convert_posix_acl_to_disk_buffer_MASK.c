
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ a_version; } ;
typedef TYPE_1__ posix_acl_xattr_header ;
struct TYPE_6__ {int e_tag; int e_perm; int e_id; } ;
typedef TYPE_2__ posix_acl_xattr_entry ;
struct TYPE_7__ {scalar_t__ a_version; } ;
typedef TYPE_3__ ext4_acl_header ;
typedef int ext4_acl_entry_short ;
struct TYPE_8__ {scalar_t__ e_id; void* e_perm; void* e_tag; } ;
typedef TYPE_4__ ext4_acl_entry ;
typedef int errcode_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (size_t) ;

__attribute__((used)) static errcode_t FUNC_3(const void *VAR_4, size_t VAR_5,
        void *VAR_6, size_t *VAR_7)
{
 const posix_acl_xattr_header *VAR_8 =
  (const posix_acl_xattr_header*) VAR_4;
 const posix_acl_xattr_entry *VAR_9, *VAR_10 =
  (const posix_acl_xattr_entry *)(VAR_8+1);
 ext4_acl_header *VAR_11;
 size_t VAR_12;
 char *VAR_13;

 int VAR_14;

 if (!VAR_4)
  return VAR_0;
 if (VAR_5 < sizeof(posix_acl_xattr_header))
  return VAR_1;
 if (VAR_8->a_version != FUNC_1(VAR_3))
  return VAR_0;

 VAR_14 = FUNC_2(VAR_5);
 VAR_11 = VAR_6;
 VAR_11->a_version = FUNC_1(VAR_2);

 if (VAR_14 <= 0)
  return VAR_0;

 VAR_13 = (char *) VAR_6 + sizeof(ext4_acl_header);
 VAR_12 = sizeof(ext4_acl_header);
 for (VAR_9 = VAR_10 + VAR_14; VAR_10 != VAR_9;VAR_10++) {
  ext4_acl_entry *VAR_15 = (ext4_acl_entry*) VAR_13;
  VAR_15->e_tag = FUNC_0(VAR_10->e_tag);
  VAR_15->e_perm = FUNC_0(VAR_10->e_perm);

  switch(VAR_10->e_tag) {
   case 128:
   case 132:
   case 131:
   case 130:
    VAR_13 += sizeof(ext4_acl_entry_short);
    VAR_12 += sizeof(ext4_acl_entry_short);
    break;
   case 129:
   case 133:
    VAR_15->e_id = FUNC_1(VAR_10->e_id);
    VAR_13 += sizeof(ext4_acl_entry);
    VAR_12 += sizeof(ext4_acl_entry);
    break;
  }
 }
 *VAR_7 = VAR_12;
 return 0;
}
