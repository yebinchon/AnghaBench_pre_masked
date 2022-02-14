
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct sd_markdown {int dummy; } ;
struct buf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char) ;
 int* FUNC_1 (size_t,int) ;
 int FUNC_2 (struct buf*,struct sd_markdown*,char*,size_t,size_t,int*,int ) ;

__attribute__((used)) static size_t
FUNC_3(
 struct buf *VAR_3,
 struct sd_markdown *VAR_4,
 uint8_t *VAR_5,
 size_t VAR_6,
 size_t *VAR_7,
 int **VAR_8)
{
 int VAR_9;
 size_t VAR_10 = 0, VAR_11, VAR_12, VAR_13;

 VAR_9 = 0;
 while (VAR_10 < VAR_6 && VAR_5[VAR_10] != '\n')
  if (VAR_5[VAR_10++] == '|')
   VAR_9++;

 if (VAR_10 == VAR_6 || VAR_9 == 0)
  return 0;

 VAR_12 = VAR_10;

 while (VAR_12 > 0 && FUNC_0(VAR_5[VAR_12 - 1]))
  VAR_12--;

 if (VAR_5[0] == '|')
  VAR_9--;

 if (VAR_12 && VAR_5[VAR_12 - 1] == '|')
  VAR_9--;

 *VAR_7 = VAR_9 + 1;
 *VAR_8 = FUNC_1(*VAR_7, sizeof(int));


 VAR_10++;
 if (VAR_10 < VAR_6 && VAR_5[VAR_10] == '|')
  VAR_10++;

 VAR_13 = VAR_10;
 while (VAR_13 < VAR_6 && VAR_5[VAR_13] != '\n')
  VAR_13++;

 for (VAR_11 = 0; VAR_11 < *VAR_7 && VAR_10 < VAR_13; ++VAR_11) {
  size_t VAR_14 = 0;

  while (VAR_10 < VAR_13 && VAR_5[VAR_10] == ' ')
   VAR_10++;

  if (VAR_5[VAR_10] == ':') {
   VAR_10++; (*VAR_8)[VAR_11] |= VAR_0;
   VAR_14++;
  }

  while (VAR_10 < VAR_13 && VAR_5[VAR_10] == '-') {
   VAR_10++; VAR_14++;
  }

  if (VAR_10 < VAR_13 && VAR_5[VAR_10] == ':') {
   VAR_10++; (*VAR_8)[VAR_11] |= VAR_1;
   VAR_14++;
  }

  while (VAR_10 < VAR_13 && VAR_5[VAR_10] == ' ')
   VAR_10++;

  if (VAR_10 < VAR_13 && VAR_5[VAR_10] != '|' && VAR_5[VAR_10] != '+')
   break;

  if (VAR_14 < 1)
   break;

  VAR_10++;
 }

 if (VAR_11 < *VAR_7)
  return 0;

 FUNC_2(
  VAR_3, VAR_4, VAR_5,
  VAR_12,
  *VAR_7,
  *VAR_8,
  VAR_2
 );

 return VAR_13 + 1;
}
