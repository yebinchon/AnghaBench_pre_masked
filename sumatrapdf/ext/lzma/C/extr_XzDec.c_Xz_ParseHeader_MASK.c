
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SRes ;
typedef scalar_t__ CXzStreamFlags ;
typedef int Byte ;


 scalar_t__ FUNC_0 (int const*,int) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__) ;

SRes FUNC_4(CXzStreamFlags *VAR_5, const Byte *VAR_6)
{
  *VAR_5 = (CXzStreamFlags)FUNC_1(VAR_6 + VAR_3);
  if (FUNC_0(VAR_6 + VAR_3, VAR_4) !=
      FUNC_2(VAR_6 + VAR_3 + VAR_4))
    return VAR_0;
  return FUNC_3(*VAR_5) ? VAR_2 : VAR_1;
}
