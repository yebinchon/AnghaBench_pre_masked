
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hal2_codec {int master; int inc; unsigned short mod; } ;



__attribute__((used)) static int FUNC_0(struct hal2_codec *VAR_0, unsigned int VAR_1)
{
 unsigned short VAR_2;

 if (44100 % VAR_1 < 48000 % VAR_1) {
  VAR_2 = 4 * 44100 / VAR_1;
  VAR_0->master = 44100;
 } else {
  VAR_2 = 4 * 48000 / VAR_1;
  VAR_0->master = 48000;
 }

 VAR_0->inc = 4;
 VAR_0->mod = VAR_2;
 VAR_1 = 4 * VAR_0->master / VAR_2;

 return VAR_1;
}
