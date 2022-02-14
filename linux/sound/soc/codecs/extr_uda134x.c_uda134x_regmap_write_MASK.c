
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct uda134x_platform_data {int l3; } ;


 int VAR_0 ;




 int VAR_1 ;

 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;


 int VAR_5 ;
 int FUNC_0 (int *,int,int*,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_6, unsigned int VAR_7,
 unsigned int VAR_8)
{
 struct uda134x_platform_data *VAR_9 = VAR_6;
 int VAR_10;
 u8 VAR_11;
 u8 VAR_12 = VAR_8;

 switch (VAR_7) {
 case 129:
 case 128:
  VAR_11 = VAR_5;
  VAR_12 |= (VAR_7 - 129) << 7;
  break;
 case 134:
 case 133:
 case 132:
 case 131:
  VAR_11 = VAR_1;
  VAR_12 |= (VAR_7 - 134) << 6;
  break;
 case 130:
  VAR_11 = VAR_2;
  break;
 default:

  VAR_11 = (VAR_7 | VAR_3);

  VAR_10 = FUNC_0(&VAR_9->l3,
          VAR_1, &VAR_11, 1);
  if (VAR_10 != 1)
   return -VAR_0;

  VAR_11 = VAR_1;
  VAR_12 = (VAR_8 | VAR_4);
  break;
 }

 VAR_10 = FUNC_0(&VAR_9->l3,
         VAR_11, &VAR_12, 1);
 if (VAR_10 != 1)
  return -VAR_0;

 return 0;
}
