
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ HANDLE ;
typedef int DevPath ;
typedef int DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (char*,int,int,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int *,int ,int *,int ,int *,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 int VAR_16 ;
 int FUNC_6 (char*,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_17 ;
 char* FUNC_8 () ;
 size_t VAR_18 ;
 int VAR_19 ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*,int ,size_t) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*,...) ;

__attribute__((used)) static HANDLE FUNC_15(char* VAR_20, BOOL VAR_21, BOOL VAR_22, BOOL VAR_23)
{
 int VAR_24;
 BYTE VAR_25 = 0;
 DWORD VAR_26;
 uint64_t VAR_27;
 HANDLE VAR_28 = VAR_13;
 char VAR_29[VAR_14];

 if ((FUNC_10(VAR_20) < 5) || (VAR_20[0] != '\\') || (VAR_20[1] != '\\') || (VAR_20[3] != '\\'))
  goto out;


 if (FUNC_11(VAR_20, VAR_19, VAR_18) == 0)
  FUNC_12(VAR_29, &VAR_20[VAR_18]);
 else if (FUNC_5(&VAR_20[4], VAR_29, sizeof(VAR_29)) == 0)
  FUNC_13(VAR_29, "???");

 for (VAR_24 = 0; VAR_24 < VAR_0; VAR_24++) {





  VAR_28 = FUNC_0(VAR_20, VAR_11|(VAR_22?VAR_12:0),
   VAR_6|(VAR_23?VAR_7:0),
   ((void*)0), VAR_15, VAR_5, ((void*)0));
  if (VAR_28 != VAR_13)
   break;
  if ((FUNC_2() != VAR_3) && (FUNC_2() != VAR_2))
   break;
  if (VAR_24 == 0) {
   FUNC_14("Waiting for access on %s [%s]...", VAR_20, VAR_29);
  } else if (!VAR_23 && (VAR_24 > VAR_0/3)) {

   FUNC_14("Warning: Could not obtain exclusive rights. Retrying with write sharing enabled...");
   VAR_23 = VAR_17;


   VAR_25 = FUNC_6(VAR_29, VAR_16, VAR_17, VAR_17, VAR_4) | 0x40;
  }
  FUNC_7(VAR_1 / VAR_0);
 }
 if (VAR_28 == VAR_13) {
  FUNC_14("Could not open %s: %s", VAR_20, FUNC_8());
  goto out;
 }

 if (VAR_22) {
  FUNC_14("Opened %s for %s write access", VAR_20, VAR_23?"shared":"exclusive");
 }

 if (VAR_21) {
  if (FUNC_1(VAR_28, VAR_8, ((void*)0), 0, ((void*)0), 0, &VAR_26, ((void*)0))) {
   FUNC_14("I/O boundary checks disabled");
  }

  VAR_27 = FUNC_3() + VAR_1;
  do {
   if (FUNC_1(VAR_28, VAR_9, ((void*)0), 0, ((void*)0), 0, &VAR_26, ((void*)0)))
    goto out;
   if (FUNC_4(VAR_10))
    break;
   FUNC_7(VAR_1 / VAR_0);
  } while (FUNC_3() < VAR_27);

  FUNC_14("Could not lock access to %s: %s", VAR_20, FUNC_8());

  if (!FUNC_4(VAR_10) && (VAR_25 == 0))
   VAR_25 = FUNC_6(VAR_29, VAR_16, VAR_17, VAR_17, VAR_4);

  if ((VAR_25 & 0x07) != 0x01)
   FUNC_9(VAR_28);
 }

out:
 return VAR_28;
}
