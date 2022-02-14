
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



 int FUNC_0 (struct hdspm*,int ) ;

__attribute__((used)) static int FUNC_1(struct hdspm *VAR_5)
{
 int VAR_6, VAR_7 = 0, VAR_8 = 0;

 switch (VAR_5->io_type) {
 case 128:
 case 131:
  VAR_6 = FUNC_0(VAR_5, VAR_0);
  VAR_7 = (VAR_6 & 0x400) ? 1 : 0;
  VAR_8 = (VAR_6 & 0x800) ? 1 : 0;
  break;

 case 130:
  VAR_6 = FUNC_0(VAR_5, VAR_1);
  VAR_7 = (VAR_6 & VAR_3) ? 1 : 0;
  VAR_8 = (VAR_6 & VAR_4) ? 1 : 0;
  break;

 case 132:
  VAR_6 = FUNC_0(VAR_5, VAR_2);
  VAR_7 = (VAR_6 & 0x100000) ? 1 : 0;
  VAR_8 = (VAR_6 & 0x200000) ? 1 : 0;
  break;

 case 129:
  break;
 }

 if (VAR_7 && VAR_8)
  return 2;
 else if (VAR_7)
  return 1;

 return 0;
}
