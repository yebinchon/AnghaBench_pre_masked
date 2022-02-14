
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evswitch {int discarding; scalar_t__ off_name; int * off; scalar_t__ on_name; int * on; } ;
struct evlist {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 void* FUNC_1 (struct evlist*,scalar_t__) ;

int FUNC_2(struct evswitch *VAR_1, struct evlist *VAR_2, FILE *VAR_3)
{
 if (VAR_1->on_name) {
  VAR_1->on = FUNC_1(VAR_2, VAR_1->on_name);
  if (VAR_1->on == ((void*)0)) {
   FUNC_0(VAR_3, "on", VAR_1->on_name);
   return -VAR_0;
  }
  VAR_1->discarding = 1;
 }

 if (VAR_1->off_name) {
  VAR_1->off = FUNC_1(VAR_2, VAR_1->off_name);
  if (VAR_1->off == ((void*)0)) {
   FUNC_0(VAR_3, "off", VAR_1->off_name);
   return -VAR_0;
  }
 }

 return 0;
}
