
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int user_ns; } ;
struct ifreq {scalar_t__* ifr_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;

 unsigned int VAR_5 ;







 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net*,struct ifreq*) ;
 int FUNC_2 (struct net*,struct ifreq*) ;
 int FUNC_3 (struct net*,struct ifreq*,unsigned int) ;
 int FUNC_4 (struct net*,struct ifreq*,unsigned int) ;
 int FUNC_5 (struct net*,scalar_t__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 char* FUNC_11 (scalar_t__*,char) ;

int FUNC_12(struct net *VAR_8, unsigned int VAR_9, struct ifreq *VAR_10, bool *VAR_11)
{
 int VAR_12;
 char *VAR_13;

 if (VAR_11)
  *VAR_11 = 1;
 if (VAR_9 == VAR_6)
  return FUNC_2(VAR_8, VAR_10);

 VAR_10->ifr_name[VAR_3-1] = 0;

 VAR_13 = FUNC_11(VAR_10->ifr_name, ':');
 if (VAR_13)
  *VAR_13 = 0;





 switch (VAR_9) {






 case 151:
 case 146:
 case 145:
 case 150:
 case 144:
 case 148:
 case 149:
 case 143:
  FUNC_5(VAR_8, VAR_10->ifr_name);
  FUNC_7();
  VAR_12 = FUNC_4(VAR_8, VAR_10, VAR_9);
  FUNC_8();
  if (VAR_13)
   *VAR_13 = ':';
  return VAR_12;

 case 152:
  FUNC_5(VAR_8, VAR_10->ifr_name);
  FUNC_9();
  VAR_12 = FUNC_1(VAR_8, VAR_10);
  FUNC_10();
  if (VAR_13)
   *VAR_13 = ':';
  return VAR_12;







 case 142:
 case 141:
 case 131:
  FUNC_5(VAR_8, VAR_10->ifr_name);
  if (!FUNC_6(VAR_8->user_ns, VAR_0))
   return -VAR_2;
  FUNC_9();
  VAR_12 = FUNC_3(VAR_8, VAR_10, VAR_9);
  FUNC_10();
  if (VAR_13)
   *VAR_13 = ':';
  return VAR_12;







 case 135:
 case 129:
  if (!FUNC_0(VAR_0))
   return -VAR_2;







 case 139:
 case 133:
 case 132:
 case 138:
 case 130:
 case 162:
 case 153:
 case 137:
 case 128:
 case 160:
 case 158:
 case 157:
 case 161:
 case 155:
 case 154:
 case 140:
  if (!FUNC_6(VAR_8->user_ns, VAR_0))
   return -VAR_2;

 case 156:
 case 159:
  FUNC_5(VAR_8, VAR_10->ifr_name);
  FUNC_9();
  VAR_12 = FUNC_3(VAR_8, VAR_10, VAR_9);
  FUNC_10();
  if (VAR_11)
   *VAR_11 = 0;
  return VAR_12;

 case 147:


 case 134:


 case 136:
  return -VAR_1;




 default:
  if (VAR_9 == VAR_7 ||
      VAR_9 == VAR_5 ||
      (VAR_9 >= VAR_4 &&
       VAR_9 <= VAR_4 + 15)) {
   FUNC_5(VAR_8, VAR_10->ifr_name);
   FUNC_9();
   VAR_12 = FUNC_3(VAR_8, VAR_10, VAR_9);
   FUNC_10();
   return VAR_12;
  }
  return -VAR_1;
 }
}
