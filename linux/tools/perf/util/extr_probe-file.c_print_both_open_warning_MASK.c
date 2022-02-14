
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,char*,int) ;

__attribute__((used)) static void FUNC_2(int VAR_3, int VAR_4)
{

 if (VAR_3 == -VAR_1 && VAR_4 == -VAR_1)
  FUNC_0("Tracefs or debugfs is not mounted.\n");
 else if (VAR_3 == -VAR_0 && VAR_4 == -VAR_0)
  FUNC_0("Please rebuild kernel with CONFIG_KPROBE_EVENTS "
      "or/and CONFIG_UPROBE_EVENTS.\n");
 else {
  char VAR_5[VAR_2];
  FUNC_0("Failed to open kprobe events: %s.\n",
      FUNC_1(-VAR_3, VAR_5, sizeof(VAR_5)));
  FUNC_0("Failed to open uprobe events: %s.\n",
      FUNC_1(-VAR_4, VAR_5, sizeof(VAR_5)));
 }
}
