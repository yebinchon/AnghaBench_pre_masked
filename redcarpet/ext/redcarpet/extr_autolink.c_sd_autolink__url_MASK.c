
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct buf {int dummy; } ;


 unsigned int VAR_0 ;
 size_t FUNC_0 (char*,size_t,size_t,size_t) ;
 int FUNC_1 (struct buf*,char*,size_t) ;
 size_t FUNC_2 (char*,size_t,unsigned int) ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 (char) ;
 int FUNC_5 (char*,size_t) ;
 size_t FUNC_6 (char*) ;

size_t
FUNC_7(
 size_t *VAR_1,
 struct buf *VAR_2,
 uint8_t *VAR_3,
 size_t VAR_4,
 size_t VAR_5,
 unsigned int VAR_6)
{
 size_t VAR_7, VAR_8 = 0, VAR_9;

 if (VAR_5 < 4 || VAR_3[1] != '/' || VAR_3[2] != '/')
  return 0;

 while (VAR_8 < VAR_4 && FUNC_3(VAR_3[-VAR_8 - 1]))
  VAR_8++;

 if (!FUNC_5(VAR_3 - VAR_8, VAR_5 + VAR_8))
  return 0;

 VAR_7 = FUNC_6("://");

 VAR_9 = FUNC_2(
  VAR_3 + VAR_7,
  VAR_5 - VAR_7,
  VAR_6 & VAR_0);

 if (VAR_9 == 0)
  return 0;

 VAR_7 += VAR_9;
 while (VAR_7 < VAR_5 && !FUNC_4(VAR_3[VAR_7]))
  VAR_7++;

 VAR_7 = FUNC_0(VAR_3, VAR_7, VAR_4, VAR_5);

 if (VAR_7 == 0)
  return 0;





 if (VAR_3[VAR_7 - 1] == '.')
  VAR_7--;

 FUNC_1(VAR_2, VAR_3 - VAR_8, VAR_7 + VAR_8);
 *VAR_1 = VAR_8;

 return VAR_7;
}
