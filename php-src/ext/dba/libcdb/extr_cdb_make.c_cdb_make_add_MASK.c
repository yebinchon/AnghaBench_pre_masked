
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdb_make {int dummy; } ;


 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (struct cdb_make*,unsigned int,unsigned int) ;
 int FUNC_2 (struct cdb_make*,unsigned int,unsigned int,int ) ;
 scalar_t__ FUNC_3 (struct cdb_make*,char*,unsigned int) ;

int FUNC_4(struct cdb_make *VAR_0,char *VAR_1,unsigned int VAR_2,char *VAR_3,unsigned int VAR_4)
{
 if (FUNC_1(VAR_0, VAR_2, VAR_4) == -1)
  return -1;
 if (FUNC_3(VAR_0, VAR_1, VAR_2) != 0)
  return -1;
 if (FUNC_3(VAR_0, VAR_3, VAR_4) != 0)
  return -1;
 return FUNC_2(VAR_0, VAR_2, VAR_4, FUNC_0(VAR_1, VAR_2));
}
