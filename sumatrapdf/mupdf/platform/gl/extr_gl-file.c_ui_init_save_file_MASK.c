
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* filter ) (char const*) ;int input_file; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (int *,char*) ;

void FUNC_5(const char *VAR_2, int (*VAR_3)(const char *VAR_4))
{
 char VAR_5[VAR_0], *VAR_6;
 VAR_1.filter = VAR_3;
 FUNC_1(VAR_5, VAR_2, sizeof VAR_5);
 for (VAR_6=VAR_5; *VAR_6; ++VAR_6)
  if (*VAR_6 == '\\') *VAR_6 = '/';
 FUNC_0(VAR_5);
 VAR_6 = FUNC_3(VAR_5, '/');
 if (VAR_6)
 {
  *VAR_6 = 0;
  FUNC_2(VAR_5);
  FUNC_4(&VAR_1.input_file, VAR_6+1);
 }
 else
 {
  FUNC_2(".");
  FUNC_4(&VAR_1.input_file, VAR_5);
 }
}
