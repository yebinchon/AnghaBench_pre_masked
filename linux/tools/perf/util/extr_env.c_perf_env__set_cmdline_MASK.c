
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_env {char const** cmdline_argv; int nr_cmdline; } ;


 int VAR_0 ;
 char const** FUNC_0 (int,int) ;
 int FUNC_1 (char const***) ;

int FUNC_2(struct perf_env *VAR_1, int VAR_2, const char *VAR_3[])
{
 int VAR_4;


 VAR_1->cmdline_argv = FUNC_0(VAR_2, sizeof(char *));
 if (VAR_1->cmdline_argv == ((void*)0))
  goto out_enomem;





 for (VAR_4 = 0; VAR_4 < VAR_2 ; VAR_4++) {
  VAR_1->cmdline_argv[VAR_4] = VAR_3[VAR_4];
  if (VAR_1->cmdline_argv[VAR_4] == ((void*)0))
   goto out_free;
 }

 VAR_1->nr_cmdline = VAR_2;

 return 0;
out_free:
 FUNC_1(&VAR_1->cmdline_argv);
out_enomem:
 return -VAR_0;
}
