
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_source {scalar_t__ behavior; int media_list_player; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_2)
{
 struct vlc_source *VAR_3 = VAR_2;

 if (VAR_3->behavior == VAR_1) {
  FUNC_0(VAR_3->media_list_player);

 } else if (VAR_3->behavior == VAR_0) {
  FUNC_0(VAR_3->media_list_player);
 }
}
