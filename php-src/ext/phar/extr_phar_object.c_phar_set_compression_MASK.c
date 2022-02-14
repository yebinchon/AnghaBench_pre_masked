
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
typedef int uint32_t ;
struct TYPE_2__ {int is_modified; int flags; int old_flags; scalar_t__ is_deleted; } ;
typedef TYPE_1__ phar_entry_info ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(zval *VAR_2, void *VAR_3)
{
 phar_entry_info *VAR_4 = (phar_entry_info *)FUNC_0(VAR_2);
 uint32_t VAR_5 = *(uint32_t *)VAR_3;

 if (VAR_4->is_deleted) {
  return VAR_1;
 }

 VAR_4->old_flags = VAR_4->flags;
 VAR_4->flags &= ~VAR_0;
 VAR_4->flags |= VAR_5;
 VAR_4->is_modified = 1;
 return VAR_1;
}
