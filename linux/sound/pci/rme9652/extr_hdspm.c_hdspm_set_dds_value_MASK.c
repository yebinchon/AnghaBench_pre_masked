
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hdspm {int io_type; } ;




 int VAR_0 ;



 int FUNC_0 (int,int) ;
 int FUNC_1 (struct hdspm*,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct hdspm *VAR_1, int VAR_2)
{
 u64 VAR_3;

 if (FUNC_3(VAR_2 <= 0))
  return;

 if (VAR_2 >= 112000)
  VAR_2 /= 4;
 else if (VAR_2 >= 56000)
  VAR_2 /= 2;

 switch (VAR_1->io_type) {
 case 129:
  VAR_3 = 131072000000000ULL;
  break;
 case 130:
 case 132:
  VAR_3 = 110069313433624ULL;
  break;
 case 128:
 case 131:
  VAR_3 = 104857600000000ULL;
  break;
 default:
  FUNC_2();
  return;
 }

 VAR_3 = FUNC_0(VAR_3, VAR_2);

 FUNC_3(VAR_3 >> 32);
 FUNC_1(VAR_1, VAR_0, (u32)VAR_3);
}
