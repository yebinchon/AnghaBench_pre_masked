
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hda_nid_t ;



__attribute__((used)) static void FUNC_0(unsigned int VAR_0, hda_nid_t *VAR_1)
{
 hda_nid_t VAR_2;

 switch (VAR_0) {
 case 3:
 case 4:
  VAR_2 = VAR_1[1];
  VAR_1[1] = VAR_1[2];
  VAR_1[2] = VAR_2;
  break;
 }
}
