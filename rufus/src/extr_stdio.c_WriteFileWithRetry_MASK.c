
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int member_1; int member_0; } ;
struct TYPE_6__ {TYPE_1__ member_0; } ;
typedef int* LPDWORD ;
typedef int LPCVOID ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef int HANDLE ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 () ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,TYPE_2__,TYPE_2__*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ,int ,int,int*,int *) ;
 scalar_t__ VAR_10 ;
 int FUNC_9 (char*,...) ;

BOOL FUNC_10(HANDLE VAR_11, LPCVOID VAR_12, DWORD VAR_13,
 LPDWORD VAR_14, DWORD VAR_15)
{
 DWORD VAR_16;
 BOOL VAR_17;
 LARGE_INTEGER VAR_18, VAR_19 = { { 0,0 } };


 VAR_17 = FUNC_4(VAR_11, VAR_19, &VAR_18, VAR_6);
 if (!VAR_17)
  FUNC_9("Warning: Could not read file pointer %s", FUNC_7());

 if (VAR_15 == 0)
  VAR_15 = 1;
 for (VAR_16 = 1; VAR_16 <= VAR_15; VAR_16++) {

  if ((VAR_16 > 1) && (!FUNC_4(VAR_11, VAR_18, ((void*)0), VAR_5))) {
   FUNC_9("Could not set file pointer - Aborting");
   break;
  }
  if (FUNC_8(VAR_11, VAR_12, VAR_13, VAR_14, ((void*)0))) {
   VAR_7 = 0;
   if (VAR_13 == *VAR_14)
    return VAR_8;

   if (VAR_10 && (*VAR_14 == 0)) {
    FUNC_9("Warning: Possible short write");
    return VAR_8;
   }
   FUNC_9("Wrote %d bytes but requested %d", *VAR_14, VAR_13);
  } else {
   FUNC_9("Write error %s", FUNC_7());
   VAR_7 = VAR_0|FUNC_1(VAR_3)|FUNC_2();
  }

  if (!VAR_17)
   break;
  if (VAR_16 < VAR_15) {
   FUNC_9("Retrying in %d seconds...", VAR_9 / 1000);

   FUNC_6(FUNC_0(VAR_9, VAR_4));
  }
 }
 if (FUNC_3(FUNC_2()) == VAR_1)
  FUNC_5(VAR_0|FUNC_1(VAR_3)|VAR_2);
 return VAR_4;
}
