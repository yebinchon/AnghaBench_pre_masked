
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32 ;
struct TYPE_5__ {scalar_t__* fpRelId; } ;
typedef scalar_t__ Oid ;
typedef int LOCKMODE ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,size_t,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,size_t) ;
 int FUNC_3 (TYPE_1__*,size_t,int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static bool
FUNC_4(Oid VAR_3, LOCKMODE VAR_4)
{
 uint32 VAR_5;
 uint32 VAR_6 = VAR_0;


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
 {
  if (FUNC_2(VAR_2, VAR_5) == 0)
   VAR_6 = VAR_5;
  else if (VAR_2->fpRelId[VAR_5] == VAR_3)
  {
   FUNC_0(!FUNC_1(VAR_2, VAR_5, VAR_4));
   FUNC_3(VAR_2, VAR_5, VAR_4);
   return 1;
  }
 }


 if (VAR_6 < VAR_0)
 {
  VAR_2->fpRelId[VAR_6] = VAR_3;
  FUNC_3(VAR_2, VAR_6, VAR_4);
  ++VAR_1;
  return 1;
 }


 return 0;
}
