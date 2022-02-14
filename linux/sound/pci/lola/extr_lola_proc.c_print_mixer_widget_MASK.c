
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_buffer {int dummy; } ;
struct lola {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct lola*,int,int ,unsigned int*) ;
 int FUNC_1 (struct snd_info_buffer*,char*,int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct snd_info_buffer *VAR_1,
          struct lola *VAR_2, int VAR_3)
{
 unsigned int VAR_4;

 FUNC_0(VAR_2, VAR_3, VAR_0, &VAR_4);
 FUNC_1(VAR_1, "Node 0x%02x [Mixer] wcaps 0x%x\n", VAR_3, VAR_4);
}
