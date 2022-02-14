
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_acl_param {char* data; } ;


 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*) ;

char *FUNC_2(struct tomoyo_acl_param *VAR_0)
{
 char *VAR_1 = VAR_0->data;
 char *VAR_2 = FUNC_0(VAR_1, ' ');

 if (VAR_2)
  *VAR_2++ = '\0';
 else
  VAR_2 = VAR_1 + FUNC_1(VAR_1);
 VAR_0->data = VAR_2;
 return VAR_1;
}
