
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdspm {int io_type; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (struct hdspm*,int ) ;

__attribute__((used)) static int FUNC_1(struct hdspm *VAR_3)
{
 int VAR_4;

 switch (VAR_3->io_type) {
 case 128:
 case 129:
  VAR_4 = FUNC_0(VAR_3, VAR_1);
  return (VAR_4 >> 16) & 0xF;
  break;
 case 130:
  VAR_4 = FUNC_0(VAR_3, VAR_2);
  return (VAR_4 >> VAR_0) & 0xF;
 default:
  break;
 }


 return 0;
}
