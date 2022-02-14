
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpg123_handle ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(mpg123_handle *VAR_1, unsigned int *VAR_2, unsigned int *VAR_3)
{
 unsigned int *VAR_4;
 for(VAR_4=VAR_2; VAR_4 != VAR_3; ++VAR_4)
 if(*VAR_4 == 15)
 {
  if(VAR_0) FUNC_0("Illegal bit allocation value.");
  return -1;
 }

 return 0;
}
