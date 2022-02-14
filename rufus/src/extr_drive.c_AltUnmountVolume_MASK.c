
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char const*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char const*,...) ;

BOOL FUNC_3(const char* VAR_4, BOOL VAR_5)
{
 if (VAR_4 == ((void*)0))
  return VAR_2;
 if (!FUNC_0(VAR_1 | VAR_0, VAR_4, ((void*)0))) {
  FUNC_2("Could not unmount '%s': %s", VAR_4, FUNC_1());
  return VAR_2;
 }
 FUNC_2("Successfully unmounted '%s'", VAR_4);
 return VAR_3;
}
