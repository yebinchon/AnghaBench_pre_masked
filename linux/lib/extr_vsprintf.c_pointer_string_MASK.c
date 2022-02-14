
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printf_spec {int base; int field_width; int flags; } ;
typedef int ptr ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,char*,unsigned long,struct printf_spec) ;

__attribute__((used)) static char *FUNC_1(char *VAR_2, char *VAR_3,
       const void *VAR_4,
       struct printf_spec VAR_5)
{
 VAR_5.base = 16;
 VAR_5.flags |= VAR_0;
 if (VAR_5.field_width == -1) {
  VAR_5.field_width = 2 * sizeof(VAR_4);
  VAR_5.flags |= VAR_1;
 }

 return FUNC_0(VAR_2, VAR_3, (unsigned long int)VAR_4, VAR_5);
}
