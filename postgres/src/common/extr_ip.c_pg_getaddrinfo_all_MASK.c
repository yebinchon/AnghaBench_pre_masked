
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {scalar_t__ ai_family; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*,char const*,struct addrinfo const*,struct addrinfo**) ;
 int FUNC_1 (char const*,struct addrinfo const*,struct addrinfo**) ;

int
FUNC_2(const char *VAR_1, const char *VAR_2,
       const struct addrinfo *VAR_3, struct addrinfo **VAR_4)
{
 int VAR_5;


 *VAR_4 = ((void*)0);







 VAR_5 = FUNC_0((!VAR_1 || VAR_1[0] == '\0') ? ((void*)0) : VAR_1,
      VAR_2, VAR_3, VAR_4);

 return VAR_5;
}
