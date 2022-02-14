
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
typedef int zend_object_iterator ;
struct TYPE_2__ {int fcc; int fci; int count; } ;
typedef TYPE_1__ spl_iterator_apply_info ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(zend_object_iterator *VAR_2, void *VAR_3)
{
 zval VAR_4;
 spl_iterator_apply_info *VAR_5 = (spl_iterator_apply_info*)VAR_3;
 int VAR_6;

 VAR_5->count++;
 FUNC_0(&VAR_5->fci, &VAR_5->fcc, &VAR_4, ((void*)0));
 VAR_6 = FUNC_1(&VAR_4) ? VAR_0 : VAR_1;
 FUNC_2(&VAR_4);
 return VAR_6;
}
