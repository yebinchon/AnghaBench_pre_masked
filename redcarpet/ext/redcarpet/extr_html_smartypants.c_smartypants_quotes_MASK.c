
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct buf {int dummy; } ;
typedef int ent ;


 int FUNC_0 (struct buf*,char*) ;
 int FUNC_1 (char*,int,char*,char,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct buf *VAR_0, uint8_t VAR_1, uint8_t VAR_2, uint8_t VAR_3, int *VAR_4)
{
 char VAR_5[8];

 if (*VAR_4 && !FUNC_2(VAR_2))
  return 0;

 if (!(*VAR_4) && !FUNC_2(VAR_1))
  return 0;

 FUNC_1(VAR_5, sizeof(VAR_5), "&%c%cquo;", (*VAR_4) ? 'r' : 'l', VAR_3);
 *VAR_4 = !(*VAR_4);
 FUNC_0(VAR_0, VAR_5);
 return 1;
}
