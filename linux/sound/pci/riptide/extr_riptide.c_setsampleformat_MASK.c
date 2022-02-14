
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdif {int dummy; } ;
typedef int snd_pcm_format_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cmdif*,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int
FUNC_5(struct cmdif *VAR_1,
  unsigned char VAR_2, unsigned char VAR_3,
  unsigned char VAR_4, snd_pcm_format_t VAR_5)
{
 unsigned char VAR_6, VAR_7, VAR_8, VAR_9;

 FUNC_4
     ("setsampleformat mixer: %d id: %d channels: %d format: %d\n",
      VAR_2, VAR_3, VAR_4, VAR_5);
 VAR_7 = VAR_4 == 1;
 VAR_6 = FUNC_3(VAR_5) == 8;
 VAR_8 = FUNC_2(VAR_5) != 0;
 VAR_9 = FUNC_1(VAR_5) != 0;

 if (FUNC_0(VAR_1, VAR_2, VAR_6, VAR_7, VAR_9, VAR_8, VAR_3) &&
     FUNC_0(VAR_1, VAR_2, VAR_6, VAR_7, VAR_9, VAR_8, VAR_3)) {
  FUNC_4("setsampleformat failed\n");
  return -VAR_0;
 }
 return 0;
}
