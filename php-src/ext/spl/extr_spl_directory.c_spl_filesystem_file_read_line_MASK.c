
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
struct TYPE_6__ {int flags; } ;
typedef TYPE_1__ spl_filesystem_object ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_4(zval * VAR_2, spl_filesystem_object *VAR_3, int VAR_4)
{
 int VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_4);

 while (FUNC_0(VAR_3->flags, VAR_0) && VAR_5 == VAR_1 && FUNC_2(VAR_3)) {
  FUNC_1(VAR_3);
  VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_4);
 }

 return VAR_5;
}
