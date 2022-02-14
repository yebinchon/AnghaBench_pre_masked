
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UCHAR ;
typedef int SIZE_T ;
typedef scalar_t__ PUCHAR ;
typedef int NTSTATUS ;


 scalar_t__ FUNC_0 (int const*,scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;

NTSTATUS FUNC_1(const PUCHAR VAR_2, const PUCHAR VAR_3, const UCHAR *VAR_4, PUCHAR *VAR_5, SIZE_T VAR_6)
{
 for(*VAR_5 = VAR_2; (VAR_3 > VAR_2) ? (*VAR_5 <= VAR_3) : (*VAR_5 >= VAR_3); *VAR_5 += (VAR_3 > VAR_2) ? 1 : -1)
  if(FUNC_0(VAR_4, *VAR_5, VAR_6))
   return VAR_1;
 *VAR_5 = ((void*)0);
 return VAR_0;
}
