
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct seq_file {struct net* private; } ;
struct TYPE_5__ {int tw_count; } ;
struct TYPE_7__ {TYPE_4__* fqdir; TYPE_1__ tcp_death_row; } ;
struct net {TYPE_3__ ipv4; } ;
struct TYPE_6__ {int nelems; } ;
struct TYPE_8__ {TYPE_2__ rhashtable; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (struct seq_file*,char*,int ,...) ;
 int FUNC_6 (struct net*,int *) ;
 int FUNC_7 (struct seq_file*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct seq_file *VAR_5, void *VAR_6)
{
 struct net *VAR_7 = VAR_5->private;
 int VAR_8, VAR_9;

 VAR_8 = FUNC_2(&VAR_1);
 VAR_9 = FUNC_4(&VAR_2);

 FUNC_7(VAR_5);
 FUNC_5(VAR_5, "TCP: inuse %d orphan %d tw %d alloc %d mem %ld\n",
     FUNC_6(VAR_7, &VAR_2), VAR_8,
     FUNC_0(&VAR_7->ipv4.tcp_death_row.tw_count), VAR_9,
     FUNC_3(&VAR_2));
 FUNC_5(VAR_5, "UDP: inuse %d mem %ld\n",
     FUNC_6(VAR_7, &VAR_3),
     FUNC_3(&VAR_3));
 FUNC_5(VAR_5, "UDPLITE: inuse %d\n",
     FUNC_6(VAR_7, &VAR_4));
 FUNC_5(VAR_5, "RAW: inuse %d\n",
     FUNC_6(VAR_7, &VAR_0));
 FUNC_5(VAR_5, "FRAG: inuse %u memory %lu\n",
     FUNC_0(&VAR_7->ipv4.fqdir->rhashtable.nelems),
     FUNC_1(VAR_7->ipv4.fqdir));
 return 0;
}
