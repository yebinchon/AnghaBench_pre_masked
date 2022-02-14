
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bench_mem_info {int usage; int do_gettimeofday; int do_cycles; int functions; } ;


 int FUNC_0 (int,char const**,struct bench_mem_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_1(int VAR_4, const char **VAR_5)
{
 struct bench_mem_info VAR_6 = {
  .functions = VAR_3,
  .do_cycles = VAR_1,
  .do_gettimeofday = VAR_2,
  .usage = VAR_0,
 };

 return FUNC_0(VAR_4, VAR_5, &VAR_6);
}
