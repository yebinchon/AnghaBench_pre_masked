
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;
typedef int ADDRESS ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static zend_string* FUNC_5(ADDRESS *VAR_1)
{
 char VAR_2[VAR_0];

 if (FUNC_0(VAR_1) >= VAR_0) {
  FUNC_4(((void*)0), "Address buffer overflow");
  return ((void*)0);
 }
 VAR_2[0] = 0;
 FUNC_1(VAR_2, VAR_1);
 return FUNC_3(VAR_2, FUNC_2(VAR_2), 0);
}
