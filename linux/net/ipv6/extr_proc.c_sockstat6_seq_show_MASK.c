
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {struct net* private; } ;
struct TYPE_5__ {TYPE_3__* fqdir; } ;
struct net {TYPE_2__ ipv6; } ;
struct TYPE_4__ {int nelems; } ;
struct TYPE_6__ {TYPE_1__ rhashtable; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_2 (struct seq_file*,char*,int ,...) ;
 int FUNC_3 (struct net*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_4, void *VAR_5)
{
 struct net *VAR_6 = VAR_4->private;

 FUNC_2(VAR_4, "TCP6: inuse %d\n",
         FUNC_3(VAR_6, &VAR_1));
 FUNC_2(VAR_4, "UDP6: inuse %d\n",
         FUNC_3(VAR_6, &VAR_3));
 FUNC_2(VAR_4, "UDPLITE6: inuse %d\n",
   FUNC_3(VAR_6, &VAR_2));
 FUNC_2(VAR_4, "RAW6: inuse %d\n",
         FUNC_3(VAR_6, &VAR_0));
 FUNC_2(VAR_4, "FRAG6: inuse %u memory %lu\n",
     FUNC_0(&VAR_6->ipv6.fqdir->rhashtable.nelems),
     FUNC_1(VAR_6->ipv6.fqdir));
 return 0;
}
