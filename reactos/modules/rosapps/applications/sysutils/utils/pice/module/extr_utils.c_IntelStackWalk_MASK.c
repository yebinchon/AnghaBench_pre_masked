
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int PVOID ;
typedef int* PULONG ;
typedef int LPSTR ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,int *,int *) ;
 int FUNC_2 (int,int) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,int,int,...) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 () ;
 int VAR_2 ;

void FUNC_7(ULONG VAR_3,ULONG VAR_4,ULONG VAR_5)
{
    PULONG VAR_6, VAR_7;
    LPSTR VAR_8;

    FUNC_0((0,"IntelStackWalk(): pc = %X ebp = %X esp = %X\n",VAR_3,VAR_4,VAR_5));

    VAR_6 = VAR_7 = (PULONG)VAR_4;

    FUNC_5("EIP      FRAME    NAME\n");
    while(1)
    {
        FUNC_0((0,"IntelStackWalk(): pFrame = %X pPrevFrame = %X pc =%X\n",(ULONG)VAR_6,(ULONG)VAR_7,VAR_3));
        if ( ( (ULONG)VAR_6 & 3 ) ||
             ( (VAR_6 <= VAR_7) ) )
        {
            FUNC_0((0,"IntelStackWalk(): pFrame is either unaligned or not less than previous\n"));
            if( !FUNC_2((ULONG)VAR_6, sizeof(PVOID)*2) )
            {
                FUNC_0((0,"IntelStackWalk(): pFrame not valid pointer!\n"));
                break;
            }
        }

        if((VAR_8 = FUNC_1(VAR_3,((void*)0),((void*)0))) )
      FUNC_3(VAR_2,"%08X %08X %s\n",VAR_3, (ULONG)VAR_6,VAR_8);
  else
      FUNC_3(VAR_2,"%08X %08X\n",VAR_3, (ULONG)VAR_6);
        FUNC_4(VAR_1,VAR_2);
        if(FUNC_6()==VAR_0)break;

        VAR_3 = VAR_6[1];

        VAR_7 = VAR_6;

        VAR_6 = (PULONG)VAR_6[0];
    }
}
