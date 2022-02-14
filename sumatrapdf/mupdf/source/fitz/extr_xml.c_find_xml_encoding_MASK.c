
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned short* VAR_0 ;
 unsigned short* VAR_1 ;
 unsigned short* VAR_2 ;
 unsigned short* VAR_3 ;
 unsigned short* VAR_4 ;
 unsigned short* VAR_5 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 char* FUNC_1 (char*,char) ;
 char* FUNC_2 (char*,char*) ;

__attribute__((used)) static const unsigned short *FUNC_3(char *VAR_6)
{
 const unsigned short *VAR_7 = ((void*)0);
 char *VAR_8, *VAR_9, *VAR_10;

 VAR_8 = FUNC_1(VAR_6, '>');
 if (VAR_8)
 {
  *VAR_8 = 0;
  VAR_9 = FUNC_2(VAR_6, "<?xml");
  if (VAR_9)
  {
   VAR_10 = FUNC_2(VAR_9, "encoding=");
   if (VAR_10)
   {
    VAR_10 += 10;
    if (FUNC_0(VAR_10, "iso-8859-1") || FUNC_0(VAR_10, "latin1"))
     VAR_7 = VAR_0;
    else if (FUNC_0(VAR_10, "iso-8859-7") || FUNC_0(VAR_10, "greek"))
     VAR_7 = VAR_1;
    else if (FUNC_0(VAR_10, "koi8"))
     VAR_7 = VAR_2;
    else if (FUNC_0(VAR_10, "windows-1250"))
     VAR_7 = VAR_3;
    else if (FUNC_0(VAR_10, "windows-1251"))
     VAR_7 = VAR_4;
    else if (FUNC_0(VAR_10, "windows-1252"))
     VAR_7 = VAR_5;
   }
  }
  *VAR_8 = '>';
 }

 return VAR_7;
}
