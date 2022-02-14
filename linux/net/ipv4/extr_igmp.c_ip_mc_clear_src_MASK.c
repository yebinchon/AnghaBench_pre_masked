
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_sf_list {int dummy; } ;
struct ip_mc_list {size_t sfmode; int* sfcount; int lock; struct ip_sf_list* sources; struct ip_sf_list* tomb; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct ip_sf_list*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ip_mc_list *VAR_2)
{
 struct ip_sf_list *VAR_3, *VAR_4;

 FUNC_1(&VAR_2->lock);
 VAR_3 = VAR_2->tomb;
 VAR_2->tomb = ((void*)0);
 VAR_4 = VAR_2->sources;
 VAR_2->sources = ((void*)0);
 VAR_2->sfmode = VAR_0;
 VAR_2->sfcount[VAR_1] = 0;
 VAR_2->sfcount[VAR_0] = 1;
 FUNC_2(&VAR_2->lock);

 FUNC_0(VAR_3);
 FUNC_0(VAR_4);
}
