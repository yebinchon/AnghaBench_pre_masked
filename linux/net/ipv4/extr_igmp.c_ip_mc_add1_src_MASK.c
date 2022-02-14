
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_sf_list {scalar_t__ sf_inaddr; int* sf_count; struct ip_sf_list* sf_next; } ;
struct ip_mc_list {int interface; struct ip_sf_list* sources; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct ip_sf_list* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct ip_mc_list *VAR_2, int VAR_3,
 __be32 *VAR_4)
{
 struct ip_sf_list *VAR_5, *VAR_6;

 VAR_6 = ((void*)0);
 for (VAR_5 = VAR_2->sources; VAR_5; VAR_5 = VAR_5->sf_next) {
  if (VAR_5->sf_inaddr == *VAR_4)
   break;
  VAR_6 = VAR_5;
 }
 if (!VAR_5) {
  VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
  if (!VAR_5)
   return -VAR_0;
  VAR_5->sf_inaddr = *VAR_4;
  if (VAR_6) {
   VAR_6->sf_next = VAR_5;
  } else
   VAR_2->sources = VAR_5;
 }
 VAR_5->sf_count[VAR_3]++;
 if (VAR_5->sf_count[VAR_3] == 1) {
  FUNC_0(VAR_2->interface);
 }
 return 0;
}
