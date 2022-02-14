
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int config_fn_t ;
typedef int FILE ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 char const* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,void*) ;

__attribute__((used)) static int FUNC_3(config_fn_t VAR_4, const char *VAR_5, void *VAR_6)
{
 int VAR_7;
 FILE *VAR_8 = FUNC_1(VAR_5, "r");

 VAR_7 = -1;
 if (VAR_8) {
  VAR_0 = VAR_8;
  VAR_2 = VAR_5;
  VAR_3 = 1;
  VAR_1 = 0;
  VAR_7 = FUNC_2(VAR_4, VAR_6);
  FUNC_0(VAR_8);
  VAR_2 = ((void*)0);
 }
 return VAR_7;
}
