
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtmp_custom {char const* username; int use_auth; } ;



__attribute__((used)) static const char *FUNC_0(void *VAR_0)
{
 struct rtmp_custom *VAR_1 = VAR_0;
 if (!VAR_1->use_auth)
  return ((void*)0);
 return VAR_1->username;
}
