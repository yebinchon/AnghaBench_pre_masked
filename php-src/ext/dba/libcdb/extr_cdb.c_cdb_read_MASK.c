
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
struct cdb {int fp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,int ,int ) ;

int FUNC_2(struct cdb *VAR_4, char *VAR_5, unsigned int VAR_6, uint32 VAR_7)
{
 if (FUNC_1(VAR_4->fp, VAR_7, VAR_2) == -1) {
  VAR_3 = VAR_1;
  return -1;
 }
 while (VAR_6 > 0) {
  int VAR_8;
  do {
   VAR_8 = FUNC_0(VAR_4->fp, VAR_5, VAR_6);
  } while ((VAR_8 == -1) && (VAR_3 == VAR_0));
  if (VAR_8 == -1)
   return -1;
  if (VAR_8 == 0) {
   VAR_3 = VAR_1;
   return -1;
  }
  VAR_5 += VAR_8;
  VAR_6 -= VAR_8;
 }
 return 0;
}
