
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_set_net {scalar_t__ ip_set_max; } ;
struct ip_set {int name; } ;
typedef scalar_t__ ip_set_id_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 struct ip_set* FUNC_1 (struct ip_set_net*,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct ip_set_net *VAR_3, const char *VAR_4, ip_set_id_t *VAR_5,
      struct ip_set **VAR_6)
{
 struct ip_set *VAR_7;
 ip_set_id_t VAR_8;

 *VAR_5 = VAR_2;
 for (VAR_8 = 0; VAR_8 < VAR_3->ip_set_max; VAR_8++) {
  VAR_7 = FUNC_1(VAR_3, VAR_8);
  if (!VAR_7) {
   if (*VAR_5 == VAR_2)
    *VAR_5 = VAR_8;
  } else if (FUNC_0(VAR_4, VAR_7->name)) {

   *VAR_6 = VAR_7;
   return -VAR_0;
  }
 }
 if (*VAR_5 == VAR_2)

  return -VAR_1;
 return 0;
}
