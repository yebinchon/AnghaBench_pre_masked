
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum action { ____Placeholder_action } action ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(enum action VAR_4)
{
 int VAR_5;

 switch (VAR_4) {
 case 131:
  if (VAR_2)
   FUNC_0((VAR_0 + 1) % VAR_2, 0);
  break;
 case 128:
  if (VAR_2)
   FUNC_0((VAR_0 + VAR_2 - 1) % VAR_2, 0);
  break;
 case 130:
  VAR_5 = VAR_3 - 4;
  FUNC_0(VAR_1 + (VAR_5 - 1), 1);
  VAR_1 += VAR_5 - 1;
  break;
 case 134:
  VAR_5 = VAR_3 - 4;
  FUNC_0(VAR_1 + (VAR_5 - 1), 1);
  VAR_1 += VAR_5 >> 1;
  break;
 case 129:
  VAR_5 = VAR_3 - 4;
  FUNC_0(VAR_1, 1);
  VAR_1 -= VAR_5 - 1;
  break;
 case 133:
  VAR_5 = VAR_3 - 4;
  FUNC_0(VAR_1, 1);
  VAR_1 -= VAR_5 >> 1;
  break;
 case 132:
  FUNC_0(0, 1);
  break;
 default:
  FUNC_0(VAR_2 - 1, 1);
  break;
 }
}
