
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ce_flags; scalar_t__ type; size_t num_interfaces; struct TYPE_4__** interfaces; struct TYPE_4__* parent; } ;
typedef TYPE_1__ zend_class_entry ;
typedef size_t uint32_t ;
typedef int swap_func_t ;
typedef int compare_func_t ;
struct TYPE_5__ {int val; } ;
typedef TYPE_2__ Bucket ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_2, size_t VAR_3, size_t VAR_4, compare_func_t VAR_5, swap_func_t VAR_6)
{
 Bucket *VAR_7 = VAR_2;
 Bucket *VAR_8;
 Bucket *VAR_9 = VAR_7 + VAR_3;
 Bucket VAR_10;
 zend_class_entry *VAR_11, *VAR_12;

 while (VAR_7 < VAR_9) {
try_again:
  VAR_11 = (zend_class_entry*)FUNC_0(VAR_7->val);
  if (VAR_11->parent && (VAR_11->ce_flags & VAR_0)) {
   VAR_12 = VAR_11->parent;
   if (VAR_12->type == VAR_1) {
    VAR_8 = VAR_7 + 1;
    while (VAR_8 < VAR_9) {
     if (VAR_12 == FUNC_0(VAR_8->val)) {
      VAR_10 = *VAR_7;
      *VAR_7 = *VAR_8;
      *VAR_8 = VAR_10;
      goto try_again;
     }
     VAR_8++;
    }
   }
  }
  if (VAR_11->num_interfaces && (VAR_11->ce_flags & VAR_0)) {
   uint32_t VAR_13 = 0;
   for (VAR_13 = 0; VAR_13 < VAR_11->num_interfaces; VAR_13++) {
    VAR_12 = VAR_11->interfaces[VAR_13];
    if (VAR_12->type == VAR_1) {
     VAR_8 = VAR_7 + 1;
     while (VAR_8 < VAR_9) {
      if (VAR_12 == FUNC_0(VAR_8->val)) {
       VAR_10 = *VAR_7;
       *VAR_7 = *VAR_8;
       *VAR_8 = VAR_10;
       goto try_again;
      }
      VAR_8++;
     }
    }
   }
  }
  VAR_7++;
 }
}
