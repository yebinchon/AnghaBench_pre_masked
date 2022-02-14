
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef int name ;
typedef int atomic_long_t ;


 int VAR_0 ;
 unsigned long FUNC_0 (int *) ;
 char** VAR_1 ;
 int FUNC_1 (struct seq_file*,char*,char*,unsigned long) ;
 int FUNC_2 (char*,int,char*,char*,...) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_2, atomic_long_t *VAR_3)
{
 char VAR_4[32];
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  int VAR_6;
  const char *VAR_7;

  VAR_6 = VAR_5 & 0xff;
  VAR_7 = VAR_1[VAR_6];
  if (!VAR_7)
   continue;
  FUNC_2(VAR_4, sizeof(VAR_4), "Icmp6%s%s",
   VAR_5 & 0x100 ? "Out" : "In", VAR_7);
  FUNC_1(VAR_2, "%-32s\t%lu\n", VAR_4,
      FUNC_0(VAR_3 + VAR_5));
 }


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  unsigned long VAR_8;

  VAR_8 = FUNC_0(VAR_3 + VAR_5);
  if (!VAR_8)
   continue;
  FUNC_2(VAR_4, sizeof(VAR_4), "Icmp6%sType%u",
   VAR_5 & 0x100 ? "Out" : "In", VAR_5 & 0xff);
  FUNC_1(VAR_2, "%-32s\t%lu\n", VAR_4, VAR_8);
 }
}
