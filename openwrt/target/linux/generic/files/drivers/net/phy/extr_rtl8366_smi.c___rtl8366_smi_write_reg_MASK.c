
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8366_smi {int cmd_write; int lock; } ;


 int FUNC_0 (struct rtl8366_smi*) ;
 int FUNC_1 (struct rtl8366_smi*) ;
 int FUNC_2 (struct rtl8366_smi*,int) ;
 int FUNC_3 (struct rtl8366_smi*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct rtl8366_smi *VAR_0,
       u32 VAR_1, u32 VAR_2, bool VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 FUNC_4(&VAR_0->lock, VAR_4);

 FUNC_0(VAR_0);


 VAR_5 = FUNC_2(VAR_0, VAR_0->cmd_write);
 if (VAR_5)
  goto out;


 VAR_5 = FUNC_2(VAR_0, VAR_1 & 0xff);
 if (VAR_5)
  goto out;


 VAR_5 = FUNC_2(VAR_0, VAR_1 >> 8);
 if (VAR_5)
  goto out;


 VAR_5 = FUNC_2(VAR_0, VAR_2 & 0xff);
 if (VAR_5)
  goto out;


 if (VAR_3)
  VAR_5 = FUNC_2(VAR_0, VAR_2 >> 8);
 else
  VAR_5 = FUNC_3(VAR_0, VAR_2 >> 8);
 if (VAR_5)
  goto out;

 VAR_5 = 0;

 out:
 FUNC_1(VAR_0);
 FUNC_5(&VAR_0->lock, VAR_4);

 return VAR_5;
}
