
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {struct net* private; } ;
struct TYPE_4__ {int sctp_statistics; } ;
struct net {TYPE_1__ sctp; } ;
struct TYPE_5__ {scalar_t__ name; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long*,int ,int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (struct seq_file*,char*,scalar_t__,unsigned long) ;
 int FUNC_2 (unsigned long*,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_2, void *VAR_3)
{
 unsigned long VAR_4[VAR_0];
 struct net *VAR_5 = VAR_2->private;
 int VAR_6;

 FUNC_0(VAR_4, 0, sizeof(unsigned long) * VAR_0);

 FUNC_2(VAR_4, VAR_1,
     VAR_5->sctp.sctp_statistics);
 for (VAR_6 = 0; VAR_1[VAR_6].name; VAR_6++)
  FUNC_1(VAR_2, "%-32s\t%ld\n", VAR_1[VAR_6].name,
      VAR_4[VAR_6]);

 return 0;
}
