
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
struct TYPE_2__ {int flags; scalar_t__ is_deleted; } ;
typedef TYPE_1__ phar_entry_info ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(zval *VAR_5, void *VAR_6)
{
 phar_entry_info *VAR_7 = (phar_entry_info *)FUNC_1(VAR_5);

 if (VAR_7->is_deleted) {
  return VAR_2;
 }

 if (!FUNC_0(VAR_3)) {
  if (VAR_7->flags & VAR_0) {
   *(int *) VAR_6 = 0;
  }
 }

 if (!FUNC_0(VAR_4)) {
  if (VAR_7->flags & VAR_1) {
   *(int *) VAR_6 = 0;
  }
 }

 return VAR_2;
}
