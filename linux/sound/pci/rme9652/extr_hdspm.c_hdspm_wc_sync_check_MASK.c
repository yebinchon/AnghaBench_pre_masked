
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdspm {int io_type; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (struct hdspm*,int ) ;

__attribute__((used)) static int FUNC_1(struct hdspm *VAR_6)
{
 int VAR_7, VAR_8;

 switch (VAR_6->io_type) {
 case 132:
  VAR_7 = FUNC_0(VAR_6, VAR_2);
  if (VAR_7 & VAR_0) {
   if (VAR_7 & VAR_1)
    return 2;
   else
    return 1;
  }
  return 0;
  break;

 case 130:
  VAR_8 = FUNC_0(VAR_6, VAR_3);
  if (VAR_8 & VAR_4) {
   if (VAR_8 & VAR_5)
    return 2;
   else
    return 1;
  }
  return 0;
  break;

 case 128:
 case 131:
  VAR_7 = FUNC_0(VAR_6, VAR_2);

  if (VAR_7 & 0x2000000)
   return 2;
  else if (VAR_7 & 0x1000000)
   return 1;
  return 0;

  break;

 case 129:
  break;
 }


 return 3;
}
