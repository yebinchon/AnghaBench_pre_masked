
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ app_shared_globals; } ;
typedef TYPE_1__ zend_smm_shared_globals ;
typedef int zend_shared_segment ;
typedef int zend_accel_shared_globals ;
typedef int info ;
struct TYPE_8__ {scalar_t__ file_cache_fallback; scalar_t__ file_cache; } ;
struct TYPE_7__ {scalar_t__ State; size_t RegionSize; } ;
typedef TYPE_2__ MEMORY_BASIC_INFORMATION ;
typedef int FILE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 scalar_t__ VAR_8 ;
 int * FUNC_1 (int ,int,int ,int ,size_t,void*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *,size_t,int ,int *) ;
 scalar_t__ FUNC_3 (void*,TYPE_2__*,int) ;
 TYPE_4__ FUNC_4 (int ) ;
 size_t FUNC_5 (int) ;
 int VAR_11 ;
 int * VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char*,char*) ;
 int FUNC_8 (int *,char*,void**) ;
 char* FUNC_9 () ;
 int * VAR_14 ;
 int VAR_15 ;
 TYPE_1__* VAR_16 ;
 scalar_t__ FUNC_10 (char*,int *) ;
 int FUNC_11 (int ,char*,int) ;

__attribute__((used)) static int FUNC_12(size_t VAR_17, char **VAR_18)
{
 int VAR_19;
 void *VAR_20;
 char *VAR_21 = FUNC_9();
 FILE *VAR_22 = FUNC_7(VAR_21, "r");
 MEMORY_BASIC_INFORMATION VAR_23;
 void *VAR_24;
 int VAR_25;

 if (!VAR_22) {
  VAR_19 = FUNC_0();
  FUNC_11(VAR_1, VAR_21, VAR_19);
  FUNC_11(VAR_0, "Unable to open base address file", VAR_19);
  *VAR_18="fopen";
  return VAR_2;
 }
 if (!FUNC_8(VAR_22, "%p", &VAR_20)) {
  VAR_19 = FUNC_0();
  FUNC_11(VAR_0, "Unable to read base address", VAR_19);
  *VAR_18="read mapping base";
  FUNC_6(VAR_22);
  return VAR_2;
 }
 if (!FUNC_8(VAR_22, "%p", &VAR_24)) {
  VAR_19 = FUNC_0();
  FUNC_11(VAR_0, "Unable to read execute_ex base address", VAR_19);
  *VAR_18="read execute_ex base";
  FUNC_6(VAR_22);
  return VAR_2;
 }
 FUNC_6(VAR_22);

 if (0 > FUNC_10(VAR_21, ((void*)0))) {
  VAR_19 = FUNC_0();
  FUNC_11(VAR_1, VAR_21, VAR_19);
 }

 VAR_25 = (void *)VAR_13 != VAR_24;


 if (VAR_25 ||
     FUNC_3(VAR_20, &VAR_23, sizeof(VAR_23)) == 0 ||
     VAR_23.State != VAR_8 ||
     VAR_23.RegionSize < VAR_17) {
  if (VAR_25) {
   VAR_19 = VAR_5;
   FUNC_11(VAR_0, "Opcode handlers are unusable due to ASLR. Please setup opcache.file_cache and opcache.file_cache_fallback directives for more convenient Opcache usage", VAR_19);
  } else {
   VAR_19 = VAR_5;
   FUNC_11(VAR_0, "Base address marks unusable memory region. Please setup opcache.file_cache and opcache.file_cache_fallback directives for more convenient Opcache usage", VAR_19);
  }
  return VAR_2;
 }

 VAR_14 = FUNC_1(VAR_15, VAR_6|VAR_7, 0, 0, 0, VAR_20);

 if (VAR_14 == ((void*)0)) {
  VAR_19 = FUNC_0();
  if (VAR_19 == VAR_5) {
   FUNC_11(VAR_0, "Unable to reattach to base address", VAR_19);
   return VAR_2;
  }
  return VAR_3;
 } else {
  DWORD VAR_26;

  if (!FUNC_2(VAR_14, VAR_17, VAR_9, &VAR_26)) {
   VAR_19 = FUNC_0();
   FUNC_11(VAR_0, "VirtualProtect() failed", VAR_19);
   return VAR_3;
  }
 }

 VAR_16 = (zend_smm_shared_globals *) VAR_14;

 return VAR_10;
}
