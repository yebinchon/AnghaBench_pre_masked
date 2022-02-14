
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nLength; int * lpSecurityDescriptor; void* bInheritHandle; } ;
typedef int SECURITY_DESCRIPTOR ;
typedef TYPE_1__ SECURITY_ATTRIBUTES ;
typedef int * PSID ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef void* BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int ,TYPE_1__*,int ,int ,int *) ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__,int *) ;
 int * FUNC_3 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ,int ,char*) ;
 void* FUNC_6 (scalar_t__,char*,int ,int *,int *) ;
 int VAR_10 ;
 scalar_t__ FUNC_7 (int *,int *,void*) ;
 void* VAR_11 ;
 int FUNC_8 () ;
 void* FUNC_9 (scalar_t__,char*,int ,int *,int *) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,...) ;

BOOL FUNC_13(BOOL VAR_12, char* VAR_13, char** VAR_14, DWORD* VAR_15)
{
 SECURITY_ATTRIBUTES VAR_16, *VAR_17 = ((void*)0);
 SECURITY_DESCRIPTOR VAR_18;
 PSID VAR_19 = ((void*)0);
 HANDLE VAR_20;
 BOOL VAR_21;
 BOOL VAR_22 = VAR_1;


 VAR_19 = FUNC_3();
 if ( (VAR_19 != ((void*)0))
   && FUNC_4(&VAR_18, VAR_10)
   && FUNC_7(&VAR_18, VAR_19, VAR_1) ) {
  VAR_16.nLength = sizeof(SECURITY_ATTRIBUTES);
  VAR_16.bInheritHandle = VAR_1;
  VAR_16.lpSecurityDescriptor = &VAR_18;
  VAR_17 = &VAR_16;
 } else {
  FUNC_12("Could not set security descriptor: %s\n", FUNC_8());
 }

 if (!VAR_12) {
  *VAR_14 = ((void*)0);
 }
 VAR_20 = FUNC_1(VAR_13, VAR_12?VAR_5:VAR_4, VAR_3,
  VAR_17, VAR_12?VAR_0:VAR_9, VAR_2, ((void*)0));

 if (VAR_20 == VAR_6) {
  FUNC_12("Could not %s file '%s'\n", VAR_12?"create":"open", VAR_13);
  goto out;
 }

 if (VAR_12) {
  VAR_21 = FUNC_9(VAR_20, *VAR_14, *VAR_15, VAR_15, ((void*)0));
 } else {
  *VAR_15 = FUNC_2(VAR_20, ((void*)0));
  *VAR_14 = (char*)FUNC_10(*VAR_15);
  if (*VAR_14 == ((void*)0)) {
   FUNC_12("Could not allocate buffer for reading file\n");
   goto out;
  }
  VAR_21 = FUNC_6(VAR_20, *VAR_14, *VAR_15, VAR_15, ((void*)0));
 }

 if (!VAR_21) {
  FUNC_12("I/O Error: %s\n", FUNC_8());
  goto out;
 }

 FUNC_5(0, VAR_12?VAR_8:VAR_7, VAR_13);
 VAR_22 = VAR_11;

out:
 FUNC_0(VAR_20);
 if (!VAR_22) {

  *VAR_15 = 0;
  if (!VAR_12) {
   FUNC_11(*VAR_14);
  }
 }
 return VAR_22;
}
