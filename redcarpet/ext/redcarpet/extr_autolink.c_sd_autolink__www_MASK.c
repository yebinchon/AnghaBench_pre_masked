
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct buf {int dummy; } ;


 size_t FUNC_0 (int *,size_t,size_t,size_t) ;
 int FUNC_1 (struct buf*,int *,size_t) ;
 size_t FUNC_2 (int *,size_t,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (char*) ;

size_t
FUNC_7(
 size_t *VAR_0,
 struct buf *VAR_1,
 uint8_t *VAR_2,
 size_t VAR_3,
 size_t VAR_4,
 unsigned int VAR_5)
{
 size_t VAR_6;

 if (VAR_3 > 0 && !FUNC_3(VAR_2[-1]) && !FUNC_4(VAR_2[-1]))
  return 0;

 if (VAR_4 < 4 || FUNC_5(VAR_2, "www.", FUNC_6("www.")) != 0)
  return 0;

 VAR_6 = FUNC_2(VAR_2, VAR_4, 0);

 if (VAR_6 == 0)
  return 0;

 while (VAR_6 < VAR_4 && !FUNC_4(VAR_2[VAR_6]))
  VAR_6++;

 VAR_6 = FUNC_0(VAR_2, VAR_6, VAR_3, VAR_4);

 if (VAR_6 == 0)
  return 0;

 FUNC_1(VAR_1, VAR_2, VAR_6);
 *VAR_0 = 0;

 return (int)VAR_6;
}
