
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* PUCHAR ;
typedef scalar_t__ HANDLE ;
typedef int BOOLEAN ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (scalar_t__) ;
 size_t FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (size_t,int ) ;
 scalar_t__ FUNC_7 (char*,int ) ;
 size_t FUNC_8 (scalar_t__,scalar_t__,size_t) ;
 int FUNC_9 (char*,char*,scalar_t__,size_t) ;
 int FUNC_10 (int ,char*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 char* VAR_6 ;
 size_t VAR_7 ;

BOOLEAN FUNC_11(void)
{
 HANDLE VAR_8;
    BOOLEAN VAR_9 = VAR_4;

 FUNC_2();

    FUNC_10(VAR_3,"pICE: loading exports...\n");
 VAR_8 = FUNC_7(L"\\SystemRoot\\symbols\\ntoskrnl.map",VAR_2);
    if(VAR_8)
 {

  size_t VAR_10;

  VAR_10 = FUNC_5(VAR_8);
        if(VAR_10)
        {
      FUNC_0((0,"file len = %d\n",VAR_10));

      VAR_5 = FUNC_6(VAR_10+1,VAR_1);

      FUNC_0((0,"pExports = %x\n",VAR_5));

            if(VAR_5)
      {

                VAR_7 = VAR_10;
       ((PUCHAR)VAR_5)[VAR_10]=0;
       if(VAR_10 == FUNC_8(VAR_8,VAR_5,VAR_10))
       {
        FUNC_0((0,"success reading system map!\n"));
              FUNC_9(VAR_6,"pICE: ntoskrnl.sym @ %x (size %x)\n",VAR_5,VAR_10);
        FUNC_10(VAR_3,VAR_6);
    }
    else
     FUNC_1("error reading ntoskrnl map!\n");

      }
        }
  FUNC_4(VAR_8);
 }
    else
    {
        FUNC_10(VAR_3,"pICE: no ntoskrnl.sys \n");
        FUNC_10(VAR_3,"pICE: could not load exports...\n");
        VAR_9 = VAR_0;
    }

    FUNC_3();

    return VAR_9;
}
