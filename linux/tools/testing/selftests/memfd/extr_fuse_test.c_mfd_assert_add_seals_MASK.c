
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __u64 ;


 int VAR_0 ;
 int FUNC_0 () ;
 long FUNC_1 (int,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,int,unsigned long long,unsigned long long) ;

__attribute__((used)) static void FUNC_4(int VAR_1, __u64 VAR_2)
{
 long VAR_3;
 __u64 VAR_4;

 VAR_4 = FUNC_2(VAR_1);
 VAR_3 = FUNC_1(VAR_1, VAR_0, VAR_2);
 if (VAR_3 < 0) {
  FUNC_3("ADD_SEALS(%d, %llu -> %llu) failed: %m\n",
         VAR_1, (unsigned long long)VAR_4, (unsigned long long)VAR_2);
  FUNC_0();
 }
}
