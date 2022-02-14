
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {long long tv_sec; long long tv_nsec; } ;
struct radix_tree_root {int dummy; } ;


 int VAR_0 ;
 long long VAR_1 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (struct radix_tree_root*,unsigned long) ;
 int FUNC_2 (int,char*,unsigned long,unsigned long,long long) ;

__attribute__((used)) static void FUNC_3(struct radix_tree_root *VAR_2,
        unsigned long VAR_3, unsigned long VAR_4)
{
 struct timespec VAR_5, VAR_6;
 unsigned long VAR_7;
 long long VAR_8;

 FUNC_0(VAR_0, &VAR_5);

 for (VAR_7 = 0 ; VAR_7 < VAR_3 ; VAR_7 += VAR_4)
  FUNC_1(VAR_2, VAR_7);

 FUNC_0(VAR_0, &VAR_6);

 VAR_8 = (VAR_6.tv_sec - VAR_5.tv_sec) * VAR_1 +
        (VAR_6.tv_nsec - VAR_5.tv_nsec);

 FUNC_2(2, "Size: %8ld, step: %8ld, insertion: %15lld ns\n",
  VAR_3, VAR_4, VAR_8);
}
