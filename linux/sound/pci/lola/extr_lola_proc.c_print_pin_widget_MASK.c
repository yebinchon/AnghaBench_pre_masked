
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_buffer {int dummy; } ;
struct lola {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct lola*,int,int ,int ,int ,unsigned int*,int *) ;
 int FUNC_5 (struct lola*,int,unsigned int,unsigned int*) ;
 int FUNC_6 (struct snd_info_buffer*,char*,unsigned int,...) ;

__attribute__((used)) static void FUNC_7(struct snd_info_buffer *VAR_2,
        struct lola *VAR_3, int VAR_4, unsigned int VAR_5,
        const char *VAR_6)
{
 unsigned int VAR_7;

 FUNC_5(VAR_3, VAR_4, VAR_0, &VAR_7);
 FUNC_6(VAR_2, "Node 0x%02x %s wcaps 0x%x\n", VAR_4, VAR_6, VAR_7);
 if (VAR_7 == 0x00400200)
  return;
 FUNC_5(VAR_3, VAR_4, VAR_5, &VAR_7);
 FUNC_6(VAR_2, "  Amp-Caps: 0x%x\n", VAR_7);
 FUNC_6(VAR_2, "    mute=%d, step-size=%d, steps=%d, ofs=%d\n",
      FUNC_0(VAR_7),
      FUNC_3(VAR_7),
      FUNC_1(VAR_7),
      FUNC_2(VAR_7));
 FUNC_4(VAR_3, VAR_4, VAR_1, 0, 0, &VAR_7, ((void*)0));
 FUNC_6(VAR_2, "  Max-level: 0x%x\n", VAR_7);
}
