
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * Buffer; scalar_t__ MaximumLength; scalar_t__ Length; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef scalar_t__ NTSTATUS ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
  UNICODE_STRING VAR_2;
  NTSTATUS VAR_3;

  if (!&FUNC_3)
  {
      FUNC_4("RtlStringFromGUID is not available\n");
      return;
  }

  VAR_2.Length = VAR_2.MaximumLength = 0;
  VAR_2.Buffer = ((void*)0);

  VAR_3 = FUNC_3(&VAR_0, &VAR_2);
  FUNC_1(VAR_3 == 0, "expected ret=0, got 0x%0x\n", VAR_3);
  FUNC_1(VAR_2.Buffer && !FUNC_0(VAR_2.Buffer, VAR_1), "Endianness broken\n");
  FUNC_2(&VAR_2);
}
