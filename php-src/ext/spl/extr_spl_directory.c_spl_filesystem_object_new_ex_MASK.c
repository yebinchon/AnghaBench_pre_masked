
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * handlers; } ;
typedef TYPE_1__ zend_object ;
typedef int zend_class_entry ;
struct TYPE_8__ {TYPE_1__ std; int info_class; int file_class; } ;
typedef TYPE_2__ spl_filesystem_object ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (int,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static zend_object *FUNC_3(zend_class_entry *VAR_3)
{
 spl_filesystem_object *VAR_4;

 VAR_4 = FUNC_1(sizeof(spl_filesystem_object), VAR_3);

 VAR_4->file_class = VAR_1;
 VAR_4->info_class = VAR_0;

 FUNC_2(&VAR_4->std, VAR_3);
 FUNC_0(&VAR_4->std, VAR_3);
 VAR_4->std.handlers = &VAR_2;

 return &VAR_4->std;
}
