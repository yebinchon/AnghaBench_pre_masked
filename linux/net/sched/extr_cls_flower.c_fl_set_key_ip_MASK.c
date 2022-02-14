
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct flow_dissector_key_ip {int ttl; int tos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct nlattr**,int *,int,int *,int,int) ;

__attribute__((used)) static void FUNC_1(struct nlattr **VAR_8, bool VAR_9,
     struct flow_dissector_key_ip *VAR_10,
     struct flow_dissector_key_ip *VAR_11)
{
 int VAR_12 = VAR_9 ? VAR_0 : VAR_4;
 int VAR_13 = VAR_9 ? VAR_2 : VAR_6;
 int VAR_14 = VAR_9 ? VAR_1 : VAR_5;
 int VAR_15 = VAR_9 ? VAR_3 : VAR_7;

 FUNC_0(VAR_8, &VAR_10->tos, VAR_12, &VAR_11->tos, VAR_14, sizeof(VAR_10->tos));
 FUNC_0(VAR_8, &VAR_10->ttl, VAR_13, &VAR_11->ttl, VAR_15, sizeof(VAR_10->ttl));
}
