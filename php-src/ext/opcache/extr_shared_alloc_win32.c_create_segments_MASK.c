
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t size; scalar_t__ pos; void* p; } ;
typedef TYPE_1__ zend_shared_segment ;
struct TYPE_5__ {char* mmap_base; } ;
typedef int FILE ;
typedef size_t DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int *,int,size_t,size_t,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 () ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_3 (int *,int,int ,int ,int ,void*) ;
 int * FUNC_4 (int,int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int) ;
 int FUNC_6 (void*,size_t,int ,size_t*) ;
 TYPE_3__ FUNC_7 (int ) ;
 int VAR_15 ;
 scalar_t__ FUNC_8 (int,int) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_16 ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (char*,char*) ;
 int FUNC_12 (int *,char*,void*) ;
 char* FUNC_13 () ;
 void* VAR_17 ;
 int * VAR_18 ;
 int FUNC_14 (char*,char*,void**) ;
 int FUNC_15 () ;
 int FUNC_16 (size_t,char**) ;
 int FUNC_17 () ;
 int FUNC_18 (int ,char*,int) ;

__attribute__((used)) static int FUNC_19(size_t VAR_19, zend_shared_segment ***VAR_20, int *VAR_21, char **VAR_22)
{
 int VAR_23 = 0, VAR_24;
 zend_shared_segment *VAR_25;
 int VAR_26 = 0;
 void *VAR_27[] = { 0, 0 };
 void *VAR_28[] = { (void *) 0x20000000, (void *) 0x21000000, (void *) 0x30000000, (void *) 0x31000000, (void *) 0x50000000, 0 };
 DWORD VAR_29 = 0, VAR_30 = VAR_19;

 void **VAR_31 = VAR_27;

 FUNC_15();



 do {
  VAR_18 = FUNC_4(VAR_8|VAR_9|VAR_7, 0, FUNC_9(VAR_0));
  if (VAR_18 == ((void*)0)) {
   VAR_23 = FUNC_2();
   break;
  }

  VAR_24 = FUNC_16(VAR_19, VAR_22);
  if (VAR_24 == VAR_4) {
   VAR_23 = FUNC_2();

   FUNC_0(VAR_18);
   VAR_18 = ((void*)0);
   if (++VAR_26 >= VAR_11) {
    break;
   }
   FUNC_17();
   FUNC_5(1000 * (VAR_26 + 1));
   FUNC_15();
  } else {
   FUNC_17();
   return VAR_24;
  }
 } while (1);

 if (VAR_26 == VAR_11) {
  FUNC_17();
  FUNC_18(VAR_1, "Unable to open file mapping", VAR_23);
  *VAR_22 = "OpenFileMapping";
  return VAR_3;
 }


 *VAR_21 = 1;
 *VAR_20 = (zend_shared_segment **) FUNC_8(1, sizeof(zend_shared_segment)+sizeof(void *));
 if (!*VAR_20) {
  VAR_23 = FUNC_2();
  FUNC_17();
  FUNC_18(VAR_1, "calloc() failed", VAR_23);
  *VAR_22 = "calloc";
  return VAR_3;
 }
 VAR_25 = (zend_shared_segment *)((char *)(*VAR_20) + sizeof(void *));
 (*VAR_20)[0] = VAR_25;

 VAR_18 = FUNC_1(VAR_10, ((void*)0), VAR_12 | VAR_14, VAR_29, VAR_30,
        FUNC_9(VAR_0));
 if (VAR_18 == ((void*)0)) {
  VAR_23 = FUNC_2();
  FUNC_17();
  FUNC_18(VAR_1, "Unable to create file mapping", VAR_23);
  *VAR_22 = "CreateFileMapping";
  return VAR_3;
 }




 if (!FUNC_7(VAR_15).mmap_base || !*FUNC_7(VAR_15).mmap_base) {
  VAR_31 = VAR_28;
 } else {
  char *VAR_32 = FUNC_7(VAR_15).mmap_base;


  if (*VAR_32 == '0' && *(VAR_32 + 1) == 'x') {
   VAR_32 += 2;
  }
  if (FUNC_14(VAR_32, "%p", &VAR_27[0]) != 1) {
   FUNC_17();
   FUNC_18(VAR_1, "Bad mapping address specified in opcache.mmap_base", VAR_23);
   return VAR_3;
  }
 }

 do {
  VAR_25->p = VAR_17 = FUNC_3(VAR_18, VAR_6|VAR_7, 0, 0, 0, *VAR_31);
  if (*VAR_31 == ((void*)0)) {
   break;
  }
  VAR_31++;
 } while (!VAR_17);

 if (VAR_17 == ((void*)0)) {
  VAR_23 = FUNC_2();
  FUNC_17();
  FUNC_18(VAR_1, "Unable to create view for file mapping", VAR_23);
  *VAR_22 = "MapViewOfFile";
  return VAR_3;
 } else {
  char *VAR_33;
  void *VAR_34 = (void *)VAR_16;
  FILE *VAR_35;
  DWORD VAR_36;

  if (!FUNC_6(VAR_17, VAR_19, VAR_13, &VAR_36)) {
   VAR_23 = FUNC_2();
   FUNC_18(VAR_1, "VirtualProtect() failed", VAR_23);
   return VAR_3;
  }
  VAR_33 = FUNC_13();
  VAR_35 = FUNC_11(VAR_33, "w");
  if (!VAR_35) {
   VAR_23 = FUNC_2();
   FUNC_17();
   FUNC_18(VAR_2, VAR_33, VAR_23);
   FUNC_18(VAR_1, "Unable to write base address", VAR_23);
   return VAR_3;
  }
  FUNC_12(VAR_35, "%p\n", VAR_17);
  FUNC_12(VAR_35, "%p\n", VAR_34);
  FUNC_10(VAR_35);
 }

 VAR_25->pos = 0;
 VAR_25->size = VAR_19;

 FUNC_17();

 return VAR_5;
}
