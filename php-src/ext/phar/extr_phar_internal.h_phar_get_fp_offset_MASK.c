
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ zend_off_t ;
struct TYPE_8__ {size_t manifest_pos; TYPE_2__* phar; scalar_t__ offset; int is_persistent; } ;
typedef TYPE_3__ phar_entry_info ;
struct TYPE_9__ {TYPE_1__* manifest; } ;
struct TYPE_7__ {size_t phar_pos; } ;
struct TYPE_6__ {scalar_t__ fp_type; scalar_t__ offset; } ;


 scalar_t__ VAR_0 ;
 TYPE_5__* FUNC_0 (int ) ;
 int VAR_1 ;

__attribute__((used)) static inline zend_off_t FUNC_1(phar_entry_info *VAR_2)
{
 if (!VAR_2->is_persistent) {
  return VAR_2->offset;
 }
 if (FUNC_0(VAR_1)[VAR_2->phar->phar_pos].manifest[VAR_2->manifest_pos].fp_type == VAR_0) {
  if (!FUNC_0(VAR_1)[VAR_2->phar->phar_pos].manifest[VAR_2->manifest_pos].offset) {
   FUNC_0(VAR_1)[VAR_2->phar->phar_pos].manifest[VAR_2->manifest_pos].offset = VAR_2->offset;
  }
 }
 return FUNC_0(VAR_1)[VAR_2->phar->phar_pos].manifest[VAR_2->manifest_pos].offset;
}
