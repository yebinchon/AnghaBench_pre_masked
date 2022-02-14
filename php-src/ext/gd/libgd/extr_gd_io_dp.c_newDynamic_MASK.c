
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int freeOK; scalar_t__ pos; } ;
typedef TYPE_1__ dynamicPtr ;


 int FUNC_0 (TYPE_1__*,int,void*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static dynamicPtr * FUNC_2 (int VAR_0, void *VAR_1, int VAR_2)
{
 dynamicPtr *VAR_3;
 VAR_3 = (dynamicPtr *) FUNC_1 (sizeof (dynamicPtr));

 FUNC_0 (VAR_3, VAR_0, VAR_1);

 VAR_3->pos = 0;
 VAR_3->freeOK = VAR_2;

 return VAR_3;
}
