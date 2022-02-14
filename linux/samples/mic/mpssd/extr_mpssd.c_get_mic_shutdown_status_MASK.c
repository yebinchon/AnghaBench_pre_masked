
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mic_info {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3(struct mic_info *VAR_5, char *VAR_6)
{
 if (!FUNC_2(VAR_6, "nop"))
  return VAR_2;
 if (!FUNC_2(VAR_6, "crashed"))
  return VAR_0;
 if (!FUNC_2(VAR_6, "halted"))
  return VAR_1;
 if (!FUNC_2(VAR_6, "poweroff"))
  return VAR_3;
 if (!FUNC_2(VAR_6, "restart"))
  return VAR_4;
 FUNC_1("%s: BUG invalid status %s\n", VAR_5->name, VAR_6);

 FUNC_0(0);
}
