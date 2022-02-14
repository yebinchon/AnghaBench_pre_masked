
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct seq_file*,char*,int ) ;
 int FUNC_2 (struct seq_file*,void*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_2, void *VAR_3)
{
 FUNC_0();

 if (VAR_3 == VAR_0)
  FUNC_1(VAR_2, "Inter-| sta-|   Quality        |   Discarded "
    "packets               | Missed | WE\n"
    " face | tus | link level noise |  nwid  "
    "crypt   frag  retry   misc | beacon | %d\n",
      VAR_1);
 else
  FUNC_2(VAR_2, VAR_3);
 return 0;
}
