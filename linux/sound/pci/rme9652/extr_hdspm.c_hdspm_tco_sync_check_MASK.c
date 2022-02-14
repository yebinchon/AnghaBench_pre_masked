
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdspm {int io_type; scalar_t__ tco; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (struct hdspm*,int ) ;

__attribute__((used)) static int FUNC_1(struct hdspm *VAR_5)
{
 int VAR_6;

 if (VAR_5->tco) {
  switch (VAR_5->io_type) {
  case 129:
   VAR_6 = FUNC_0(VAR_5, VAR_1);
   if (VAR_6 & VAR_3) {
    if (VAR_6 & VAR_4)
     return 2;
    else
     return 1;
   }
   return 0;
  case 131:
   VAR_6 = FUNC_0(VAR_5, VAR_1);
   if (VAR_6 & VAR_2) {
    if (VAR_6 & VAR_4)
     return 2;
    else
     return 1;
   }
   return 0;
  case 128:
  case 130:
   VAR_6 = FUNC_0(VAR_5, VAR_0);

   if (VAR_6 & 0x8000000)
    return 2;
   if (VAR_6 & 0x4000000)
    return 1;
   return 0;

  default:
   break;
  }
 }

 return 3;
}
