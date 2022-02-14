
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_buffer {int dummy; } ;
struct lola {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lola*,int,int ,unsigned int*) ;
 int FUNC_1 (struct snd_info_buffer*,char*,unsigned int,...) ;

__attribute__((used)) static void FUNC_2(struct snd_info_buffer *VAR_2,
          struct lola *VAR_3, int VAR_4, const char *VAR_5)
{
 unsigned int VAR_6;

 FUNC_0(VAR_3, VAR_4, VAR_0, &VAR_6);
 FUNC_1(VAR_2, "Node 0x%02x %s wcaps 0x%x\n", VAR_4, VAR_5, VAR_6);
 FUNC_0(VAR_3, VAR_4, VAR_1, &VAR_6);
 FUNC_1(VAR_2, "  Formats: 0x%x\n", VAR_6);
}
