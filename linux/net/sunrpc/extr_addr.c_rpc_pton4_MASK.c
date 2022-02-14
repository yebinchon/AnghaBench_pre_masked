
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_family; TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 size_t const VAR_1 ;
 scalar_t__ FUNC_0 (char const*,size_t const,int *,char,int *) ;
 int FUNC_1 (struct sockaddr*,int ,int) ;

__attribute__((used)) static size_t FUNC_2(const char *VAR_2, const size_t VAR_3,
   struct sockaddr *VAR_4, const size_t VAR_5)
{
 struct sockaddr_in *VAR_6 = (struct sockaddr_in *)VAR_4;
 u8 *VAR_7 = (u8 *)&VAR_6->sin_addr.s_addr;

 if (VAR_3 > VAR_1 || VAR_5 < sizeof(struct sockaddr_in))
  return 0;

 FUNC_1(VAR_4, 0, sizeof(struct sockaddr_in));

 if (FUNC_0(VAR_2, VAR_3, VAR_7, '\0', ((void*)0)) == 0)
  return 0;

 VAR_6->sin_family = VAR_0;
 return sizeof(struct sockaddr_in);
}
