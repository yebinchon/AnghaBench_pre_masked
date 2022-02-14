
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct obs_encoder {int media; int mixer_idx; TYPE_1__ info; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ,struct obs_encoder*) ;
 scalar_t__ FUNC_1 (struct obs_encoder*) ;
 int FUNC_2 (struct obs_encoder*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct obs_encoder*,int) ;
 int FUNC_4 (struct obs_encoder*) ;
 int FUNC_5 (int ,int ,struct obs_encoder*) ;

__attribute__((used)) static void FUNC_6(struct obs_encoder *VAR_3, bool VAR_4)
{
 if (VAR_3->info.type == VAR_0) {
  FUNC_0(VAR_3->media, VAR_3->mixer_idx,
     VAR_1, VAR_3);
 } else {
  if (FUNC_1(VAR_3)) {
   FUNC_4(VAR_3);
  } else {
   FUNC_5(VAR_3->media, VAR_2, VAR_3);
  }
 }






 if (VAR_4)
  FUNC_2(VAR_3);
 FUNC_3(VAR_3, 0);
}
