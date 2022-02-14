
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai_driver {int * name; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct device*) ;
 char* FUNC_2 (int *,int ) ;

__attribute__((used)) static inline char *FUNC_3(struct device *VAR_1,
  struct snd_soc_dai_driver *VAR_2)
{
 if (VAR_2->name == ((void*)0)) {
  FUNC_0(VAR_1,
   "ASoC: error - multiple DAI %s registered with no name\n",
   FUNC_1(VAR_1));
  return ((void*)0);
 }

 return FUNC_2(VAR_2->name, VAR_0);
}
