
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nextOid; scalar_t__ oidCount; } ;
typedef scalar_t__ Oid ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 () ;
 TYPE_1__* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,char*) ;

Oid
FUNC_5(void)
{
 Oid VAR_8;


 if (FUNC_2())
  FUNC_4(VAR_0, "cannot assign OIDs during recovery");

 FUNC_0(VAR_5, VAR_4);
 if (VAR_6->nextOid < ((Oid) VAR_2))
 {
  if (VAR_3)
  {

   VAR_6->nextOid = VAR_2;
   VAR_6->oidCount = 0;
  }
  else
  {

   if (VAR_6->nextOid < ((Oid) VAR_1))
   {

    VAR_6->nextOid = VAR_2;
    VAR_6->oidCount = 0;
   }
  }
 }


 if (VAR_6->oidCount == 0)
 {
  FUNC_3(VAR_6->nextOid + VAR_7);
  VAR_6->oidCount = VAR_7;
 }

 VAR_8 = VAR_6->nextOid;

 (VAR_6->nextOid)++;
 (VAR_6->oidCount)--;

 FUNC_1(VAR_5);

 return VAR_8;
}
