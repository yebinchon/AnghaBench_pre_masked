
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,unsigned long long*) ;
 int* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int* VAR_10 ;
 int* VAR_11 ;
 int VAR_12 ;
 int* VAR_13 ;
 int VAR_14 ;
 int* VAR_15 ;
 int* VAR_16 ;
 int* VAR_17 ;

int FUNC_2(unsigned int VAR_18, unsigned int VAR_19)
{
 unsigned long long VAR_20;
 unsigned int VAR_21;
 int *VAR_22;

 if (!VAR_6)
  return 0;

 if (VAR_18 != 6)
  return 0;

 VAR_5 = FUNC_0(VAR_18, VAR_19);

 switch (VAR_19) {
 case 134:
 case 133:
  VAR_22 = VAR_11;
  break;
 case 132:
 case 131:
 case 136:
 case 135:
  VAR_22 = VAR_17;
  VAR_9 = 1;
  break;
 case 140:
 case 139:
 case 137:
 case 138:
 case 144:
 case 143:
 case 142:
 case 130:
 case 141:
  VAR_22 = VAR_10;
  VAR_9 = 1;
  break;
 case 129:
  VAR_22 = VAR_15;
  VAR_9 = 1;
  break;
 case 146:
  VAR_12 = 1;
 case 145:
  VAR_22 = VAR_16;
  break;
 case 150:
  VAR_22 = VAR_2;
  VAR_12 = 1;
  break;
 case 128:
  VAR_22 = VAR_13;
  break;
 case 149:
 case 147:
 case 148:
  VAR_22 = VAR_7;
  break;
 default:
  return 0;
 }
 FUNC_1(VAR_3, VAR_0, &VAR_20);
 VAR_14 = VAR_22[VAR_20 & 0xF];

 FUNC_1(VAR_3, VAR_1, &VAR_20);
 VAR_21 = (VAR_20 >> 8) & 0xFF;

 VAR_4 = VAR_21 * VAR_5 * 1000000;
 VAR_8 = 1;
 return 1;
}
