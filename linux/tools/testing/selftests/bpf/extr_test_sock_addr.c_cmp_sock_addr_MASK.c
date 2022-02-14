
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef scalar_t__ (* info_fn ) (int,struct sockaddr*,int*) ;
typedef int addr1 ;


 int FUNC_0 (struct sockaddr_storage*,struct sockaddr_storage const*,int) ;
 int FUNC_1 (struct sockaddr_storage*,int ,int) ;

__attribute__((used)) static int FUNC_2(info_fn VAR_0, int VAR_1,
    const struct sockaddr_storage *VAR_2, int VAR_3)
{
 struct sockaddr_storage VAR_4;
 socklen_t VAR_5 = sizeof(VAR_4);

 FUNC_1(&VAR_4, 0, VAR_5);
 if (VAR_0(VAR_1, (struct sockaddr *)&VAR_4, (socklen_t *)&VAR_5) != 0)
  return -1;

 return FUNC_0(&VAR_4, VAR_2, VAR_3);
}
