
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t st_size; int st_mode; } ;
typedef TYPE_1__ zend_stat_t ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*) ;

__attribute__((used)) static size_t FUNC_3(void *VAR_0)
{
 zend_stat_t VAR_1;
 if (VAR_0 && FUNC_2(FUNC_1((FILE*)VAR_0), &VAR_1) == 0) {





  return VAR_1.st_size;
 }
 return -1;
}
