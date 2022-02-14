
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __u64 ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,unsigned long long,unsigned long long,int) ;

__attribute__((used)) static void FUNC_3(int VAR_0, __u64 VAR_1)
{
 __u64 VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2 != VAR_1) {
  FUNC_2("%llu != %llu = GET_SEALS(%d)\n",
         (unsigned long long)VAR_1, (unsigned long long)VAR_2, VAR_0);
  FUNC_0();
 }
}
