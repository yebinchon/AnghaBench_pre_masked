
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int flags; } ;
typedef TYPE_1__ SERIALIZABLEXACT ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(SERIALIZABLEXACT *VAR_3, SERIALIZABLEXACT *VAR_4)
{
 FUNC_0(VAR_3 != VAR_4);


 FUNC_1(VAR_3, VAR_4);


 if (VAR_3 == VAR_0)
  VAR_4->flags |= VAR_1;
 else if (VAR_4 == VAR_0)
  VAR_3->flags |= VAR_2;
 else
  FUNC_2(VAR_3, VAR_4);
}
