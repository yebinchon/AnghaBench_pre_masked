
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ULONG ;
typedef size_t UINT ;
typedef scalar_t__ UCHAR ;
typedef int * HLOCAL ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int,size_t) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (scalar_t__*) ;
 scalar_t__* FUNC_5 (int *) ;
 int * FUNC_6 (int *,int,int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int VAR_3 ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (int,char*,...) ;

__attribute__((used)) static void FUNC_11(void)
{
    ULONG VAR_5;
    HLOCAL VAR_6,VAR_7,VAR_8,VAR_9;
    UCHAR *VAR_10;
    UINT VAR_11;
    BOOL VAR_12;
    VAR_5=100000;


    VAR_6=FUNC_1(0,VAR_5);
    FUNC_10(VAR_6!=((void*)0),"LocalAlloc failed: error=%d\n",FUNC_0());
    if(VAR_6) {
      FUNC_10(FUNC_7(VAR_6)>=VAR_5, "LocalAlloc should return a big enough memory block\n");
    }


    VAR_7=FUNC_1(VAR_2|VAR_1,VAR_5);
    FUNC_10(VAR_7!=((void*)0),"LocalAlloc failed: error=%d\n",FUNC_0());
    if(VAR_7) {
      FUNC_10(FUNC_7(VAR_7)>=VAR_5,"LocalAlloc should return a big enough memory block\n");
      VAR_10=FUNC_5(VAR_7);
      FUNC_10(VAR_10!=((void*)0),"LocalLock: error=%d\n",FUNC_0());
      if(VAR_10) {
        VAR_12=VAR_0;
        for(VAR_11=0;VAR_11<VAR_5;VAR_11++) {
          if(VAR_10[VAR_11]!=0) {
            VAR_12=VAR_4;
          }
        }
        FUNC_10(!VAR_12,"LocalAlloc should have zeroed out its allocated memory\n");
        FUNC_9(0);
        VAR_12=FUNC_8(VAR_7);
        FUNC_10(!VAR_12 && FUNC_0()==VAR_3,
           "LocalUnlock Failed: rc=%d err=%d\n",VAR_12,FUNC_0());
      }
    }
   VAR_8=FUNC_3(VAR_7);
   FUNC_10(VAR_8==((void*)0), "LocalFree failed: %p\n",VAR_8);


   VAR_7=FUNC_1(VAR_1 | VAR_2,VAR_5);
   FUNC_10(VAR_7!=((void*)0), "LocalAlloc failed to create moveable memory, error=%d\n",FUNC_0());


    VAR_8=FUNC_6(VAR_7,2*VAR_5,VAR_1 | VAR_2);
    FUNC_10(VAR_8!=((void*)0),"LocalReAlloc failed, error=%d\n",FUNC_0());
    if(VAR_8) {
      FUNC_10(FUNC_7(VAR_8)>=2*VAR_5,"LocalReAlloc failed\n");
      VAR_10=FUNC_5(VAR_8);
      FUNC_10(VAR_10!=((void*)0),"LocalLock Failed\n");
      if(VAR_10) {
        VAR_12=VAR_0;
        for(VAR_11=0;VAR_11<VAR_5;VAR_11++) {
          if(VAR_10[VAR_5+VAR_11]!=0) {
            VAR_12=VAR_4;
          }
        }
        FUNC_10(!VAR_12,"LocalReAlloc should have zeroed out its allocated memory\n");

        VAR_9=FUNC_4(VAR_10);
        FUNC_10(VAR_9==VAR_8,"LocalHandle didn't return the correct memory handle %p/%p for %p\n",
           VAR_8, VAR_9, VAR_10);

        VAR_9=FUNC_2(VAR_8);
        FUNC_10(VAR_9==((void*)0),"Discarded memory we shouldn't have\n");
        FUNC_9(VAR_3);
        FUNC_10(!FUNC_8(VAR_8) && FUNC_0()==VAR_3, "LocalUnlock Failed\n");
      }
    }
    if(VAR_6) {
      FUNC_10(FUNC_3(VAR_6)==((void*)0),"LocalFree failed\n");
    }
    if(VAR_8) {
      FUNC_10(FUNC_3(VAR_8)==((void*)0),"LocalFree failed\n");
    } else {
      FUNC_10(FUNC_3(VAR_7)==((void*)0),"LocalFree failed\n");
    }
}
