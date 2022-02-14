
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_probe_event {int dummy; } ;


 int VAR_0 ;
 char const* FUNC_0 (int) ;
 int FUNC_1 (char*,char*,struct perf_probe_event*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 char* FUNC_5 (char*,char) ;
 char* FUNC_6 (char const*) ;

__attribute__((used)) static const char *
FUNC_7(const char *VAR_1, struct perf_probe_event *VAR_2)
{
 char *VAR_3 = FUNC_6(VAR_1);
 char *VAR_4, *VAR_5;
 const char *VAR_6 = ((void*)0);
 int VAR_7 = 0;

 if (!VAR_3) {
  FUNC_3("Not enough memory: dup config_str failed\n");
  return FUNC_0(-VAR_0);
 }

 VAR_5 = VAR_3;
 while ((VAR_4 = FUNC_5(VAR_5, ';'))) {
  char *VAR_8;

  *VAR_4 = '\0';
  VAR_8 = FUNC_5(VAR_5, '=');
  if (!VAR_8) {
   FUNC_4("WARNING: invalid config in BPF object: %s\n",
       VAR_5);
   FUNC_4("\tShould be 'key=value'.\n");
   goto nextline;
  }
  *VAR_8 = '\0';

  VAR_7 = FUNC_1(VAR_5, VAR_8 + 1, VAR_2);
  if (VAR_7)
   break;
nextline:
  VAR_5 = VAR_4 + 1;
 }

 if (!VAR_7)
  VAR_6 = VAR_1 + (VAR_5 - VAR_3);
 FUNC_2(VAR_3);

 return VAR_7 ? FUNC_0(VAR_7) : VAR_6;
}
