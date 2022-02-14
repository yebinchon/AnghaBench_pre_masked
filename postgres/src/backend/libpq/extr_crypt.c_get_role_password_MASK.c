
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TimestampTz ;
typedef int HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ,int*) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (int ,char const*) ;

char *
FUNC_10(const char *VAR_3, char **VAR_4)
{
 TimestampTz VAR_5 = 0;
 HeapTuple VAR_6;
 Datum VAR_7;
 bool VAR_8;
 char *VAR_9;


 VAR_6 = FUNC_5(VAR_0, FUNC_3(VAR_3));
 if (!FUNC_2(VAR_6))
 {
  *VAR_4 = FUNC_9(FUNC_8("Role \"%s\" does not exist."),
         VAR_3);
  return ((void*)0);
 }

 VAR_7 = FUNC_6(VAR_0, VAR_6,
       VAR_1, &VAR_8);
 if (VAR_8)
 {
  FUNC_4(VAR_6);
  *VAR_4 = FUNC_9(FUNC_8("User \"%s\" has no password assigned."),
         VAR_3);
  return ((void*)0);
 }
 VAR_9 = FUNC_7(VAR_7);

 VAR_7 = FUNC_6(VAR_0, VAR_6,
       VAR_2, &VAR_8);
 if (!VAR_8)
  VAR_5 = FUNC_0(VAR_7);

 FUNC_4(VAR_6);




 if (!VAR_8 && VAR_5 < FUNC_1())
 {
  *VAR_4 = FUNC_9(FUNC_8("User \"%s\" has an expired password."),
         VAR_3);
  return ((void*)0);
 }

 return VAR_9;
}
