
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const hda_nid_t ;



__attribute__((used)) static int FUNC_0(hda_nid_t VAR_0, const hda_nid_t *VAR_1)
{
 for (; *VAR_1; VAR_1++)
  if (*VAR_1 == VAR_0)
   return 1;
 return 0;
}
