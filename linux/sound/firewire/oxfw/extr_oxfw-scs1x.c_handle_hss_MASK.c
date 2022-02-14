
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {int dummy; } ;
struct TYPE_2__ {unsigned long long offset; } ;
struct fw_scs1x {int input; TYPE_1__ hss_handler; } ;
struct fw_request {int dummy; } ;
struct fw_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct snd_rawmidi_substream* FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct fw_card*,struct fw_request*,int) ;
 int FUNC_2 (struct fw_scs1x*,struct snd_rawmidi_substream*,void*,size_t) ;

__attribute__((used)) static void FUNC_3(struct fw_card *VAR_5, struct fw_request *VAR_6,
         int VAR_7, int VAR_8, int VAR_9, int VAR_10,
         unsigned long long VAR_11, void *VAR_12, size_t VAR_13,
         void *VAR_14)
{
 struct fw_scs1x *VAR_15 = VAR_14;
 struct snd_rawmidi_substream *VAR_16;
 int VAR_17;

 if (VAR_11 != VAR_15->hss_handler.offset) {
  VAR_17 = VAR_0;
  goto end;
 }
 if (VAR_7 != VAR_4 &&
     VAR_7 != VAR_3) {
  VAR_17 = VAR_2;
  goto end;
 }

 if (VAR_13 >= 1) {
  VAR_16 = FUNC_0(VAR_15->input);
  if (VAR_16)
   FUNC_2(VAR_15, VAR_16, VAR_12, VAR_13);
 }

 VAR_17 = VAR_1;
end:
 FUNC_1(VAR_5, VAR_6, VAR_17);
}
