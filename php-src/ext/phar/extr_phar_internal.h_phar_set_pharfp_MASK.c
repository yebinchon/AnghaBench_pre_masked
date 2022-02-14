
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int php_stream ;
struct TYPE_4__ {size_t phar_pos; int * fp; int is_persistent; } ;
typedef TYPE_1__ phar_archive_data ;
struct TYPE_5__ {int * fp; } ;


 TYPE_3__* FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_1(phar_archive_data *VAR_1, php_stream *VAR_2)
{
 if (!VAR_1->is_persistent) {
  VAR_1->fp = VAR_2;
  return;
 }

 FUNC_0(VAR_0)[VAR_1->phar_pos].fp = VAR_2;
}
