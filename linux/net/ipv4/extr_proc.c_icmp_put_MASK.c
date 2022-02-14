
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {struct net* private; } ;
struct TYPE_5__ {int icmp_statistics; TYPE_1__* icmpmsg_statistics; } ;
struct net {TYPE_2__ mib; } ;
typedef int atomic_long_t ;
struct TYPE_6__ {int index; scalar_t__ name; } ;
struct TYPE_4__ {int * mibs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_3__* VAR_5 ;
 int FUNC_1 (struct seq_file*,char*,scalar_t__,...) ;
 int FUNC_2 (struct seq_file*,char*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct seq_file *VAR_6)
{
 int VAR_7;
 struct net *VAR_8 = VAR_6->private;
 atomic_long_t *VAR_9 = VAR_8->mib.icmpmsg_statistics->mibs;

 FUNC_2(VAR_6, "\nIcmp: InMsgs InErrors InCsumErrors");
 for (VAR_7 = 0; VAR_5[VAR_7].name; VAR_7++)
  FUNC_1(VAR_6, " In%s", VAR_5[VAR_7].name);
 FUNC_2(VAR_6, " OutMsgs OutErrors");
 for (VAR_7 = 0; VAR_5[VAR_7].name; VAR_7++)
  FUNC_1(VAR_6, " Out%s", VAR_5[VAR_7].name);
 FUNC_1(VAR_6, "\nIcmp: %lu %lu %lu",
  FUNC_3(VAR_8->mib.icmp_statistics, VAR_2),
  FUNC_3(VAR_8->mib.icmp_statistics, VAR_1),
  FUNC_3(VAR_8->mib.icmp_statistics, VAR_0));
 for (VAR_7 = 0; VAR_5[VAR_7].name; VAR_7++)
  FUNC_1(VAR_6, " %lu",
      FUNC_0(VAR_9 + VAR_5[VAR_7].index));
 FUNC_1(VAR_6, " %lu %lu",
  FUNC_3(VAR_8->mib.icmp_statistics, VAR_4),
  FUNC_3(VAR_8->mib.icmp_statistics, VAR_3));
 for (VAR_7 = 0; VAR_5[VAR_7].name; VAR_7++)
  FUNC_1(VAR_6, " %lu",
      FUNC_0(VAR_9 + (VAR_5[VAR_7].index | 0x100)));
}
