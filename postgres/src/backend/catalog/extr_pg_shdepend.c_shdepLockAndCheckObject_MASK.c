
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;

 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int) ;
 char* FUNC_7 (int) ;
 char* FUNC_8 (int) ;
 int FUNC_9 (char*) ;

void
FUNC_10(Oid VAR_4, Oid VAR_5)
{

 FUNC_0(VAR_4, VAR_5, 0, VAR_1);

 switch (VAR_4)
 {
  case 130:
   if (!FUNC_2(VAR_0, FUNC_1(VAR_5)))
    FUNC_4(VAR_3,
      (FUNC_5(VAR_2),
       FUNC_6("role %u was concurrently dropped",
        VAR_5)));
   break;
  case 129:
   {

    char *VAR_6 = FUNC_7(VAR_5);

    if (VAR_6 == ((void*)0))
     FUNC_4(VAR_3,
       (FUNC_5(VAR_2),
        FUNC_6("database %u was concurrently dropped",
         VAR_5)));
    FUNC_9(VAR_6);
    break;
   }


  default:
   FUNC_3(VAR_3, "unrecognized shared classId: %u", VAR_4);
 }
}
