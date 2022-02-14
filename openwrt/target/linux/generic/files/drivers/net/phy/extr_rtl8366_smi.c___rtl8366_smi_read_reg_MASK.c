
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct rtl8366_smi {int cmd_read; int lock; } ;


 int FUNC_0 (struct rtl8366_smi*,scalar_t__*) ;
 int FUNC_1 (struct rtl8366_smi*,scalar_t__*) ;
 int FUNC_2 (struct rtl8366_smi*) ;
 int FUNC_3 (struct rtl8366_smi*) ;
 int FUNC_4 (struct rtl8366_smi*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct rtl8366_smi *VAR_0, u32 VAR_1, u32 *VAR_2)
{
 unsigned long VAR_3;
 u8 VAR_4 = 0;
 u8 VAR_5 = 0;
 int VAR_6;

 FUNC_5(&VAR_0->lock, VAR_3);

 FUNC_2(VAR_0);


 VAR_6 = FUNC_4(VAR_0, VAR_0->cmd_read);
 if (VAR_6)
  goto out;


 VAR_6 = FUNC_4(VAR_0, VAR_1 & 0xff);
 if (VAR_6)
  goto out;


 VAR_6 = FUNC_4(VAR_0, VAR_1 >> 8);
 if (VAR_6)
  goto out;


 FUNC_0(VAR_0, &VAR_4);

 FUNC_1(VAR_0, &VAR_5);

 *VAR_2 = ((u32) VAR_4) | (((u32) VAR_5) << 8);

 VAR_6 = 0;

 out:
 FUNC_3(VAR_0);
 FUNC_6(&VAR_0->lock, VAR_3);

 return VAR_6;
}
