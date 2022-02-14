
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct timespec {int tv_sec; int tv_nsec; } ;
typedef size_t int64_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 size_t FUNC_0 (void*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,struct timespec*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int,char*,...) ;
 scalar_t__ FUNC_5 (void*,size_t,int ) ;
 int* FUNC_6 (size_t) ;
 int FUNC_7 (int*,int ,size_t) ;
 void* FUNC_8 (int *,size_t,int,int,int,int ) ;
 scalar_t__ FUNC_9 (char*,int ) ;
 scalar_t__ VAR_17 ;
 int* FUNC_10 (int*,size_t) ;
 int FUNC_11 (char*,char*) ;
 size_t FUNC_12 (int ) ;
 int FUNC_13 (char*,double,double,size_t,...) ;

int FUNC_14(int VAR_18, char **VAR_19)
{
 size_t VAR_20, VAR_21;
 void *VAR_22, *VAR_23;
 struct timespec VAR_24, VAR_25;
 double VAR_26;
 uint8_t *VAR_27;
 size_t VAR_28;

 VAR_20 = FUNC_12(VAR_16);
 if (VAR_20 > VAR_14 / FUNC_12(VAR_15) / 4)
  VAR_20 = VAR_14 / 4;
 else
  VAR_20 *= FUNC_12(VAR_15);

 if (VAR_18 == 1)
  VAR_21 = VAR_20;
 else if (!FUNC_11(VAR_19[1], "-h"))
  FUNC_4(1, "usage: %s [size in MiB]", VAR_19[0]);
 else
  VAR_21 = FUNC_1(VAR_19[1]) << 20;

 FUNC_13("allocate %zd transhuge pages, using %zd MiB virtual memory"
       " and %zd MiB of ram", VAR_21 >> VAR_1, VAR_21 >> 20,
       VAR_21 >> (20 + VAR_1 - VAR_10 - 1));

 VAR_17 = FUNC_9("/proc/self/pagemap", VAR_9);
 if (VAR_17 < 0)
  FUNC_3(2, "open pagemap");

 VAR_21 -= VAR_21 % VAR_2;
 VAR_22 = FUNC_8(((void*)0), VAR_21 + VAR_2, VAR_12 | VAR_13,
   VAR_5 | VAR_7 | VAR_8, -1, 0);
 if (VAR_22 == VAR_6)
  FUNC_3(2, "initial mmap");
 VAR_22 += VAR_2 - (uintptr_t)VAR_22 % VAR_2;

 if (FUNC_5(VAR_22, VAR_21, VAR_4))
  FUNC_3(2, "MADV_HUGEPAGE");

 VAR_28 = VAR_20 >> (VAR_1 - 1);
 VAR_27 = FUNC_6(VAR_28);
 if (!VAR_27)
  FUNC_4(2, "map malloc");

 while (1) {
  int VAR_29 = 0, VAR_30 = 0, VAR_31 = 0;

  FUNC_7(VAR_27, 0, VAR_28);

  FUNC_2(VAR_0, &VAR_24);
  for (VAR_23 = VAR_22; VAR_23 < VAR_22 + VAR_21; VAR_23 += VAR_2) {
   int64_t VAR_32;

   VAR_32 = FUNC_0(VAR_23);

   if (VAR_32 < 0) {
    VAR_30++;
   } else {
    size_t VAR_33 = VAR_32 >> (VAR_1 - VAR_10);

    VAR_29++;
    if (VAR_33 >= VAR_28) {
     VAR_27 = FUNC_10(VAR_27, VAR_33 + 1);
     if (!VAR_27)
      FUNC_4(2, "map realloc");
     FUNC_7(VAR_27 + VAR_28, 0, VAR_33 + 1 - VAR_28);
     VAR_28 = VAR_33 + 1;
    }
    if (!VAR_27[VAR_33])
     VAR_31++;
    VAR_27[VAR_33] = 1;
   }


   if (FUNC_5(VAR_23, VAR_2 - VAR_11, VAR_3))
    FUNC_3(2, "MADV_DONTNEED");
  }
  FUNC_2(VAR_0, &VAR_25);
  VAR_26 = VAR_25.tv_sec - VAR_24.tv_sec + (VAR_25.tv_nsec - VAR_24.tv_nsec) / 1000000000.;

  FUNC_13("%.3f s/loop, %.3f ms/page, %10.3f MiB/s\t"
        "%4d succeed, %4d failed, %4d different pages",
        VAR_26, VAR_26 * 1000 / (VAR_21 >> VAR_1), VAR_21 / VAR_26 / (1 << 20),
        VAR_29, VAR_30, VAR_31);
 }
}
