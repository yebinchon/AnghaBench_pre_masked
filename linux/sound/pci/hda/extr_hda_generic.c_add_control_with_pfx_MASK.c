
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_gen_spec {int dummy; } ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_gen_spec*,int,char*,int,unsigned long) ;
 int FUNC_1 (char*,int,char*,char const*,char const*,char const*) ;

__attribute__((used)) static int FUNC_2(struct hda_gen_spec *VAR_2, int VAR_3,
    const char *VAR_4, const char *VAR_5,
    const char *VAR_6, int VAR_7, unsigned long VAR_8)
{
 char VAR_9[VAR_1];
 FUNC_1(VAR_9, sizeof(VAR_9), "%s %s %s", VAR_4, VAR_5, VAR_6);
 if (!FUNC_0(VAR_2, VAR_3, VAR_9, VAR_7, VAR_8))
  return -VAR_0;
 return 0;
}
