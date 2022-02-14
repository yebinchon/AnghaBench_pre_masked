
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG_PTR ;
typedef int ULONG ;
typedef int UINT ;
typedef scalar_t__ UCHAR ;
struct TYPE_3__ {int dwPageSize; } ;
typedef TYPE_1__ SYSTEM_INFO ;
typedef scalar_t__* LPVOID ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* FUNC_1 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_2 (int ,int,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ,scalar_t__*) ;
 scalar_t__* FUNC_5 (scalar_t__,int ,scalar_t__*,int) ;
 int FUNC_6 (scalar_t__,int ,scalar_t__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (int,char*,...) ;

__attribute__((used)) static void FUNC_8(void)
{
    SYSTEM_INFO VAR_4;
    ULONG VAR_5;
    HANDLE VAR_6;
    LPVOID VAR_7,VAR_8,VAR_9;
    UCHAR *VAR_10,*VAR_11;
    UINT VAR_12;
    BOOL VAR_13;
    DWORD VAR_14;


    FUNC_0(&VAR_4);
    FUNC_7(VAR_4.dwPageSize>0,"GetSystemInfo should return a valid page size\n");
    VAR_5=10*VAR_4.dwPageSize;
    VAR_6=FUNC_2(0,2*VAR_5,5*VAR_5);
    FUNC_7( !((ULONG_PTR)VAR_6 & 0xffff), "heap %p not 64K aligned\n", VAR_6 );


    VAR_7=FUNC_1(VAR_6,0,5*VAR_5+1);
    FUNC_7(VAR_7==((void*)0),"HeapCreate allocated more Ram than it should have\n");
    FUNC_4(VAR_6,0,VAR_7);


    VAR_7=FUNC_1(VAR_6,0,VAR_5);
    FUNC_7(VAR_7!=((void*)0),"HeapAlloc failed\n");
    if(VAR_7) {
      FUNC_7(FUNC_6(VAR_6,0,VAR_7)>=VAR_5, "HeapAlloc should return a big enough memory block\n");
    }


    VAR_10=FUNC_1(VAR_6,VAR_2,VAR_5);
    FUNC_7(VAR_10!=((void*)0),"HeapAlloc failed\n");
    if(VAR_10) {
      FUNC_7(FUNC_6(VAR_6,0,VAR_10)>=VAR_5,"HeapAlloc should return a big enough memory block\n");
      VAR_13=VAR_0;
      for(VAR_12=0;VAR_12<VAR_5;VAR_12++) {
        if(VAR_10[VAR_12]!=0) {
          VAR_13=VAR_3;
        }
      }
      FUNC_7(!VAR_13,"HeapAlloc should have zeroed out its allocated memory\n");
    }


    VAR_9=FUNC_1(VAR_6,0,5*VAR_5);
    FUNC_7(VAR_9==((void*)0),"HeapAlloc should return NULL\n");
    if(VAR_9) {
      FUNC_7(FUNC_4(VAR_6,0,VAR_9),"HeapFree didn't pass successfully\n");
    }


    VAR_11=FUNC_5(VAR_6,VAR_2,VAR_10,VAR_5+5*VAR_4.dwPageSize);
    FUNC_7(VAR_11!=((void*)0),"HeapReAlloc failed\n");
    if(VAR_11) {
      FUNC_7(FUNC_6(VAR_6,0,VAR_11)>=VAR_5+5*VAR_4.dwPageSize,"HeapReAlloc failed\n");
      VAR_13=VAR_0;
      for(VAR_12=0;VAR_12<5*VAR_4.dwPageSize;VAR_12++) {
        if(VAR_11[VAR_5+VAR_12]!=0) {
          VAR_13=VAR_3;
        }
      }
      FUNC_7(!VAR_13,"HeapReAlloc should have zeroed out its allocated memory\n");
    }


    VAR_13=VAR_0;
    VAR_8=FUNC_5(VAR_6,VAR_1,VAR_7,VAR_5+VAR_4.dwPageSize);
    if(VAR_8!=((void*)0)) {
      if(VAR_8!=VAR_7) {
        VAR_13=VAR_3;
      }
    }
    FUNC_7(VAR_8==((void*)0) || !VAR_13,"HeapReAlloc didn't honour HEAP_REALLOC_IN_PLACE_ONLY\n");


   if(VAR_8) {
     FUNC_7(FUNC_4(VAR_6,0,VAR_8),"HeapFree failed\n");
   } else {
     FUNC_7(FUNC_4(VAR_6,0,VAR_7),"HeapFree failed\n");
   }
   if(VAR_11) {
     FUNC_7(FUNC_4(VAR_6,0,VAR_11),"HeapFree failed\n");
   } else {
     FUNC_7(FUNC_4(VAR_6,0,VAR_10),"HeapFree failed\n");
   }


   VAR_7 = FUNC_1(VAR_6, 0, 0);
   FUNC_7(VAR_7 != ((void*)0), "Reserved memory\n");

   VAR_14 = FUNC_6(VAR_6, 0, VAR_7);

   FUNC_7(VAR_14 < 0xFFFFFFFF, "The size of the 0-length buffer\n");
   FUNC_7(FUNC_4(VAR_6, 0, VAR_7), "Freed the 0-length buffer\n");


   FUNC_7(FUNC_3(VAR_6),"HeapDestroy failed\n");
}
