
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int unauthorized ;
typedef int grub_version_str ;
struct TYPE_2__ {char* grub2_version; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*,char*) ;

void FUNC_2(char* VAR_1, size_t VAR_2)
{
 char *VAR_3, VAR_4[] = {'<', '>', ':', '|', '*', '?', '\\', '/'};
 size_t VAR_5;
 const char VAR_6[] = "GRUB  version %s";

 for (VAR_5=0; VAR_5<VAR_2; VAR_5++) {
  if (FUNC_0(&VAR_1[VAR_5], VAR_6, sizeof(VAR_6)) == 0) {
   FUNC_1(VAR_0.grub2_version, &VAR_1[VAR_5 + sizeof(VAR_6)]);
   break;
  }
 }

 for (VAR_3 = &VAR_0.grub2_version[0]; *VAR_3; VAR_3++) {
  for (VAR_5=0; VAR_5<sizeof(VAR_4); VAR_5++) {
   if (*VAR_3 == VAR_4[VAR_5])
    *VAR_3 = '_';
  }
 }


 if (VAR_0.grub2_version[0] == '0')
  VAR_0.grub2_version[0] = 0;
}
