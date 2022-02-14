
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_2__ {int * pucTxCommandBuffer; } ;
typedef int INT32 ;
typedef char CHAR ;


 int FUNC_0 (int *,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,int ) ;
 TYPE_1__ VAR_4 ;

INT32 FUNC_3(CHAR* VAR_5)
{
 INT32 VAR_6;
 UINT8 *VAR_7;
 UINT8 *VAR_8;

 VAR_6 = VAR_0;
 VAR_7 = VAR_4.pucTxCommandBuffer;
 VAR_8 = (VAR_7 + VAR_2);

 if (VAR_5 == ((void*)0))
  return VAR_6;
 else
 {
  *VAR_5 = 'T';
  *(VAR_5 + 1) = 'T';
  *(VAR_5 + 2) = 'T';
 }

 FUNC_0(VAR_8, VAR_5, VAR_3);

 FUNC_2(VAR_1, VAR_7,
  VAR_3);


 FUNC_1(VAR_1, &VAR_6);

 return(VAR_6);
}
