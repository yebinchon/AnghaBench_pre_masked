
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_event {scalar_t__ id; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 struct tep_event * const * VAR_2 = VAR_0;
 struct tep_event * const * VAR_3 = VAR_1;

 if ((*VAR_2)->id < (*VAR_3)->id)
  return -1;

 if ((*VAR_2)->id > (*VAR_3)->id)
  return 1;

 return 0;
}
