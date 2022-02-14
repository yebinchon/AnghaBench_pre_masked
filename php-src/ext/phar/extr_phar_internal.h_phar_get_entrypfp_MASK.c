
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int php_stream ;
struct TYPE_6__ {TYPE_1__* phar; int is_persistent; } ;
typedef TYPE_2__ phar_entry_info ;
struct TYPE_7__ {int * fp; } ;
struct TYPE_5__ {size_t phar_pos; int * fp; } ;


 TYPE_4__* FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static inline php_stream *FUNC_1(phar_entry_info *VAR_1)
{
 if (!VAR_1->is_persistent) {
  return VAR_1->phar->fp;
 }
 return FUNC_0(VAR_0)[VAR_1->phar->phar_pos].fp;
}
