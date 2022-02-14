
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static const char *
FUNC_5(Oid VAR_1)
{
 const char *VAR_2;

 if (&FUNC_1)
  VAR_2 = FUNC_1) (VAR_1);
 else
  VAR_2 = ((void*)0);
 if (VAR_2 == ((void*)0))
 {

  VAR_2 = FUNC_2(VAR_1);
  if (VAR_2 == ((void*)0))
   FUNC_0(VAR_0, "cache lookup failed for index %u", VAR_1);
  VAR_2 = FUNC_3(VAR_2);
 }
 return VAR_2;
}
