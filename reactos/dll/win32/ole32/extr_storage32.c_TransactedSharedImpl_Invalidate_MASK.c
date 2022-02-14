
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int reverted; } ;
typedef TYPE_1__ StorageBaseImpl ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(StorageBaseImpl* VAR_1)
{
  if (!VAR_1->reverted)
  {
    FUNC_1("Storage invalidated (stg=%p)\n", VAR_1);

    VAR_1->reverted = VAR_0;

    FUNC_0(VAR_1);
  }
}
