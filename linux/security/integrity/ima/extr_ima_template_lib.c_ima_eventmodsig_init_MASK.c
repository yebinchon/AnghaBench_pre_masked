
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ima_field_data {int dummy; } ;
struct ima_event_data {int modsig; } ;


 int VAR_0 ;
 int FUNC_0 (int ,void const**,int *) ;
 int FUNC_1 (void const*,int ,int ,struct ima_field_data*) ;

int FUNC_2(struct ima_event_data *VAR_1,
    struct ima_field_data *VAR_2)
{
 const void *VAR_3;
 u32 VAR_4;
 int VAR_5;

 if (!VAR_1->modsig)
  return 0;





 VAR_5 = FUNC_0(VAR_1->modsig, &VAR_3, &VAR_4);
 if (VAR_5)
  return VAR_5;

 return FUNC_1(VAR_3, VAR_4, VAR_0,
          VAR_2);
}
