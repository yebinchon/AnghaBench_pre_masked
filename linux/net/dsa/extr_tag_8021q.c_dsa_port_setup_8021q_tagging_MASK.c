
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dsa_switch {int num_ports; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (struct dsa_switch*,int) ;
 int FUNC_2 (struct dsa_switch*,int) ;
 int FUNC_3 (struct dsa_switch*,int) ;
 int FUNC_4 (struct dsa_switch*,int,int,int,int) ;
 int FUNC_5 (struct dsa_switch*,int) ;
 int FUNC_6 (struct dsa_switch*,int) ;

int FUNC_7(struct dsa_switch *VAR_2, int VAR_3, bool VAR_4)
{
 int VAR_5 = FUNC_6(VAR_2, VAR_3);
 u16 VAR_6 = FUNC_2(VAR_2, VAR_3);
 u16 VAR_7 = FUNC_3(VAR_2, VAR_3);
 int VAR_8, VAR_9;




 if (!FUNC_5(VAR_2, VAR_3))
  return 0;






 for (VAR_8 = 0; VAR_8 < VAR_2->num_ports; VAR_8++) {
  u16 VAR_10;

  if (VAR_8 == VAR_5)
   continue;
  else if (VAR_8 == VAR_3)

   VAR_10 = VAR_1 |
    VAR_0;
  else

   VAR_10 = VAR_1;

  VAR_9 = FUNC_4(VAR_2, VAR_8, VAR_6, VAR_10, VAR_4);
  if (VAR_9) {
   FUNC_0(VAR_2->dev, "Failed to apply RX VID %d to port %d: %d\n",
    VAR_6, VAR_3, VAR_9);
   return VAR_9;
  }
 }




 VAR_9 = FUNC_4(VAR_2, VAR_5, VAR_6, 0, VAR_4);
 if (VAR_9) {
  FUNC_0(VAR_2->dev, "Failed to apply RX VID %d to port %d: %d\n",
   VAR_6, VAR_3, VAR_9);
  return VAR_9;
 }


 VAR_9 = FUNC_4(VAR_2, VAR_3, VAR_7, VAR_1,
      VAR_4);
 if (VAR_9) {
  FUNC_0(VAR_2->dev, "Failed to apply TX VID %d on port %d: %d\n",
   VAR_7, VAR_3, VAR_9);
  return VAR_9;
 }
 VAR_9 = FUNC_4(VAR_2, VAR_5, VAR_7, 0, VAR_4);
 if (VAR_9) {
  FUNC_0(VAR_2->dev, "Failed to apply TX VID %d on port %d: %d\n",
   VAR_7, VAR_5, VAR_9);
  return VAR_9;
 }

 if (!VAR_4)
  VAR_9 = FUNC_1(VAR_2, VAR_3);

 return VAR_9;
}
