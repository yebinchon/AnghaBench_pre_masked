
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u64 ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int,int,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(__u64 *VAR_3)
{
 FILE *VAR_4;

 VAR_4 = FUNC_1(VAR_2, "rb");
 if (!VAR_4)
  return -VAR_0;
 FUNC_2(VAR_3, sizeof(__u64), 1, VAR_4);
 FUNC_0(VAR_4);
 return VAR_1;
}
