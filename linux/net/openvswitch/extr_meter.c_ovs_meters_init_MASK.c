
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_head {int dummy; } ;
struct datapath {int * meters; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int * FUNC_1 (int,int,int ) ;

int FUNC_2(struct datapath *VAR_3)
{
 int VAR_4;

 VAR_3->meters = FUNC_1(VAR_2,
       sizeof(struct hlist_head), VAR_1);

 if (!VAR_3->meters)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_0(&VAR_3->meters[VAR_4]);

 return 0;
}
