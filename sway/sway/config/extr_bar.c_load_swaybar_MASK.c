
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bar_config {int id; int * client; } ;


 int VAR_0 ;
 int FUNC_0 (struct bar_config*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct bar_config *VAR_1) {
 if (VAR_1->client != ((void*)0)) {
  FUNC_2(VAR_1->client);
 }
 FUNC_1(VAR_0, "Invoking swaybar for bar id '%s'", VAR_1->id);
 FUNC_0(VAR_1);
}
