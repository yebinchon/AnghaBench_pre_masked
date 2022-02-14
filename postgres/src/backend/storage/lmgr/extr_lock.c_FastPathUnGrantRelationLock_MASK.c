
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
 scalar_t__ FUNC_1 (TYPE_1__*,size_t,int ) ;
 int FUNC_2 (TYPE_1__*,size_t,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,size_t) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static bool
FUNC_4(Oid VAR_3, LOCKMODE VAR_4)
{
 uint32 VAR_5;
 bool VAR_6 = 0;

 VAR_1 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
 {
  if (VAR_2->fpRelId[VAR_5] == VAR_3
   && FUNC_1(VAR_2, VAR_5, VAR_4))
  {
   FUNC_0(!VAR_6);
   FUNC_2(VAR_2, VAR_5, VAR_4);
   VAR_6 = 1;

  }
  if (FUNC_3(VAR_2, VAR_5) != 0)
   ++VAR_1;
 }
 return VAR_6;
}
