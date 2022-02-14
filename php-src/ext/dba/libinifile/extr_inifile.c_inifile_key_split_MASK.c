
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* name; void* group; } ;
typedef TYPE_1__ key_type ;


 void* FUNC_0 (char const*) ;
 void* FUNC_1 (char const*,int) ;
 char* FUNC_2 (char const*,char) ;

key_type FUNC_3(const char *VAR_0)
{
 key_type VAR_1;
 char *VAR_2;

 if (VAR_0[0] == '[' && (VAR_2 = FUNC_2(VAR_0, ']')) != ((void*)0)) {
  VAR_1.group = FUNC_1(VAR_0+1, VAR_2 - (VAR_0 + 1));
  VAR_1.name = FUNC_0(VAR_2+1);
 } else {
  VAR_1.group = FUNC_0("");
  VAR_1.name = FUNC_0(VAR_0);
 }
 return VAR_1;
}
