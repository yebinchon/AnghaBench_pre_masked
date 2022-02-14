
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int text ;
struct TYPE_2__ {int attnum; scalar_t__ attisdropped; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_attribute ;
typedef int AttrNumber ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,char*,char*) ;
 char* FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (int *) ;

__attribute__((used)) static AttrNumber
FUNC_12(Oid VAR_4, text *VAR_5)
{
 char *VAR_6;
 HeapTuple VAR_7;
 AttrNumber VAR_8;

 VAR_6 = FUNC_11(VAR_5);






 VAR_7 = FUNC_5(VAR_0,
          FUNC_3(VAR_4),
          FUNC_0(VAR_6));
 if (FUNC_2(VAR_7))
 {
  Form_pg_attribute VAR_9;

  VAR_9 = (Form_pg_attribute) FUNC_1(VAR_7);

  if (VAR_9->attisdropped)
   VAR_8 = VAR_3;
  else
   VAR_8 = VAR_9->attnum;
  FUNC_4(VAR_7);
 }
 else
 {
  char *VAR_10 = FUNC_9(VAR_4);






  if (VAR_10 != ((void*)0))
  {

   FUNC_6(VAR_2,
     (FUNC_7(VAR_1),
      FUNC_8("column \"%s\" of relation \"%s\" does not exist",
       VAR_6, VAR_10)));
  }

  VAR_8 = VAR_3;
 }

 FUNC_10(VAR_6);
 return VAR_8;
}
