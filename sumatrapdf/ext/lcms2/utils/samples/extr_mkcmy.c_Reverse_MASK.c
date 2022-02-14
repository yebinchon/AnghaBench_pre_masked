
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ WORD ;
struct TYPE_2__ {int RGB2Lab; } ;
typedef int LPVOID ;
typedef TYPE_1__* LPCARGO ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__**,scalar_t__*,int) ;

__attribute__((used)) static
int FUNC_1(register WORD VAR_1[], register WORD VAR_2[], register LPVOID VAR_3)
{

 LPCARGO VAR_4 = (LPCARGO) VAR_3;
 WORD VAR_5[3];

 VAR_5[0] = 0xFFFF - VAR_1[0];
 VAR_5[1] = 0xFFFF - VAR_1[1];
 VAR_5[2] = 0xFFFF - VAR_1[2];

 FUNC_0(VAR_4 ->RGB2Lab, &VAR_5, VAR_2, 1);

 return VAR_0;

}
