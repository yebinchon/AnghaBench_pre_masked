
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct sk_buff {int* data; } ;
struct iphdr {int ihl; } ;
struct gre_protocol {int (* err_handler ) (struct sk_buff*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int * VAR_3 ;
 struct gre_protocol* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_4, u32 VAR_5)
{
 const struct gre_protocol *VAR_6;
 const struct iphdr *VAR_7 = (const struct iphdr *)VAR_4->data;
 u8 VAR_8 = VAR_4->data[(VAR_7->ihl<<2) + 1]&0x7f;
 int VAR_9 = 0;

 if (VAR_8 >= VAR_2)
  return -VAR_0;

 FUNC_1();
 VAR_6 = FUNC_0(VAR_3[VAR_8]);
 if (VAR_6 && VAR_6->err_handler)
  VAR_6->err_handler(VAR_4, VAR_5);
 else
  VAR_9 = -VAR_1;
 FUNC_2();

 return VAR_9;
}
