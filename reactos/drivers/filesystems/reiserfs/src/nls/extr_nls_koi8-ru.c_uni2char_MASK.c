
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_2__ {int (* uni2char ) (int const,unsigned char*,int) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int const,unsigned char*,int) ;
 int FUNC_1 (int const,unsigned char*,int) ;

__attribute__((used)) static int FUNC_2(const wchar_t VAR_2,
      unsigned char *VAR_3, int VAR_4)
{
 if (VAR_4 <= 0)
  return -VAR_0;

 if ((VAR_2 & 0xffaf) == 0x040e || (VAR_2 & 0xffce) == 0x254c) {

  if (VAR_2 == 0x040e)
   return 0xbe;
  else if (VAR_2 == 0x045e)
   return 0xae;
  else if (VAR_2 == 0x255d || VAR_2 == 0x256c)
   return 0;
  else
   return VAR_1->uni2char(VAR_2, VAR_3, VAR_4);
 }
 else

  return VAR_1->uni2char(VAR_2, VAR_3, VAR_4);
}
