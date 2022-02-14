
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {scalar_t__ sun_family; scalar_t__* sun_path; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sockaddr_un*,int,int ) ;
 int FUNC_1 (scalar_t__*) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct sockaddr_un *VAR_2, int VAR_3, unsigned int *VAR_4)
{
 *VAR_4 = 0;

 if (VAR_3 <= sizeof(short) || VAR_3 > sizeof(*VAR_2))
  return -VAR_1;
 if (!VAR_2 || VAR_2->sun_family != VAR_0)
  return -VAR_1;
 if (VAR_2->sun_path[0]) {







  ((char *)VAR_2)[VAR_3] = 0;
  VAR_3 = FUNC_1(VAR_2->sun_path)+1+sizeof(short);
  return VAR_3;
 }

 *VAR_4 = FUNC_2(FUNC_0(VAR_2, VAR_3, 0));
 return VAR_3;
}
