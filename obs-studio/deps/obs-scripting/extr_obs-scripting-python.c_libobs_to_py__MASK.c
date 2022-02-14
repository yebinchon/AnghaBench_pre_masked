
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swig_type_info ;
typedef int PyObject ;


 int * VAR_0 ;
 int * FUNC_0 (void*,int *,int) ;
 int * FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*,int,char const*,char*,char const*) ;

bool FUNC_3(const char *VAR_1, void *VAR_2, bool VAR_3,
     PyObject **VAR_4, const char *VAR_5, const char *VAR_6,
     int VAR_7)
{
 swig_type_info *VAR_8 = FUNC_1(VAR_1);
 if (VAR_8 == ((void*)0)) {
  FUNC_2("%s:%d: SWIG could not find type: %s%s%s", VAR_6, VAR_7,
       VAR_5 ? VAR_5 : "", VAR_5 ? "::" : "", VAR_1);
  return 0;
 }

 *VAR_4 = FUNC_0(VAR_2, VAR_8, (int)VAR_3);
 if (*VAR_4 == VAR_0) {
  FUNC_2("%s:%d: SWIG failed to convert obs object to python "
       "object: %s%s%s",
       VAR_6, VAR_7, VAR_5 ? VAR_5 : "", VAR_5 ? "::" : "", VAR_1);
  return 0;
 }

 return 1;
}
