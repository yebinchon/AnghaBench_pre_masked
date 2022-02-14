
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_path {int connect; int sink; int source; } ;


 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (struct snd_soc_dapm_path*) ;

__attribute__((used)) static void FUNC_2(struct snd_soc_dapm_path *VAR_0,
 bool VAR_1, const char *VAR_2)
{
 if (VAR_0->connect == VAR_1)
  return;

 VAR_0->connect = VAR_1;
 FUNC_0(VAR_0->source, VAR_2);
 FUNC_0(VAR_0->sink, VAR_2);
 FUNC_1(VAR_0);
}
