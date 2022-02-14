
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;
typedef int DH ;


 int * FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int*) ;
 int VAR_3 ;
 int FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 int * FUNC_4 (int *,int *,int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static DH *
FUNC_10(char *VAR_6, bool VAR_7)
{
 FILE *VAR_8;
 DH *VAR_9 = ((void*)0);
 int VAR_10;


 if ((VAR_8 = FUNC_0(VAR_6, "r")) == ((void*)0))
 {
  FUNC_6(VAR_7 ? VAR_4 : VAR_5,
    (FUNC_8(),
     FUNC_9("could not open DH parameters file \"%s\": %m",
      VAR_6)));
  return ((void*)0);
 }

 VAR_9 = FUNC_4(VAR_8, ((void*)0), ((void*)0), ((void*)0));
 FUNC_3(VAR_8);

 if (VAR_9 == ((void*)0))
 {
  FUNC_6(VAR_7 ? VAR_4 : VAR_5,
    (FUNC_7(VAR_3),
     FUNC_9("could not load DH parameters file: %s",
      FUNC_5(FUNC_2()))));
  return ((void*)0);
 }


 if (FUNC_1(VAR_9, &VAR_10) == 0)
 {
  FUNC_6(VAR_7 ? VAR_4 : VAR_5,
    (FUNC_7(VAR_3),
     FUNC_9("invalid DH parameters: %s",
      FUNC_5(FUNC_2()))));
  return ((void*)0);
 }
 if (VAR_10 & VAR_0)
 {
  FUNC_6(VAR_7 ? VAR_4 : VAR_5,
    (FUNC_7(VAR_3),
     FUNC_9("invalid DH parameters: p is not prime")));
  return ((void*)0);
 }
 if ((VAR_10 & VAR_2) &&
  (VAR_10 & VAR_1))
 {
  FUNC_6(VAR_7 ? VAR_4 : VAR_5,
    (FUNC_7(VAR_3),
     FUNC_9("invalid DH parameters: neither suitable generator or safe prime")));
  return ((void*)0);
 }

 return VAR_9;
}
