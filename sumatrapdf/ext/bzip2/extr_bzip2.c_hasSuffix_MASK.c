
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Int32 ;
typedef int const Char ;
typedef int Bool ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const*,int const*) ;
 scalar_t__ FUNC_1 (int const*) ;

__attribute__((used)) static
Bool FUNC_2 ( Char* VAR_2, const Char* VAR_3 )
{
   Int32 VAR_4 = FUNC_1(VAR_2);
   Int32 VAR_5 = FUNC_1(VAR_3);
   if (VAR_4 < VAR_5) return VAR_0;
   if (FUNC_0(VAR_2 + VAR_4 - VAR_5, VAR_3) == 0) return VAR_1;
   return VAR_0;
}
