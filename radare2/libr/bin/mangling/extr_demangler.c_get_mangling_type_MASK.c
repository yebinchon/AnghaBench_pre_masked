
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EManglingType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static EManglingType FUNC_0(char *VAR_3)
{
 EManglingType VAR_4 = VAR_2;
 if (VAR_3 == 0) {
  VAR_4 = VAR_1;
  goto get_mangling_type_err;
 }

 switch (*VAR_3) {
 case '.':
 case '?':
  VAR_4 = VAR_0;
  break;
 default:
  break;
 }

get_mangling_type_err:
 return VAR_4;
}
