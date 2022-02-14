
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlChar ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (char*,int) ;
 char* FUNC_2 (char*,char) ;

int FUNC_3(const xmlChar *VAR_1, char **VAR_2, char **VAR_3)
{
 char *VAR_4 = FUNC_2((char*)VAR_1, ':');

 if (VAR_4 != ((void*)0) && VAR_4 != (char*)VAR_1) {
  (*VAR_3) = FUNC_1((char*)VAR_1, VAR_4 - (char*)VAR_1);
  (*VAR_2) = FUNC_0(++VAR_4);
 } else {
  (*VAR_2) = FUNC_0((char*)VAR_1);
  (*VAR_3) = ((void*)0);
 }

 return VAR_0;
}
