
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soundfont_voice_parm {int moddelay; int modatkhld; int moddcysus; int modrelease; int voldelay; int volatkhld; int voldcysus; int volrelease; int lfo1delay; int lfo2delay; int cutoff; } ;


 int FUNC_0 (struct soundfont_voice_parm*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct soundfont_voice_parm *VAR_0)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));

 VAR_0->moddelay = 0x8000;
 VAR_0->modatkhld = 0x7f7f;
 VAR_0->moddcysus = 0x7f7f;
 VAR_0->modrelease = 0x807f;

 VAR_0->voldelay = 0x8000;
 VAR_0->volatkhld = 0x7f7f;
 VAR_0->voldcysus = 0x7f7f;
 VAR_0->volrelease = 0x807f;

 VAR_0->lfo1delay = 0x8000;
 VAR_0->lfo2delay = 0x8000;

 VAR_0->cutoff = 0xff;
}
