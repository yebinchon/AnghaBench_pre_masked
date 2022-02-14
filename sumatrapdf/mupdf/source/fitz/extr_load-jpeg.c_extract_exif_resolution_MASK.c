
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* jpeg_saved_marker_ptr ;
struct TYPE_3__ {scalar_t__ marker; int data_length; scalar_t__ data; } ;


 float VAR_0 ;
 scalar_t__ VAR_1 ;
 float FUNC_0 (unsigned char const*,int,int) ;

__attribute__((used)) static int FUNC_1(jpeg_saved_marker_ptr VAR_2, int *VAR_3, int *VAR_4)
{
 int VAR_5;
 const unsigned char *VAR_6;
 unsigned int VAR_7, VAR_8, VAR_9 = 0;
 float VAR_10 = 0, VAR_11 = 0;

 if (!VAR_2 || VAR_2->marker != VAR_1 + 1 || VAR_2->data_length < 14)
  return 0;
 VAR_6 = (const unsigned char *)VAR_2->data;
 if (FUNC_0(VAR_6, 4, 1) != 0x45786966 || FUNC_0(VAR_6 + 4, 2, 1) != 0x0000)
  return 0;
 if (FUNC_0(VAR_6 + 6, 4, 1) == 0x49492A00)
  VAR_5 = 0;
 else if (FUNC_0(VAR_6 + 6, 4, 1) == 0x4D4D002A)
  VAR_5 = 1;
 else
  return 0;

 VAR_7 = FUNC_0(VAR_6 + 10, 4, VAR_5) + 6;
 if (VAR_7 < 14 || VAR_7 > VAR_2->data_length - 2)
  return 0;
 VAR_8 = FUNC_0(VAR_6 + VAR_7, 2, VAR_5);
 for (VAR_7 += 2; VAR_8 > 0 && VAR_7 + 12 < VAR_2->data_length; VAR_8--, VAR_7 += 12)
 {
  int VAR_12 = FUNC_0(VAR_6 + VAR_7, 2, VAR_5);
  int VAR_13 = FUNC_0(VAR_6 + VAR_7 + 2, 2, VAR_5);
  int VAR_14 = FUNC_0(VAR_6 + VAR_7 + 4, 4, VAR_5);
  unsigned int VAR_15 = FUNC_0(VAR_6 + VAR_7 + 8, 4, VAR_5) + 6;
  switch (VAR_12)
  {
  case 0x11A:
   if (VAR_13 == 5 && VAR_15 > VAR_7 && VAR_15 <= VAR_2->data_length - 8)
    VAR_10 = 1.0f * FUNC_0(VAR_6 + VAR_15, 4, VAR_5) / FUNC_0(VAR_6 + VAR_15 + 4, 4, VAR_5);
   break;
  case 0x11B:
   if (VAR_13 == 5 && VAR_15 > VAR_7 && VAR_15 <= VAR_2->data_length - 8)
    VAR_11 = 1.0f * FUNC_0(VAR_6 + VAR_15, 4, VAR_5) / FUNC_0(VAR_6 + VAR_15 + 4, 4, VAR_5);
   break;
  case 0x128:
   if (VAR_13 == 3 && VAR_14 == 1)
    VAR_9 = FUNC_0(VAR_6 + VAR_7 + 8, 2, VAR_5);
   break;
  }
 }

 if (VAR_10 <= 0 || VAR_10 > VAR_0 || VAR_11 <= 0 || VAR_11 > VAR_0)
  return 0;
 if (VAR_9 == 2)
 {
  *VAR_3 = (int)VAR_10;
  *VAR_4 = (int)VAR_11;
 }
 else if (VAR_9 == 3)
 {
  *VAR_3 = (int)(VAR_10 * 254 / 100);
  *VAR_4 = (int)(VAR_11 * 254 / 100);
 }
 else
 {
  *VAR_3 = 0;
  *VAR_4 = 0;
 }
 return 1;
}
