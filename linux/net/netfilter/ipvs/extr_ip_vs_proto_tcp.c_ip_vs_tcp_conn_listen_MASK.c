
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_proto_data {int * timeout_table; } ;
struct ip_vs_conn {size_t state; int lock; int timeout; int ipvs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct ip_vs_proto_data* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * VAR_2 ;

void FUNC_3(struct ip_vs_conn *VAR_3)
{
 struct ip_vs_proto_data *VAR_4 = FUNC_0(VAR_3->ipvs, VAR_0);

 FUNC_1(&VAR_3->lock);
 VAR_3->state = VAR_1;
 VAR_3->timeout = (VAR_4 ? VAR_4->timeout_table[VAR_1]
      : VAR_2[VAR_1]);
 FUNC_2(&VAR_3->lock);
}
