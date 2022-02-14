
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ end; scalar_t__ start; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (TYPE_1__*) ;

size_t FUNC_3(void)
{
 size_t VAR_2 = 0;

 FUNC_0(&VAR_1);
 if (VAR_0.end != VAR_0.start)
  VAR_2 = FUNC_2(&VAR_0);
 FUNC_1(&VAR_1);
 return VAR_2;
}
