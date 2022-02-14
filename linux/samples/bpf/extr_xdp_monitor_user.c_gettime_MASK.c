
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_3 ;

__attribute__((used)) static __u64 FUNC_3(void)
{
 struct timespec VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, &VAR_4);
 if (VAR_5 < 0) {
  FUNC_2(VAR_3, "Error with gettimeofday! (%i)\n", VAR_5);
  FUNC_1(VAR_1);
 }
 return (__u64) VAR_4.tv_sec * VAR_2 + VAR_4.tv_nsec;
}
