
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BYTE ;


 int * FUNC_0 (int const*,int const*) ;
 size_t const FUNC_1 (int const*,int const*,int const*) ;

__attribute__((used)) static size_t FUNC_2(const BYTE *VAR_0, const BYTE *VAR_1, const BYTE *VAR_2, const BYTE *VAR_3, const BYTE *VAR_4)
{
 const BYTE *const VAR_5 = FUNC_0(VAR_0 + (VAR_3 - VAR_1), VAR_2);
 size_t const VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_5);
 if (VAR_1 + VAR_6 != VAR_3)
  return VAR_6;
 return VAR_6 + FUNC_1(VAR_0 + VAR_6, VAR_4, VAR_2);
}
