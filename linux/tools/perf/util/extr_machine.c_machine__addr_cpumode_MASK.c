
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct machine {int single_address_space; } ;






 int FUNC_0 (struct machine*,int ) ;

u8 FUNC_1(struct machine *VAR_0, u8 VAR_1, u64 VAR_2)
{
 u8 VAR_3 = VAR_1;
 bool VAR_4;

 if (!VAR_0->single_address_space)
  goto out;

 VAR_4 = FUNC_0(VAR_0, VAR_2);
 switch (VAR_1) {
 case 129:
 case 128:
  VAR_3 = VAR_4 ? 129 :
        128;
  break;
 case 131:
 case 130:
  VAR_3 = VAR_4 ? 131 :
        130;
  break;
 default:
  break;
 }
out:
 return VAR_3;
}
