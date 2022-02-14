
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fcgi_request ;


 char* FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static char *FUNC_2(void)
{
 fcgi_request *VAR_1 = (fcgi_request*) FUNC_1(VAR_0);

 return FUNC_0(VAR_1, "HTTP_COOKIE");
}
