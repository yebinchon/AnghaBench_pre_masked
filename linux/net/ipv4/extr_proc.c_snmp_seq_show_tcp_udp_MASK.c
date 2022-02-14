
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct seq_file {struct net* private; } ;
struct TYPE_5__ {int udplite_statistics; int udp_statistics; int tcp_statistics; } ;
struct net {TYPE_1__ mib; } ;
struct TYPE_6__ {unsigned long name; scalar_t__ entry; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned long*,int ,int) ;
 int FUNC_1 (struct seq_file*,char*,unsigned long) ;
 int FUNC_2 (struct seq_file*,char) ;
 int FUNC_3 (struct seq_file*,char*) ;
 TYPE_2__* VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_4 (unsigned long*,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_4, void *VAR_5)
{
 unsigned long VAR_6[VAR_0];
 struct net *VAR_7 = VAR_4->private;
 int VAR_8;

 FUNC_0(VAR_6, 0, VAR_0 * sizeof(unsigned long));

 FUNC_3(VAR_4, "\nTcp:");
 for (VAR_8 = 0; VAR_2[VAR_8].name; VAR_8++)
  FUNC_1(VAR_4, " %s", VAR_2[VAR_8].name);

 FUNC_3(VAR_4, "\nTcp:");
 FUNC_4(VAR_6, VAR_2,
     VAR_7->mib.tcp_statistics);
 for (VAR_8 = 0; VAR_2[VAR_8].name; VAR_8++) {

  if (VAR_2[VAR_8].entry == VAR_1)
   FUNC_1(VAR_4, " %ld", VAR_6[VAR_8]);
  else
   FUNC_1(VAR_4, " %lu", VAR_6[VAR_8]);
 }

 FUNC_0(VAR_6, 0, VAR_0 * sizeof(unsigned long));

 FUNC_4(VAR_6, VAR_3,
     VAR_7->mib.udp_statistics);
 FUNC_3(VAR_4, "\nUdp:");
 for (VAR_8 = 0; VAR_3[VAR_8].name; VAR_8++)
  FUNC_1(VAR_4, " %s", VAR_3[VAR_8].name);
 FUNC_3(VAR_4, "\nUdp:");
 for (VAR_8 = 0; VAR_3[VAR_8].name; VAR_8++)
  FUNC_1(VAR_4, " %lu", VAR_6[VAR_8]);

 FUNC_0(VAR_6, 0, VAR_0 * sizeof(unsigned long));


 FUNC_3(VAR_4, "\nUdpLite:");
 FUNC_4(VAR_6, VAR_3,
     VAR_7->mib.udplite_statistics);
 for (VAR_8 = 0; VAR_3[VAR_8].name; VAR_8++)
  FUNC_1(VAR_4, " %s", VAR_3[VAR_8].name);
 FUNC_3(VAR_4, "\nUdpLite:");
 for (VAR_8 = 0; VAR_3[VAR_8].name; VAR_8++)
  FUNC_1(VAR_4, " %lu", VAR_6[VAR_8]);

 FUNC_2(VAR_4, '\n');
 return 0;
}
