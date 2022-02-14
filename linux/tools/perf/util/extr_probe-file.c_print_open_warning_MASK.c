
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 char const* FUNC_1 (int,char*,int) ;

__attribute__((used)) static void FUNC_2(int VAR_3, bool VAR_4)
{
 char VAR_5[VAR_2];

 if (VAR_3 == -VAR_0) {
  const char *VAR_6;

  if (VAR_4)
   VAR_6 = "CONFIG_UPROBE_EVENTS";
  else
   VAR_6 = "CONFIG_KPROBE_EVENTS";

  FUNC_0("%cprobe_events file does not exist"
      " - please rebuild kernel with %s.\n",
      VAR_4 ? 'u' : 'k', VAR_6);
 } else if (VAR_3 == -VAR_1)
  FUNC_0("Tracefs or debugfs is not mounted.\n");
 else
  FUNC_0("Failed to open %cprobe_events: %s\n",
      VAR_4 ? 'u' : 'k',
      FUNC_1(-VAR_3, VAR_5, sizeof(VAR_5)));
}
