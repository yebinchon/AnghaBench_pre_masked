
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * gss_cred_id_t ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ,int ,int ,int ,int **,int *,int *) ;

bool
FUNC_1(gss_cred_id_t *VAR_5)
{
 OM_uint32 VAR_6,
    VAR_7;
 gss_cred_id_t VAR_8 = VAR_1;

 VAR_6 = FUNC_0(&VAR_7, VAR_2, 0, VAR_3,
        VAR_0, &VAR_8, ((void*)0), ((void*)0));
 if (VAR_6 != VAR_4)
 {
  *VAR_5 = ((void*)0);
  return 0;
 }
 *VAR_5 = VAR_8;
 return 1;
}
