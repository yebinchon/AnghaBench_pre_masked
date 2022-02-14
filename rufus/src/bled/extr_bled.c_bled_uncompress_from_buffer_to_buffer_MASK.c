
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 int FUNC_0 (char*) ;
 char* VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,char*,size_t,int) ;

int64_t FUNC_2(const char* VAR_5, const size_t VAR_6, char* VAR_7, size_t VAR_8, int VAR_9)
{
 int64_t VAR_10;

 if (!VAR_4) {
  FUNC_0("The library has not been initialized");
  return -1;
 }

 if ((VAR_5 == ((void*)0)) || (VAR_7 == ((void*)0))) {
  FUNC_0("Invalid parameter");
  return -1;
 }

 if (VAR_0 != ((void*)0)) {
  FUNC_0("Can not decompress more than one buffer at once");
  return -1;
 }

 VAR_0 = (char*)VAR_5;
 VAR_2 = VAR_6;
 VAR_3 = 0;
 VAR_1 = 0;

 VAR_10 = FUNC_1("", VAR_7, VAR_8, VAR_9);

 VAR_0 = ((void*)0);
 VAR_2 = 0;
 VAR_1 = -1;

 return VAR_10;
}
