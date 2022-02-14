
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swig_type_info ;
typedef int PyObject ;


 int FUNC_0 (int *,void*,int *,int ) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,int,char const*,char*,char const*) ;

bool FUNC_4(const char *VAR_0, PyObject *VAR_1, void *VAR_2,
     const char *VAR_3, const char *VAR_4, int VAR_5)
{
 swig_type_info *VAR_6 = FUNC_2(VAR_0);
 if (VAR_6 == ((void*)0)) {
  FUNC_3("%s:%d: SWIG could not find type: %s%s%s", VAR_4, VAR_5,
       VAR_3 ? VAR_3 : "", VAR_3 ? "::" : "", VAR_0);
  return 0;
 }

 int VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_6, 0);
 if (!FUNC_1(VAR_7)) {
  FUNC_3("%s:%d: SWIG failed to convert python object to obs "
       "object: %s%s%s",
       VAR_4, VAR_5, VAR_3 ? VAR_3 : "", VAR_3 ? "::" : "", VAR_0);
  return 0;
 }

 return 1;
}
