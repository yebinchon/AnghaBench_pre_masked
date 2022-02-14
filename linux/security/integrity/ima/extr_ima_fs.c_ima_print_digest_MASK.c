
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,int ) ;

void FUNC_1(struct seq_file *VAR_0, u8 *VAR_1, u32 VAR_2)
{
 u32 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_0(VAR_0, "%02x", *(VAR_1 + VAR_3));
}
