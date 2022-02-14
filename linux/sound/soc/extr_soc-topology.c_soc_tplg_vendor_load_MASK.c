
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_tplg {scalar_t__ pass; } ;
struct snd_soc_tplg_hdr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct soc_tplg*,struct snd_soc_tplg_hdr*) ;

__attribute__((used)) static int FUNC_1(struct soc_tplg *VAR_1,
 struct snd_soc_tplg_hdr *VAR_2)
{
 if (VAR_1->pass != VAR_0)
  return 0;

 return FUNC_0(VAR_1, VAR_2);
}
