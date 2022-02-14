
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * fp; } ;
struct TYPE_5__ {char* filename; int * opened_path; TYPE_1__ handle; int type; } ;
typedef TYPE_2__ zend_file_handle ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*) ;

int FUNC_1(char *VAR_1)
{
 zend_file_handle VAR_2;
 VAR_2.type = VAR_0;
 VAR_2.filename = VAR_1;
 VAR_2.handle.fp = ((void*)0);
 VAR_2.opened_path = ((void*)0);

 return FUNC_0(&VAR_2, VAR_1);
}
