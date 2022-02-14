
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gss_api_mech {int gm_name; int gm_list; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct gss_api_mech*) ;
 int FUNC_2 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct gss_api_mech *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  return VAR_3;
 FUNC_3(&VAR_1);
 FUNC_2(&VAR_2->gm_list, &VAR_0);
 FUNC_4(&VAR_1);
 FUNC_0("RPC:       registered gss mechanism %s\n", VAR_2->gm_name);
 return 0;
}
