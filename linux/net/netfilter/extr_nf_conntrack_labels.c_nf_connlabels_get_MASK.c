
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int labels_used; } ;
struct net {TYPE_1__ ct; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct net *VAR_3, unsigned int VAR_4)
{
 if (FUNC_0(VAR_4) >= VAR_1 / sizeof(long))
  return -VAR_0;

 FUNC_1(&VAR_2);
 VAR_3->ct.labels_used++;
 FUNC_2(&VAR_2);

 return 0;
}
