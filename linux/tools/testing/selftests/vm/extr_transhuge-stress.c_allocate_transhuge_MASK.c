
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int int64_t ;
typedef int ent ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*) ;
 scalar_t__ FUNC_4 (void*,int ,int ) ;
 void* FUNC_5 (void*,int ,int,int,int,int ) ;
 int VAR_10 ;
 int FUNC_6 (int ,int *,int,uintptr_t) ;

int64_t FUNC_7(void *VAR_11)
{
 uint64_t VAR_12[2];


 if (FUNC_5(VAR_11, VAR_1, VAR_8 | VAR_9,
    VAR_4 | VAR_3 |
    VAR_5 | VAR_6, -1, 0) != VAR_11)
  FUNC_3(2, "mmap transhuge");

 if (FUNC_4(VAR_11, VAR_1, VAR_2))
  FUNC_2(2, "MADV_HUGEPAGE");


 *(volatile void **)VAR_11 = VAR_11;

 if (FUNC_6(VAR_10, VAR_12, sizeof(VAR_12),
   (uintptr_t)VAR_11 >> (VAR_7 - 3)) != sizeof(VAR_12))
  FUNC_2(2, "read pagemap");

 if (FUNC_1(VAR_12[0]) && FUNC_1(VAR_12[1]) &&
     FUNC_0(VAR_12[0]) + 1 == FUNC_0(VAR_12[1]) &&
     !(FUNC_0(VAR_12[0]) & ((1 << (VAR_0 - VAR_7)) - 1)))
  return FUNC_0(VAR_12[0]);

 return -1;
}
