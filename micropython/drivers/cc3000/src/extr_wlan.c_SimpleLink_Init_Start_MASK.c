
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_2__ {int * pucTxCommandBuffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,int *,int ) ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static void FUNC_3(UINT16 VAR_6)
{
 UINT8 *VAR_7;
 UINT8 *VAR_8;

 VAR_7 = VAR_5.pucTxCommandBuffer;
 VAR_8 = (UINT8 *)(VAR_7 + VAR_1);

 FUNC_1(VAR_8, ((VAR_6) ? VAR_3 : VAR_2));


 FUNC_2(VAR_0, VAR_7, VAR_4);

 FUNC_0(VAR_0, 0);
}
