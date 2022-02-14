
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UCHAR ;
typedef int SIZE_T ;
typedef scalar_t__ PUCHAR ;
typedef scalar_t__* PLONG ;
typedef int NTSTATUS ;
typedef scalar_t__ LONG ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__ const,scalar_t__ const,int const*,scalar_t__*,int ) ;

NTSTATUS FUNC_2(PUCHAR *VAR_1, const PUCHAR VAR_2, const PUCHAR VAR_3, const UCHAR *VAR_4, SIZE_T VAR_5, LONG VAR_6)
{
 NTSTATUS VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_1, VAR_5);
 if(FUNC_0(VAR_7))
 {
  *VAR_1 += VAR_6;






  if(!*VAR_1)
   VAR_7 = VAR_0;
 }
 return VAR_7;
}
