
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* ucArgs ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT16 ;
typedef int INT32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__*,scalar_t__) ;
 scalar_t__* FUNC_1 (scalar_t__*,scalar_t__) ;
 int FUNC_2 (scalar_t__*,scalar_t__) ;

INT32 FUNC_3(UINT8 VAR_4,
 UINT8 *VAR_5,
 UINT16 VAR_6,
 UINT16 VAR_7,
 const UINT8 *VAR_8,
 UINT16 VAR_9)
{
 UINT8 *VAR_10;

 VAR_10 = ((VAR_5) + VAR_3);

 FUNC_2(VAR_10, VAR_1);
 FUNC_2(VAR_10, VAR_4);
 FUNC_2(VAR_10, VAR_6);
 VAR_10 = FUNC_1(VAR_10, VAR_6 + VAR_7 + VAR_9);


 FUNC_0(VAR_5, VAR_2 + VAR_6 + VAR_7 + VAR_9);

 return(VAR_0);
}
