
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FormData_pg_attribute ;
typedef int AttrNumber ;


 int VAR_0 ;
 int const** VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (int const**) ;

const FormData_pg_attribute *
FUNC_2(AttrNumber VAR_2)
{
 if (VAR_2 >= 0 || VAR_2 < -(int) FUNC_1(VAR_1))
  FUNC_0(VAR_0, "invalid system attribute number %d", VAR_2);
 return VAR_1[-VAR_2 - 1];
}
