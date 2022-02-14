
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,char*,int) ;

uint8_t * FUNC_2(uint8_t * VAR_1, uint8_t * VAR_2, uint8_t * VAR_3)
{
 int VAR_4, VAR_5;
 char VAR_6[VAR_0];

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_6, VAR_0);

 if (VAR_4 == -1) return 0;

 VAR_2 += VAR_4;
 VAR_5 = FUNC_0(VAR_2);
 VAR_2 += 2;
 VAR_2 += 2;
 VAR_2 += 4;
 VAR_2 += 2;


 switch (VAR_5)
 {
 case 138:

  VAR_3[0] = *VAR_2++;
  VAR_3[1] = *VAR_2++;
  VAR_3[2] = *VAR_2++;
  VAR_3[3] = *VAR_2++;
  break;
 case 137:
 case 135:
 case 134:
 case 133:
 case 131:
 case 130:


  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_6, VAR_0);
  if (VAR_4 == -1) return 0;

  VAR_2 += VAR_4;
  break;
 case 136:
  VAR_4 = *VAR_2++;
  VAR_2 += VAR_4;

  VAR_4 = *VAR_2++;
  VAR_2 += VAR_4;
  break;
 case 132:
  VAR_2 += 2;

  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_6, VAR_0);
  if (VAR_4 == -1) return 0;

  VAR_2 += VAR_4;
  break;
 case 129:

  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_6, VAR_0);
  if (VAR_4 == -1) return 0;

  VAR_2 += VAR_4;


  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_6, VAR_0);
  if (VAR_4 == -1) return 0;

  VAR_2 += VAR_4;

  VAR_2 += 4;
  VAR_2 += 4;
  VAR_2 += 4;
  VAR_2 += 4;
  VAR_2 += 4;
  break;
 case 128:

  break;
 default:

  break;
 }

 return VAR_2;
}
