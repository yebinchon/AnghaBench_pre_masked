
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
typedef unsigned int u16 ;
struct mii_bus {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mii_bus*,int ,unsigned int,int ,int) ;
 int FUNC_1 (struct mii_bus*,int ,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_8 ;

int FUNC_4(struct mii_bus *VAR_9, unsigned VAR_10,
         unsigned VAR_11, u16 VAR_12)
{
 u32 VAR_13;
 int VAR_14;

 if (VAR_10 >= VAR_5)
  return -VAR_7;

 FUNC_2(&VAR_8);
 VAR_13 = (VAR_10 << VAR_3) |
     (VAR_11 << VAR_4) |
     VAR_2 |
     VAR_0 |
     VAR_1 |
     VAR_12;

 FUNC_1(VAR_9, VAR_6, VAR_13);
 VAR_14 = FUNC_0(VAR_9, VAR_6,
      VAR_0, 0, 5);
 FUNC_3(&VAR_8);

 return VAR_14;
}
