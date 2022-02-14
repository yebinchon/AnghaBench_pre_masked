
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_vmaster_mute_hook {int mute_mode; int codec; int (* hook ) (int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, int VAR_2)
{
 struct hda_vmaster_mute_hook *VAR_3 = VAR_1;

 if (VAR_3->mute_mode != VAR_0)
  VAR_2 = VAR_3->mute_mode;
 VAR_3->hook(VAR_3->codec, VAR_2);
}
