
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdb_make {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cdb_make*,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (char*,unsigned int) ;

int FUNC_2(struct cdb_make *VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 char VAR_5[8];

 if (VAR_3 > 0xffffffff) {
  VAR_1 = VAR_0;
  return -1;
 }
 if (VAR_4 > 0xffffffff) {
  VAR_1 = VAR_0;
  return -1;
 }

 FUNC_1(VAR_5, VAR_3);
 FUNC_1(VAR_5 + 4, VAR_4);
 if (FUNC_0(VAR_2, VAR_5, 8) != 0)
  return -1;
 return 0;
}
