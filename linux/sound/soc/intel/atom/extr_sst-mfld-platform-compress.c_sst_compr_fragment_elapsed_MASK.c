
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_compr_stream {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct snd_compr_stream*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct snd_compr_stream *VAR_1 = (struct snd_compr_stream *)VAR_0;

 FUNC_0("fragment elapsed by driver\n");
 if (VAR_1)
  FUNC_1(VAR_1);
}
