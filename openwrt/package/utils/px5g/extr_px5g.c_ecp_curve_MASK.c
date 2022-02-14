
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mbedtls_ecp_group_id ;
struct TYPE_3__ {int grp_id; } ;
typedef TYPE_1__ mbedtls_ecp_curve_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static mbedtls_ecp_group_id FUNC_2(const char *VAR_4)
{
 const mbedtls_ecp_curve_info *VAR_5;

 if (!FUNC_1(VAR_4, "P-256"))
  return VAR_1;
 else if (!FUNC_1(VAR_4, "P-384"))
  return VAR_2;
 else if (!FUNC_1(VAR_4, "P-521"))
  return VAR_3;
 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5 == ((void*)0))
  return VAR_0;
 else
  return VAR_5->grp_id;
}
