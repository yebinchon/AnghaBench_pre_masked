
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int BaudRate; void* fRtsControl; void* fDtrControl; void* fOutxDsrFlow; void* fOutxCtsFlow; void* fOutX; void* fInX; int StopBits; int ByteSize; int Parity; } ;
typedef TYPE_1__* LPDCB ;
typedef char* LPCWSTR ;
typedef void* BOOL ;


 char* FUNC_0 (char*,int *) ;
 char* FUNC_1 (char*,int*) ;
 char* FUNC_2 (char*,int *) ;
 char* FUNC_3 (char*,int *) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static BOOL FUNC_5(LPCWSTR VAR_6, LPDCB VAR_7)
{
 WCHAR VAR_8 = 0;

 if(!(VAR_6 = FUNC_1(VAR_6, &VAR_7->BaudRate)))
  return VAR_2;

 switch(VAR_7->BaudRate)
 {
 case 11:
 case 30:
 case 60:
  VAR_7->BaudRate *= 10;
  break;
 case 12:
 case 24:
 case 48:
 case 96:
  VAR_7->BaudRate *= 100;
  break;
 case 19:
  VAR_7->BaudRate = 19200;
  break;
 }

 while(*VAR_6 == ' ') VAR_6++;
 if(*VAR_6++ != ',') return VAR_2;
 while(*VAR_6 == ' ') VAR_6++;

 if(!(VAR_6 = FUNC_2(VAR_6, &VAR_7->Parity)))
  return VAR_2;

 while(*VAR_6 == ' ') VAR_6++;
 if(*VAR_6++ != ',') return VAR_2;
 while(*VAR_6 == ' ') VAR_6++;

 if(!(VAR_6 = FUNC_0(VAR_6, &VAR_7->ByteSize)))
  return VAR_2;

 while(*VAR_6 == ' ') VAR_6++;
 if(*VAR_6++ != ',') return VAR_2;
 while(*VAR_6 == ' ') VAR_6++;

 if(!(VAR_6 = FUNC_3(VAR_6, &VAR_7->StopBits)))
  return VAR_2;


 while(*VAR_6 == ' ') VAR_6++;
 if(*VAR_6 == ',')
 {
  VAR_6++;
  while(*VAR_6 == ' ') VAR_6++;
  if(*VAR_6) VAR_8 = FUNC_4(*VAR_6++);
  while(*VAR_6 == ' ') VAR_6++;
 }



 switch(VAR_8)
 {
 case 0:
  VAR_7->fInX = VAR_2;
  VAR_7->fOutX = VAR_2;
  VAR_7->fOutxCtsFlow = VAR_2;
  VAR_7->fOutxDsrFlow = VAR_2;
  VAR_7->fDtrControl = VAR_0;
  VAR_7->fRtsControl = VAR_3;
  break;
 case 'X':
  VAR_7->fInX = VAR_5;
  VAR_7->fOutX = VAR_5;
  VAR_7->fOutxCtsFlow = VAR_2;
  VAR_7->fOutxDsrFlow = VAR_2;
  VAR_7->fDtrControl = VAR_0;
  VAR_7->fRtsControl = VAR_3;
  break;
 case 'P':
  VAR_7->fInX = VAR_2;
  VAR_7->fOutX = VAR_2;
  VAR_7->fOutxCtsFlow = VAR_5;
  VAR_7->fOutxDsrFlow = VAR_5;
  VAR_7->fDtrControl = VAR_1;
  VAR_7->fRtsControl = VAR_4;
  break;
 default:
  return VAR_2;
 }


 if(*VAR_6) return VAR_2;

 return VAR_5;
}
