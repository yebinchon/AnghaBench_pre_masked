
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* zend_off_t ;
struct TYPE_7__ {int fp_type; size_t manifest_pos; TYPE_1__* phar; void* offset; int is_persistent; } ;
typedef TYPE_2__ phar_entry_info ;
struct TYPE_8__ {int fp_type; void* offset; } ;
typedef TYPE_3__ phar_entry_fp_info ;
typedef enum phar_fp_type { ____Placeholder_phar_fp_type } phar_fp_type ;
struct TYPE_9__ {TYPE_3__* manifest; } ;
struct TYPE_6__ {size_t phar_pos; } ;


 TYPE_5__* FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_1(phar_entry_info *VAR_1, enum phar_fp_type VAR_2, zend_off_t VAR_3)
{
 phar_entry_fp_info *VAR_4;

 if (!VAR_1->is_persistent) {
  VAR_1->fp_type = VAR_2;
  VAR_1->offset = VAR_3;
  return;
 }
 VAR_4 = &(FUNC_0(VAR_0)[VAR_1->phar->phar_pos].manifest[VAR_1->manifest_pos]);
 VAR_4->fp_type = VAR_2;
 VAR_4->offset = VAR_3;
}
