
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT8 ;
typedef int UINT16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__*,scalar_t__) ;
 scalar_t__* FUNC_1 (scalar_t__*,int ) ;
 int FUNC_2 (scalar_t__*,scalar_t__) ;

UINT16 FUNC_3(UINT16 VAR_3, UINT8 *VAR_4, UINT8 VAR_5)
{
 UINT8 *VAR_6;

 VAR_6 = (VAR_4 + VAR_2);

 FUNC_2(VAR_6, VAR_0);
 VAR_6 = FUNC_1(VAR_6, VAR_3);
 FUNC_2(VAR_6, VAR_5);


 FUNC_0(VAR_4, VAR_5 + VAR_1);

 return(0);
}
