
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;



__attribute__((used)) static int FUNC_0(wchar_t VAR_0)
{

 if (VAR_0 >= 0xd800 && VAR_0 <= 0xdfff)
  return -1;

 return 0;
}
