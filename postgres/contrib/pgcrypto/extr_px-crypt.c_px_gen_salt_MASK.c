
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct generator {int def_rounds; int min_rounds; int max_rounds; char* (* gen ) (int,char*,int ,char*,int ) ;int input_len; int * name; } ;
typedef int rbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct generator* VAR_4 ;
 scalar_t__ FUNC_0 (int *,char const*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int,char*,int ,char*,int ) ;

int
FUNC_5(const char *VAR_5, char *VAR_6, int VAR_7)
{
 struct generator *VAR_8;
 char *VAR_9;
 char VAR_10[16];

 for (VAR_8 = VAR_4; VAR_8->name; VAR_8++)
  if (FUNC_0(VAR_8->name, VAR_5) == 0)
   break;

 if (VAR_8->name == ((void*)0))
  return VAR_2;

 if (VAR_8->def_rounds)
 {
  if (VAR_7 == 0)
   VAR_7 = VAR_8->def_rounds;

  if (VAR_7 < VAR_8->min_rounds || VAR_7 > VAR_8->max_rounds)
   return VAR_0;
 }

 if (!FUNC_1(VAR_10, VAR_8->input_len))
  return VAR_1;

 VAR_9 = VAR_8->gen(VAR_7, VAR_10, VAR_8->input_len, VAR_6, VAR_3);
 FUNC_2(VAR_10, 0, sizeof(VAR_10));

 if (VAR_9 == ((void*)0))
  return VAR_0;

 return FUNC_3(VAR_9);
}
