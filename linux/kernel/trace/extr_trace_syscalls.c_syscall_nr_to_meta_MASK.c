
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscall_metadata {int dummy; } ;


 int VAR_0 ;
 struct syscall_metadata** VAR_1 ;

__attribute__((used)) static struct syscall_metadata *FUNC_0(int VAR_2)
{
 if (!VAR_1 || VAR_2 >= VAR_0 || VAR_2 < 0)
  return ((void*)0);

 return VAR_1[VAR_2];
}
