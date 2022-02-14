
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {scalar_t__ s_addr; } ;
struct hostent {scalar_t__ h_length; int * h_addr_list; } ;


 scalar_t__ VAR_0 ;
 struct hostent* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__*,int ,size_t) ;

__attribute__((used)) static struct hostent *
FUNC_3(char *VAR_1, struct in_addr *VAR_2)
{
 struct in_addr VAR_3;
 struct hostent *VAR_4;





 VAR_3.s_addr = FUNC_1(VAR_1);
 if (VAR_3.s_addr != VAR_0) {
  VAR_4 = ((void*)0);
 } else {

  VAR_4 = FUNC_0(VAR_1);
  if (VAR_4 != ((void*)0))
   (void) FUNC_2(&VAR_3.s_addr, VAR_4->h_addr_list[0], (size_t) VAR_4->h_length);
 }
 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_3;
 return (VAR_4);
}
