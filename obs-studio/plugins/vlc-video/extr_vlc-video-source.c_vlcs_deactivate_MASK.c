
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_source {scalar_t__ behavior; int media_list_player; int source; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_2)
{
 struct vlc_source *VAR_3 = VAR_2;

 if (VAR_3->behavior == VAR_1) {
  FUNC_1(VAR_3->media_list_player);
  FUNC_2(VAR_3->source, ((void*)0));

 } else if (VAR_3->behavior == VAR_0) {
  FUNC_0(VAR_3->media_list_player);
 }
}
