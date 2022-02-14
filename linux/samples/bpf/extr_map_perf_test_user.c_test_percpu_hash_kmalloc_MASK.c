
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(int VAR_2)
{
 __u64 VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2();
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  FUNC_1(VAR_0);
 FUNC_0("%d:percpu_hash_map_perf kmalloc %lld events per sec\n",
        VAR_2, VAR_1 * 1000000000ll / (FUNC_2() - VAR_3));
}
