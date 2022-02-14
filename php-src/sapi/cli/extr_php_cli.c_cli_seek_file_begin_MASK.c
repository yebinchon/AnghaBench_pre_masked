
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_file_handle ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,int *,char*) ;

__attribute__((used)) static int FUNC_3(zend_file_handle *VAR_2, char *VAR_3)
{
 FILE *VAR_4 = FUNC_0(VAR_3, "rb");
 if (!VAR_4) {
  FUNC_1("Could not open input file: %s\n", VAR_3);
  return VAR_0;
 }

 FUNC_2(VAR_2, VAR_4, VAR_3);
 return VAR_1;
}
