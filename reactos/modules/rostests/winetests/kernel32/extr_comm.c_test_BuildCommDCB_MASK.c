
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int timeouts2; int dcb2; int timeouts1; int dcb1; int string; } ;
typedef int DWORD ;
typedef int COMMCONFIG ;


 scalar_t__ FUNC_0 (char*,int *,int*) ;
 unsigned int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 char* FUNC_2 (char*,char*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (char*,TYPE_1__*,int,int *) ;
 int FUNC_4 (char*,TYPE_1__*,int,int *,int *) ;
 int FUNC_5 (char*,TYPE_1__*,int,int *,int *) ;
 int FUNC_6 (char*,TYPE_1__*,int,int *) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
 char VAR_2[] = "COMx";
 char VAR_3 = 0;
 unsigned int VAR_4;
 char *VAR_5;



 for(VAR_2[3] = '1'; VAR_2[3] <= '9'; VAR_2[3]++)
 {
  COMMCONFIG VAR_6;
  DWORD VAR_7 = sizeof(COMMCONFIG);

  if(FUNC_0(VAR_2, &VAR_6, &VAR_7))
  {
   VAR_3 = VAR_2[3];
   break;
  }
 }

 if(!VAR_3)
  FUNC_7("Could not find a valid COM port.  Some tests will be skipped.\n");

 for(VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
 {
                char VAR_8[sizeof(VAR_1[VAR_4].string)];

                FUNC_1(VAR_8, VAR_1[VAR_4].string);


  VAR_5 = FUNC_2(VAR_8, "COMx");


  if(VAR_5)
  {
   if(VAR_3)
    VAR_5[3] = VAR_3;
   else
    continue;
  }

  FUNC_3(VAR_8, &VAR_1[VAR_4], 0x00, &VAR_1[VAR_4].dcb1);
  FUNC_3(VAR_8, &VAR_1[VAR_4], 0xff, &VAR_1[VAR_4].dcb2);
  FUNC_4(VAR_8, &VAR_1[VAR_4], 0x00, &VAR_1[VAR_4].dcb1, &VAR_1[VAR_4].timeouts1);
  FUNC_4(VAR_8, &VAR_1[VAR_4], 0xff, &VAR_1[VAR_4].dcb2, &VAR_1[VAR_4].timeouts2);

  FUNC_6(VAR_8, &VAR_1[VAR_4], 0x00, &VAR_1[VAR_4].dcb1);
  FUNC_6(VAR_8, &VAR_1[VAR_4], 0xff, &VAR_1[VAR_4].dcb2);
  FUNC_5(VAR_8, &VAR_1[VAR_4], 0x00, &VAR_1[VAR_4].dcb1, &VAR_1[VAR_4].timeouts1);
  FUNC_5(VAR_8, &VAR_1[VAR_4], 0xff, &VAR_1[VAR_4].dcb2, &VAR_1[VAR_4].timeouts2);
 }
}
