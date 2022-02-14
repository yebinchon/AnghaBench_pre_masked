
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_bebob_spec {int dummy; } ;
struct fw_unit {int directory; } ;
typedef int name ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,char*,int) ;
 struct snd_bebob_spec const VAR_1 ;
 struct snd_bebob_spec const VAR_2 ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static const struct snd_bebob_spec *
FUNC_2(struct fw_unit *VAR_3)
{
 char VAR_4[24] = {0};

 if (FUNC_0(VAR_3->directory, VAR_0, VAR_4, sizeof(VAR_4)) < 0)
  return ((void*)0);

 if (FUNC_1(VAR_4, "SaffireLE") == 0)
  return &VAR_1;
 else
  return &VAR_2;
}
