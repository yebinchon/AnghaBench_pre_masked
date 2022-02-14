
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_card_link {int dummy; } ;
struct pnp_card_device_id {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int,struct pnp_card_link*,struct pnp_card_device_id const*) ;

__attribute__((used)) static int FUNC_1(struct pnp_card_link *VAR_4,
     const struct pnp_card_device_id *VAR_5)
{
 static int VAR_6;
 int VAR_7;

 for ( ; VAR_6 < VAR_1; VAR_6++) {
  if (!VAR_3[VAR_6])
   continue;
  VAR_7 = FUNC_0(VAR_6, VAR_4, VAR_5);
  if (VAR_7 < 0)
   return VAR_7;
  VAR_6++;
  VAR_2++;
  return 0;
 }
 return -VAR_0;
}
