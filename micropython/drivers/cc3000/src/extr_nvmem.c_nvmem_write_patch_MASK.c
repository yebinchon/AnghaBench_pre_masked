
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT32 ;
typedef int UINT16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,int ,scalar_t__*) ;

UINT8 FUNC_1(UINT32 VAR_1, UINT32 VAR_2, const UINT8 *VAR_3)
{
 UINT8 VAR_4 = 0;
 UINT16 VAR_5 = 0;
 UINT8* VAR_6 = (UINT8*)VAR_3;

 while ((VAR_4 == 0) && (VAR_2 >= VAR_0))
 {
  VAR_4 = FUNC_0(VAR_1, VAR_0, VAR_5, VAR_6);
  VAR_5 += VAR_0;
  VAR_2 -= VAR_0;
  VAR_6 += VAR_0;
 }

 if (VAR_4 !=0)
 {

  return VAR_4;
 }

 if (VAR_2 != 0)
 {

  VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_5, VAR_6);
 }

 return VAR_4;
}
