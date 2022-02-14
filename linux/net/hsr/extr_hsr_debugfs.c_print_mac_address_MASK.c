
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0, unsigned char *VAR_1)
{
 FUNC_0(VAR_0, "%02x:%02x:%02x:%02x:%02x:%02x:",
     VAR_1[0], VAR_1[1], VAR_1[2], VAR_1[3], VAR_1[4], VAR_1[5]);
}
