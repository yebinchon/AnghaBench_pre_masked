
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seg6_local_lwt {scalar_t__ iif; } ;



__attribute__((used)) static int FUNC_0(struct seg6_local_lwt *VAR_0, struct seg6_local_lwt *VAR_1)
{
 if (VAR_0->iif != VAR_1->iif)
  return 1;

 return 0;
}
