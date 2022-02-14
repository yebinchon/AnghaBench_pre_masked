
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct hdspm {int io_type; } ;







 unsigned long long FUNC_0 (unsigned long long,unsigned long long) ;
 int FUNC_1 () ;

__attribute__((used)) static u64 FUNC_2(struct hdspm *VAR_0, u64 VAR_1)
{
 u64 VAR_2;

 if (VAR_1 == 0)
  return 0;

 switch (VAR_0->io_type) {
 case 130:
 case 132:
  VAR_2 = 110069313433624ULL;
  break;
 case 128:
 case 131:
  VAR_2 = 104857600000000ULL;
  break;
 case 129:
  VAR_2 = 131072000000000ULL;
  break;
 default:
  FUNC_1();
  return 0;
 }

 return FUNC_0(VAR_2, VAR_1);
}
