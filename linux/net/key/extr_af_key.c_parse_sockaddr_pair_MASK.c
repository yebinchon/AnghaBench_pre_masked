
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;
typedef int u8 ;
typedef int u16 ;
struct sockaddr {int sa_family; } ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr*,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct sockaddr *VAR_1, int VAR_2,
          xfrm_address_t *VAR_3, xfrm_address_t *VAR_4,
          u16 *VAR_5)
{
 int VAR_6, VAR_7;

 if (VAR_2 < 2 || VAR_2 < FUNC_2(VAR_1->sa_family))
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_1, VAR_3);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_6);
 if (FUNC_0((struct sockaddr *) (((u8 *)VAR_1) + VAR_7),
       VAR_4) != VAR_6)
  return -VAR_0;

 *VAR_5 = VAR_6;
 return 0;
}
