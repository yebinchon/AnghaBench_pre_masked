
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32 ;
struct cdb {int dummy; } ;
typedef int buf ;


 int FUNC_0 (struct cdb*,char*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (char*,char*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct cdb *VAR_0, char *VAR_1, unsigned int VAR_2, uint32 VAR_3)
{
 char VAR_4[32];
 unsigned int VAR_5;

 while (VAR_2 > 0) {
  VAR_5 = sizeof(VAR_4);
  if (VAR_5 > VAR_2)
   VAR_5 = VAR_2;
  if (FUNC_0(VAR_0, VAR_4, VAR_5, VAR_3) == -1)
   return -1;
  if (FUNC_1(VAR_4, VAR_1, VAR_5))
   return 0;
  VAR_3 += VAR_5;
  VAR_1 += VAR_5;
  VAR_2 -= VAR_5;
 }
 return 1;
}
