
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct ima_field_data {int dummy; } ;
struct ima_event_data {int modsig; scalar_t__ violation; } ;
typedef enum hash_algo { ____Placeholder_hash_algo } hash_algo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*,scalar_t__,int,struct ima_field_data*) ;
 int FUNC_1 (int ,int*,int const**,scalar_t__*) ;

int FUNC_2(struct ima_event_data *VAR_3,
    struct ima_field_data *VAR_4)
{
 enum hash_algo VAR_5;
 const u8 *VAR_6;
 u32 VAR_7;

 if (!VAR_3->modsig)
  return 0;

 if (VAR_3->violation) {

  VAR_5 = VAR_1;
  VAR_6 = ((void*)0);
  VAR_7 = 0;
 } else {
  int VAR_8;

  VAR_8 = FUNC_1(VAR_3->modsig, &VAR_5,
        &VAR_6, &VAR_7);
  if (VAR_8)
   return VAR_8;
  else if (VAR_5 == VAR_2 || VAR_7 == 0)

   return -VAR_0;
 }

 return FUNC_0(VAR_6, VAR_7,
        VAR_5, VAR_4);
}
