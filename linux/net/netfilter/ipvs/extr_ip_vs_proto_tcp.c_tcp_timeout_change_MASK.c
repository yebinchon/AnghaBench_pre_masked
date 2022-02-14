
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_proto_data {int tcp_state_table; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct ip_vs_proto_data *VAR_2, int VAR_3)
{
 int VAR_4 = (VAR_3 & 1);







 VAR_2->tcp_state_table = (VAR_4 ? VAR_1 : VAR_0);
}
