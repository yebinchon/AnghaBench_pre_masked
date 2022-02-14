
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {struct net* private; } ;
struct TYPE_4__ {TYPE_1__* icmpmsg_statistics; } ;
struct net {TYPE_2__ mib; } ;
struct TYPE_3__ {int * mibs; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int *) ;
 int FUNC_1 (struct seq_file*,unsigned long*,unsigned short*,int) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_2)
{


 int VAR_3, VAR_4;
 unsigned short VAR_5[16];
 unsigned long VAR_6[16], VAR_7;
 struct net *VAR_8 = VAR_2->private;

 VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_7 = FUNC_0(&VAR_8->mib.icmpmsg_statistics->mibs[VAR_3]);
  if (VAR_7) {
   VAR_5[VAR_4] = VAR_3;
   VAR_6[VAR_4++] = VAR_7;
  }
  if (VAR_4 == 16) {
   FUNC_1(VAR_2, VAR_6, VAR_5, VAR_4);
   VAR_4 = 0;
  }
 }
 FUNC_1(VAR_2, VAR_6, VAR_5, VAR_4);


}
