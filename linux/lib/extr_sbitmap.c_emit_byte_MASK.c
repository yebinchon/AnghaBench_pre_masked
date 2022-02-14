
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,unsigned int) ;
 int FUNC_1 (struct seq_file*,char) ;

__attribute__((used)) static inline void FUNC_2(struct seq_file *VAR_0, unsigned int VAR_1, u8 VAR_2)
{
 if ((VAR_1 & 0xf) == 0) {
  if (VAR_1 != 0)
   FUNC_1(VAR_0, '\n');
  FUNC_0(VAR_0, "%08x:", VAR_1);
 }
 if ((VAR_1 & 0x1) == 0)
  FUNC_1(VAR_0, ' ');
 FUNC_0(VAR_0, "%02x", VAR_2);
}
