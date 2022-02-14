
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_sf_list {struct ip_sf_list* sf_next; } ;


 int FUNC_0 (struct ip_sf_list*) ;

__attribute__((used)) static void FUNC_1(struct ip_sf_list *VAR_0)
{
 struct ip_sf_list *VAR_1;

 while (VAR_0) {
  VAR_1 = VAR_0->sf_next;
  FUNC_0(VAR_0);
  VAR_0 = VAR_1;
 }
}
