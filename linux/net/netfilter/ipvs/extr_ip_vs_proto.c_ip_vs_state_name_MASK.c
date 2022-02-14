
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_protocol {char const* (* state_name ) (unsigned int) ;} ;
struct ip_vs_conn {unsigned int state; int flags; scalar_t__ protocol; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__* VAR_3 ;
 struct ip_vs_protocol* FUNC_0 (scalar_t__) ;
 char const* FUNC_1 (unsigned int) ;

const char *FUNC_2(const struct ip_vs_conn *VAR_4)
{
 unsigned int VAR_5 = VAR_4->state;
 struct ip_vs_protocol *VAR_6;

 if (VAR_4->flags & VAR_1) {

  if (VAR_5 >= VAR_2)
   return "ERR!";
  return VAR_3[VAR_5] ? : "?";
 }
 VAR_6 = FUNC_0(VAR_4->protocol);
 if (VAR_6 == ((void*)0) || VAR_6->state_name == ((void*)0))
  return (VAR_4->protocol == VAR_0) ? "NONE" : "ERR!";
 return VAR_6->state_name(VAR_5);
}
