
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct list_head {int dummy; } ;
struct hsr_node {unsigned long* time_in; int mac_list; int * seq_out; int macaddress_A; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned char*) ;
 unsigned long VAR_2 ;
 struct hsr_node* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,struct list_head*) ;

struct hsr_node *FUNC_3(struct list_head *VAR_3, unsigned char VAR_4[],
         u16 VAR_5)
{
 struct hsr_node *VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 FUNC_0(VAR_6->macaddress_A, VAR_4);




 VAR_7 = VAR_2;
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  VAR_6->time_in[VAR_8] = VAR_7;
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  VAR_6->seq_out[VAR_8] = VAR_5;

 FUNC_2(&VAR_6->mac_list, VAR_3);

 return VAR_6;
}
