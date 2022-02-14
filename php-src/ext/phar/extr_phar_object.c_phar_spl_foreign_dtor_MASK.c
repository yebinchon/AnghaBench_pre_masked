
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * oth; } ;
typedef TYPE_1__ spl_filesystem_object ;
struct TYPE_6__ {int is_persistent; } ;
typedef TYPE_2__ phar_archive_data ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(spl_filesystem_object *VAR_0)
{
 phar_archive_data *VAR_1 = (phar_archive_data *) VAR_0->oth;

 if (!VAR_1->is_persistent) {
  FUNC_0(VAR_1);
 }

 VAR_0->oth = ((void*)0);
}
