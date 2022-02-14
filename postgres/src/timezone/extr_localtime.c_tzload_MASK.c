
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union local_storage {int dummy; } local_storage ;
struct state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (union local_storage*) ;
 union local_storage* FUNC_1 (int) ;
 int FUNC_2 (char const*,char*,struct state*,int,union local_storage*) ;

int
FUNC_3(const char *VAR_1, char *VAR_2, struct state *VAR_3, bool VAR_4)
{
 union local_storage *VAR_5 = FUNC_1(sizeof *VAR_5);

 if (!VAR_5)
  return VAR_0;
 else
 {
  int VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

  FUNC_0(VAR_5);
  return VAR_6;
 }
}
