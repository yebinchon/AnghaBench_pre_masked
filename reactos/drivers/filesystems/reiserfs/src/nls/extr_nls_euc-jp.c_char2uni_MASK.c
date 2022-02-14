
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
typedef int sjis_temp ;
struct TYPE_2__ {int (* char2uni ) (unsigned char*,int,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned char const,unsigned char const) ;
 scalar_t__ FUNC_1 (unsigned char const,unsigned char const) ;
 scalar_t__ FUNC_2 (unsigned char const,unsigned char const) ;
 scalar_t__ FUNC_3 (unsigned char const,unsigned char const) ;
 int FUNC_4 (unsigned char const,unsigned char const,int,unsigned char,unsigned char,int) ;
 unsigned char const VAR_2 ;
 scalar_t__ FUNC_5 (unsigned char*,unsigned char const,unsigned char const) ;
 TYPE_1__* VAR_3 ;
 int FUNC_6 (unsigned char*,int,int *) ;

__attribute__((used)) static int FUNC_7(const unsigned char *VAR_4, int VAR_5,
      wchar_t *VAR_6)
{
 unsigned char VAR_7[2];
 int VAR_8, VAR_9;

 if ( !VAR_3 )
  return -VAR_0;
 if (VAR_5 <= 0)
  return -VAR_1;


 if (VAR_4[0] > 0x7F) {
  if (VAR_4[0] == VAR_2) {
   if (VAR_5 < 3)
    return -VAR_0;
   VAR_8 = 3;

   if (FUNC_2(VAR_4[1], VAR_4[2])) {

    FUNC_4(VAR_4[1], VAR_4[2], 0xF5,
          VAR_7[0], VAR_7[1], 0xF5);
   } else if (FUNC_5(VAR_7,VAR_4[1],VAR_4[2])) {

   } else {

    return -VAR_0;




   }
  } else {
   if (VAR_5 < 2)
    return -VAR_0;
   VAR_8 = 2;

   if (FUNC_0(VAR_4[0], VAR_4[1])) {

    VAR_7[0] = VAR_4[1];
    VAR_7[1] = 0x00;
   } else if (FUNC_3(VAR_4[0], VAR_4[1])) {

    FUNC_4(VAR_4[0], VAR_4[1], 0xF5,
          VAR_7[0], VAR_7[1], 0xF0);
   } else if (FUNC_1(VAR_4[0], VAR_4[1])) {

    VAR_7[0] = ((VAR_4[0]-0x5f)/2) ^ 0xA0;
    if (!(VAR_4[0] & 1))
     VAR_7[1] = VAR_4[1] - 0x02;
    else if (VAR_4[1] < 0xE0)
     VAR_7[1] = VAR_4[1] - 0x61;
    else
     VAR_7[1] = VAR_4[1] - 0x60;
   } else {

    return -VAR_0;
   }
  }
 } else {
  VAR_8 = 1;


  VAR_7[0] = VAR_4[0];
  VAR_7[1] = 0x00;
 }

 if ( (VAR_9 = VAR_3->char2uni(VAR_7, sizeof(VAR_7), VAR_6)) < 0)
  return VAR_9;

 return VAR_8;
}
