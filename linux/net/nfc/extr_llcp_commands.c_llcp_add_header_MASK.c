
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,...) ;
 int FUNC_1 (struct sk_buff*,int*,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_2(struct sk_buff *VAR_1,
           u8 VAR_2, u8 VAR_3, u8 VAR_4)
{
 u8 VAR_5[2];

 FUNC_0("ptype 0x%x dsap 0x%x ssap 0x%x\n", VAR_4, VAR_2, VAR_3);

 VAR_5[0] = (u8)((VAR_2 << 2) | (VAR_4 >> 2));
 VAR_5[1] = (u8)((VAR_4 << 6) | VAR_3);

 FUNC_0("header 0x%x 0x%x\n", VAR_5[0], VAR_5[1]);

 FUNC_1(VAR_1, VAR_5, VAR_0);

 return VAR_1;
}
