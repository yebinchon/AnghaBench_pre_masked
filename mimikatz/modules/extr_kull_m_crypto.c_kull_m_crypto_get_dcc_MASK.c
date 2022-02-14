
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Length; int MaximumLength; int * Buffer; } ;
typedef int * PWSTR ;
typedef int PUNICODE_STRING ;
typedef int PBYTE ;
typedef int NTSTATUS ;
typedef TYPE_1__ LSA_UNICODE_STRING ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (int ,int,int,int *,int,int ,int *,int,int ) ;

NTSTATUS FUNC_8(PBYTE VAR_6, PBYTE VAR_7, PUNICODE_STRING VAR_8, DWORD VAR_9)
{
 NTSTATUS VAR_10;
 LSA_UNICODE_STRING VAR_11;
 LSA_UNICODE_STRING VAR_12;
 BYTE VAR_13[VAR_2];

 VAR_10 = FUNC_5(&VAR_12, VAR_8, VAR_5);
 if(FUNC_2(VAR_10))
 {
  VAR_11.Length = VAR_11.MaximumLength = VAR_12.Length + VAR_2;
  if((VAR_11.Buffer = (PWSTR) FUNC_0(VAR_3, VAR_11.MaximumLength)))
  {
   FUNC_3(*VAR_11.Buffer, VAR_7, VAR_2);
   FUNC_3((PBYTE) VAR_11.Buffer + VAR_2, *VAR_12.Buffer, VAR_12.Length);
   VAR_10 = FUNC_4(&VAR_11, VAR_6);
   if(VAR_9 && FUNC_2(VAR_10))
   {
    if(FUNC_7(VAR_0, VAR_6, VAR_2, VAR_12.Buffer, VAR_12.Length, VAR_9, VAR_13, VAR_2, VAR_1))
    {
     FUNC_3(VAR_6, VAR_13, VAR_2);
     VAR_10 = VAR_4;
    }
   }
   FUNC_1(VAR_11.Buffer);
  }
  FUNC_6(&VAR_12);
 }
 return VAR_10;
}
