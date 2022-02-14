
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mulaw_priv {int cvt_endian; int flip; int native_bytes; int copy_bytes; int native_ofs; int copy_ofs; } ;
typedef int snd_pcm_format_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct mulaw_priv *VAR_0, snd_pcm_format_t VAR_1)
{



 VAR_0->cvt_endian = FUNC_1(VAR_1) > 0;

 if (!FUNC_3(VAR_1))
  VAR_0->flip = 0x8000;
 VAR_0->native_bytes = FUNC_2(VAR_1) / 8;
 VAR_0->copy_bytes = VAR_0->native_bytes < 2 ? 1 : 2;
 if (FUNC_1(VAR_1)) {
  VAR_0->native_ofs = VAR_0->native_bytes - VAR_0->copy_bytes;
  VAR_0->copy_ofs = 2 - VAR_0->copy_bytes;
 } else {

  VAR_0->native_ofs = VAR_0->native_bytes -
   FUNC_4(VAR_1) / 8;
 }
}
