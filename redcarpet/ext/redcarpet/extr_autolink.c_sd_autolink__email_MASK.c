
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct buf {int dummy; } ;


 size_t FUNC_0 (char*,size_t,size_t,size_t) ;
 int FUNC_1 (struct buf*,char*,size_t) ;
 scalar_t__ FUNC_2 (char) ;
 int * FUNC_3 (char*,char) ;

size_t
FUNC_4(
 size_t *VAR_0,
 struct buf *VAR_1,
 uint8_t *VAR_2,
 size_t VAR_3,
 size_t VAR_4,
 unsigned int VAR_5)
{
 size_t VAR_6, VAR_7;
 int VAR_8 = 0, VAR_9 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7) {
  uint8_t VAR_10 = VAR_2[-VAR_7 - 1];

  if (FUNC_2(VAR_10))
   continue;

  if (FUNC_3(".+-_", VAR_10) != ((void*)0))
   continue;

  break;
 }

 if (VAR_7 == 0)
  return 0;

 for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6) {
  uint8_t VAR_11 = VAR_2[VAR_6];

  if (FUNC_2(VAR_11))
   continue;

  if (VAR_11 == '@')
   VAR_8++;
  else if (VAR_11 == '.' && VAR_6 < VAR_4 - 1)
   VAR_9++;
  else if (VAR_11 != '-' && VAR_11 != '_')
   break;
 }

 if (VAR_6 < 2 || VAR_8 != 1 || VAR_9 == 0)
  return 0;

 VAR_6 = FUNC_0(VAR_2, VAR_6, VAR_3, VAR_4);

 if (VAR_6 == 0)
  return 0;

 FUNC_1(VAR_1, VAR_2 - VAR_7, VAR_6 + VAR_7);
 *VAR_0 = VAR_7;

 return VAR_6;
}
