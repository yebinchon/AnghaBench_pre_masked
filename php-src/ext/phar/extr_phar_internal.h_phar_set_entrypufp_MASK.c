
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int php_stream ;
struct TYPE_6__ {TYPE_1__* phar; } ;
typedef TYPE_2__ phar_entry_info ;
struct TYPE_7__ {int * ufp; } ;
struct TYPE_5__ {size_t phar_pos; int * ufp; int is_persistent; } ;


 TYPE_4__* FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_1(phar_entry_info *VAR_1, php_stream *VAR_2)
{
 if (!VAR_1->phar->is_persistent) {
  VAR_1->phar->ufp = VAR_2;
  return;
 }

 FUNC_0(VAR_0)[VAR_1->phar->phar_pos].ufp = VAR_2;
}
