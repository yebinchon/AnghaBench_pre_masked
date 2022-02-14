
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int uint16 ;
typedef int WaitEventTimeout ;
typedef int WaitEventIPC ;
typedef int WaitEventIO ;
typedef int WaitEventClient ;
typedef int WaitEventActivity ;


 char* FUNC_0 (int,int) ;
 char* FUNC_1 (int) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 char* FUNC_5 (int ) ;
 char* FUNC_6 (int ) ;

const char *
FUNC_7(uint32 VAR_0)
{
 uint32 VAR_1;
 uint16 VAR_2;
 const char *VAR_3;


 if (VAR_0 == 0)
  return ((void*)0);

 VAR_1 = VAR_0 & 0xFF000000;
 VAR_2 = VAR_0 & 0x0000FFFF;

 switch (VAR_1)
 {
  case 129:
   VAR_3 = FUNC_0(VAR_1, VAR_2);
   break;
  case 130:
   VAR_3 = FUNC_1(VAR_2);
   break;
  case 135:
   VAR_3 = "BufferPin";
   break;
  case 136:
   {
    WaitEventActivity VAR_4 = (WaitEventActivity) VAR_0;

    VAR_3 = FUNC_2(VAR_4);
    break;
   }
  case 134:
   {
    WaitEventClient VAR_5 = (WaitEventClient) VAR_0;

    VAR_3 = FUNC_3(VAR_5);
    break;
   }
  case 133:
   VAR_3 = "Extension";
   break;
  case 131:
   {
    WaitEventIPC VAR_6 = (WaitEventIPC) VAR_0;

    VAR_3 = FUNC_5(VAR_6);
    break;
   }
  case 128:
   {
    WaitEventTimeout VAR_7 = (WaitEventTimeout) VAR_0;

    VAR_3 = FUNC_6(VAR_7);
    break;
   }
  case 132:
   {
    WaitEventIO VAR_8 = (WaitEventIO) VAR_0;

    VAR_3 = FUNC_4(VAR_8);
    break;
   }
  default:
   VAR_3 = "unknown wait event";
   break;
 }

 return VAR_3;
}
