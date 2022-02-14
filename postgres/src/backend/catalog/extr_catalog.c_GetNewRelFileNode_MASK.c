
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ spcNode; void* relNode; void* dbNode; } ;
struct TYPE_5__ {TYPE_1__ node; int backend; } ;
typedef scalar_t__ Relation ;
typedef TYPE_2__ RelFileNodeBackend ;
typedef void* Oid ;
typedef int BackendId ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_3 () ;
 void* FUNC_4 (scalar_t__,int ,int ) ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;



 scalar_t__ FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,char*,char) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (TYPE_2__,int ) ;

Oid
FUNC_9(Oid VAR_11, Relation VAR_12, char VAR_13)
{
 RelFileNodeBackend VAR_14;
 char *VAR_15;
 bool VAR_16;
 BackendId VAR_17;






 FUNC_0(!VAR_7);

 switch (VAR_13)
 {
  case 129:
   VAR_17 = FUNC_1();
   break;
  case 128:
  case 130:
   VAR_17 = VAR_5;
   break;
  default:
   FUNC_6(VAR_2, "invalid relpersistence: %c", VAR_13);
   return VAR_6;
 }


 VAR_14.node.spcNode = VAR_11 ? VAR_11 : VAR_10;
 VAR_14.node.dbNode = (VAR_14.node.spcNode == VAR_4) ? VAR_6 : VAR_9;






 VAR_14.backend = VAR_17;

 do
 {
  FUNC_2();


  if (VAR_12)
   VAR_14.node.relNode = FUNC_4(VAR_12, VAR_1,
             VAR_0);
  else
   VAR_14.node.relNode = FUNC_3();


  VAR_15 = FUNC_8(VAR_14, VAR_8);

  if (FUNC_5(VAR_15, VAR_3) == 0)
  {

   VAR_16 = 1;
  }
  else
  {







   VAR_16 = 0;
  }

  FUNC_7(VAR_15);
 } while (VAR_16);

 return VAR_14.node.relNode;
}
