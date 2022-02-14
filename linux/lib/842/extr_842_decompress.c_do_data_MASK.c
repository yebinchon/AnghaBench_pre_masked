
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct sw842_param {int olen; int out; } ;
typedef int __be64 ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sw842_param*,int *,int) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct sw842_param *VAR_2, u8 VAR_3)
{
 u64 VAR_4;
 int VAR_5;

 if (VAR_3 > VAR_2->olen)
  return -VAR_1;

 VAR_5 = FUNC_3(VAR_2, &VAR_4, VAR_3 * 8);
 if (VAR_5)
  return VAR_5;

 switch (VAR_3) {
 case 2:
  FUNC_4(FUNC_0((u16)VAR_4), (__be16 *)VAR_2->out);
  break;
 case 4:
  FUNC_4(FUNC_1((u32)VAR_4), (__be32 *)VAR_2->out);
  break;
 case 8:
  FUNC_4(FUNC_2((u64)VAR_4), (__be64 *)VAR_2->out);
  break;
 default:
  return -VAR_0;
 }

 VAR_2->out += VAR_3;
 VAR_2->olen -= VAR_3;

 return 0;
}
