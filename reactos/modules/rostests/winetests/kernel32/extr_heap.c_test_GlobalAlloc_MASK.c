
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ULONG ;
typedef size_t UINT ;
typedef scalar_t__ UCHAR ;
typedef scalar_t__* HGLOBAL ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__* FUNC_1 (int,size_t) ;
 scalar_t__* FUNC_2 (scalar_t__*) ;
 int * FUNC_3 (scalar_t__*) ;
 scalar_t__* FUNC_4 (scalar_t__*) ;
 scalar_t__* FUNC_5 (scalar_t__*) ;
 scalar_t__* FUNC_6 (scalar_t__*,int,int) ;
 int FUNC_7 (scalar_t__*) ;
 int FUNC_8 (scalar_t__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (int,char*,...) ;

__attribute__((used)) static void FUNC_11(void)
{
    ULONG VAR_6;
    HGLOBAL VAR_7,VAR_8,VAR_9,VAR_10;
    UCHAR *VAR_11;
    UINT VAR_12;
    BOOL VAR_13;
    VAR_6=100000;

    FUNC_9(VAR_4);

    VAR_7=FUNC_1(0,VAR_6);
    FUNC_10(VAR_7!=((void*)0),"GlobalAlloc failed\n");
    if(VAR_7) {
      FUNC_10(FUNC_7(VAR_7)>=VAR_6, "GlobalAlloc should return a big enough memory block\n");
    }


    VAR_8=FUNC_1(VAR_3,VAR_6);
    FUNC_10(VAR_8!=((void*)0),"GlobalAlloc failed: error=%d\n",FUNC_0());
    if(VAR_8) {
      FUNC_10(FUNC_7(VAR_8)>=VAR_6,"GlobalAlloc should return a big enough memory block\n");
      VAR_11=FUNC_5(VAR_8);
      FUNC_10(VAR_11==VAR_8,"GlobalLock should have returned the same memory as was allocated\n");
      if(VAR_11) {
        VAR_13=VAR_0;
        for(VAR_12=0;VAR_12<VAR_6;VAR_12++) {
          if(VAR_11[VAR_12]!=0) {
            VAR_13=VAR_5;
          }
        }
        FUNC_10(!VAR_13,"GlobalAlloc should have zeroed out its allocated memory\n");
      }
   }


    VAR_9=FUNC_6(VAR_8,0,VAR_1 | VAR_2);
    if(VAR_9!=((void*)0)) {
      VAR_8=VAR_9;
      VAR_11=FUNC_5(VAR_9);
      FUNC_10(VAR_11!=((void*)0) && !FUNC_8(VAR_9)&&FUNC_0()==VAR_4,
         "Converting from FIXED to MOVEABLE didn't REALLY work\n");
    }


    VAR_9=FUNC_6(VAR_8,2*VAR_6,VAR_2 | VAR_3);
    FUNC_10(VAR_9!=((void*)0),"GlobalReAlloc failed\n");
    if(VAR_9) {
      FUNC_10(FUNC_7(VAR_9)>=2*VAR_6,"GlobalReAlloc failed\n");
      VAR_11=FUNC_5(VAR_9);
      FUNC_10(VAR_11!=((void*)0),"GlobalLock Failed\n");
      if(VAR_11) {
        VAR_13=VAR_0;
        for(VAR_12=0;VAR_12<VAR_6;VAR_12++) {
          if(VAR_11[VAR_6+VAR_12]!=0) {
            VAR_13=VAR_5;
          }
        }
        FUNC_10(!VAR_13,"GlobalReAlloc should have zeroed out its allocated memory\n");


        VAR_10=FUNC_4(VAR_11);
        FUNC_10(VAR_10==VAR_9,"GlobalHandle didn't return the correct memory handle %p/%p for %p\n",
           VAR_9, VAR_10, VAR_11);

        VAR_10=FUNC_2(VAR_9);
        if(VAR_10==((void*)0)) {
          FUNC_10(!FUNC_8(VAR_9) && FUNC_0()==VAR_4,"GlobalUnlock Failed\n");
        }
      }
    }
    if(VAR_7) {
      FUNC_10(FUNC_3(VAR_7)==((void*)0),"GlobalFree failed\n");
    }
    if(VAR_9) {
      FUNC_10(FUNC_3(VAR_9)==((void*)0),"GlobalFree failed\n");
    } else {
      FUNC_10(FUNC_3(VAR_8)==((void*)0),"GlobalFree failed\n");
    }
}
