
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct ip_tunnel_encap {void* dport; void* sport; void* flags; void* type; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct ip_tunnel_encap*,int ,int) ;
 void* FUNC_1 (struct nlattr*) ;
 void* FUNC_2 (struct nlattr*) ;

__attribute__((used)) static bool FUNC_3(struct nlattr *VAR_4[],
         struct ip_tunnel_encap *VAR_5)
{
 bool VAR_6 = 0;

 FUNC_0(VAR_5, 0, sizeof(*VAR_5));

 if (!VAR_4)
  return VAR_6;

 if (VAR_4[VAR_3]) {
  VAR_6 = 1;
  VAR_5->type = FUNC_2(VAR_4[VAR_3]);
 }

 if (VAR_4[VAR_1]) {
  VAR_6 = 1;
  VAR_5->flags = FUNC_2(VAR_4[VAR_1]);
 }

 if (VAR_4[VAR_2]) {
  VAR_6 = 1;
  VAR_5->sport = FUNC_1(VAR_4[VAR_2]);
 }

 if (VAR_4[VAR_0]) {
  VAR_6 = 1;
  VAR_5->dport = FUNC_1(VAR_4[VAR_0]);
 }

 return VAR_6;
}
