
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef int ULONG ;
struct TYPE_2__ {int Buffer; } ;
typedef scalar_t__* PULONG ;
typedef TYPE_1__* PANSI_STRING ;
typedef int LPSTR ;
typedef int CHAR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_3(void)
{
 LPSTR VAR_7,VAR_8;
 ULONG VAR_9;
 ULONG VAR_10,VAR_11,VAR_12;
 PANSI_STRING VAR_13;
  CHAR VAR_14[128];

 FUNC_0((0,"In PrintkCallback\n"));

 VAR_6 = VAR_5;


 VAR_9 = FUNC_1(VAR_2,VAR_1);
 if(VAR_9)
 {
  FUNC_0((0,"In PrintkCallback: ulAddress: %x\n", VAR_9));
  if(FUNC_2(VAR_9+sizeof(char *)) )
  {

   VAR_13 = (PANSI_STRING)*(PULONG)(VAR_9+sizeof(char *));
     FUNC_0((0,"PrintkCallback: %s\n", VAR_13->Buffer));

   VAR_0 = (ULONG_PTR)VAR_4;
  }
 }
 VAR_6 = VAR_3;
}
