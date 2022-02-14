
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int fp_type; size_t manifest_pos; TYPE_2__* phar; int is_persistent; } ;
typedef TYPE_3__ phar_entry_info ;
typedef enum phar_fp_type { ____Placeholder_phar_fp_type } phar_fp_type ;
struct TYPE_9__ {TYPE_1__* manifest; } ;
struct TYPE_7__ {size_t phar_pos; } ;
struct TYPE_6__ {int fp_type; } ;


 TYPE_5__* FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static inline enum phar_fp_type FUNC_1(phar_entry_info *VAR_1)
{
 if (!VAR_1->is_persistent) {
  return VAR_1->fp_type;
 }
 return FUNC_0(VAR_0)[VAR_1->phar->phar_pos].manifest[VAR_1->manifest_pos].fp_type;
}
