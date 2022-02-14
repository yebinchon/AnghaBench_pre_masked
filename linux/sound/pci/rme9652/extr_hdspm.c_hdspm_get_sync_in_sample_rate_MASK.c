
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdspm {int io_type; scalar_t__ tco; } ;



 int VAR_0 ;

 int FUNC_0 (struct hdspm*,int ) ;

__attribute__((used)) static int FUNC_1(struct hdspm *VAR_1)
{
 int VAR_2;

 if (VAR_1->tco) {
  switch (VAR_1->io_type) {
  case 128:
  case 129:
   VAR_2 = FUNC_0(VAR_1, VAR_0);
   return (VAR_2 >> 12) & 0xF;
   break;
  default:
   break;
  }
 }

 return 0;
}
