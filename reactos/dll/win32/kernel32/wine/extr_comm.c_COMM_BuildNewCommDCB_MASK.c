
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_6__ {int WriteTotalTimeoutConstant; scalar_t__ WriteTotalTimeoutMultiplier; scalar_t__ ReadTotalTimeoutConstant; scalar_t__ ReadTotalTimeoutMultiplier; scalar_t__ ReadIntervalTimeout; } ;
struct TYPE_5__ {int BaudRate; int StopBits; void* fDsrSensitivity; void* fRtsControl; void* fDtrControl; void* fOutxCtsFlow; void* fOutxDsrFlow; void* fInX; void* fOutX; int ByteSize; int Parity; } ;
typedef TYPE_1__* LPDCB ;
typedef char* LPCWSTR ;
typedef TYPE_2__* LPCOMMTIMEOUTS ;
typedef void* DWORD ;
typedef scalar_t__ BOOL ;


 char* FUNC_0 (int ,int *) ;
 char* FUNC_1 (int ,int*) ;
 char* FUNC_2 (int ,void**) ;
 char* FUNC_3 (int ,int *) ;
 char* FUNC_4 (int ,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char const*,char*,int) ;

__attribute__((used)) static BOOL FUNC_6(LPCWSTR VAR_4, LPDCB VAR_5, LPCOMMTIMEOUTS VAR_6)
{
 DWORD VAR_7;
 BOOL VAR_8 = VAR_0, VAR_9 = VAR_0;
 static const WCHAR VAR_10[] = {'b','a','u','d','=',0};
 static const WCHAR VAR_11[] = {'p','a','r','i','t','y','=',0};
 static const WCHAR VAR_12[] = {'d','a','t','a','=',0};
 static const WCHAR VAR_13[] = {'s','t','o','p','=',0};
 static const WCHAR VAR_14[] = {'t','o','=',0};
 static const WCHAR VAR_15[] = {'x','o','n','=',0};
 static const WCHAR VAR_16[] = {'o','d','s','r','=',0};
 static const WCHAR VAR_17[] = {'o','c','t','s','=',0};
 static const WCHAR VAR_18[] = {'d','t','r','=',0};
 static const WCHAR VAR_19[] = {'r','t','s','=',0};
 static const WCHAR VAR_20[] = {'i','d','s','r','=',0};

 while(*VAR_4)
 {
  while(*VAR_4 == ' ') VAR_4++;

  if(!FUNC_5(VAR_10, VAR_4, 5))
  {
   VAR_8 = VAR_2;

   if(!(VAR_4 = FUNC_1(VAR_4 + 5, &VAR_5->BaudRate)))
    return VAR_0;
  }
  else if(!FUNC_5(VAR_11, VAR_4, 7))
  {
   if(!(VAR_4 = FUNC_3(VAR_4 + 7, &VAR_5->Parity)))
    return VAR_0;
  }
  else if(!FUNC_5(VAR_12, VAR_4, 5))
  {
   if(!(VAR_4 = FUNC_0(VAR_4 + 5, &VAR_5->ByteSize)))
    return VAR_0;
  }
  else if(!FUNC_5(VAR_13, VAR_4, 5))
  {
   VAR_9 = VAR_2;

   if(!(VAR_4 = FUNC_4(VAR_4 + 5, &VAR_5->StopBits)))
    return VAR_0;
  }
  else if(!FUNC_5(VAR_14, VAR_4, 3))
  {
   if(!(VAR_4 = FUNC_2(VAR_4 + 3, &VAR_7)))
    return VAR_0;

   VAR_6->ReadIntervalTimeout = 0;
   VAR_6->ReadTotalTimeoutMultiplier = 0;
   VAR_6->ReadTotalTimeoutConstant = 0;
   VAR_6->WriteTotalTimeoutMultiplier = 0;
   VAR_6->WriteTotalTimeoutConstant = VAR_7 ? 60000 : 0;
  }
  else if(!FUNC_5(VAR_15, VAR_4, 4))
  {
   if(!(VAR_4 = FUNC_2(VAR_4 + 4, &VAR_7)))
    return VAR_0;

   VAR_5->fOutX = VAR_7;
   VAR_5->fInX = VAR_7;
  }
  else if(!FUNC_5(VAR_16, VAR_4, 5))
  {
   if(!(VAR_4 = FUNC_2(VAR_4 + 5, &VAR_7)))
    return VAR_0;

   VAR_5->fOutxDsrFlow = VAR_7;
  }
  else if(!FUNC_5(VAR_17, VAR_4, 5))
  {
   if(!(VAR_4 = FUNC_2(VAR_4 + 5, &VAR_7)))
    return VAR_0;

   VAR_5->fOutxCtsFlow = VAR_7;
  }
  else if(!FUNC_5(VAR_18, VAR_4, 4))
  {
   if(!(VAR_4 = FUNC_2(VAR_4 + 4, &VAR_7)))
    return VAR_0;

   VAR_5->fDtrControl = VAR_7;
  }
  else if(!FUNC_5(VAR_19, VAR_4, 4))
  {
   if(!(VAR_4 = FUNC_2(VAR_4 + 4, &VAR_7)))
    return VAR_0;

   VAR_5->fRtsControl = VAR_7;
  }
  else if(!FUNC_5(VAR_20, VAR_4, 5))
  {
   if(!(VAR_4 = FUNC_2(VAR_4 + 5, &VAR_7)))
    return VAR_0;



   VAR_5->fDsrSensitivity = VAR_7;
  }
  else
   return VAR_0;



  if(*VAR_4 && *VAR_4 != ' ')
   return VAR_0;
 }


 if(!VAR_9)
 {
  if(VAR_8 && VAR_5->BaudRate == 110)
   VAR_5->StopBits = VAR_3;
  else
   VAR_5->StopBits = VAR_1;
 }

 return VAR_2;
}
