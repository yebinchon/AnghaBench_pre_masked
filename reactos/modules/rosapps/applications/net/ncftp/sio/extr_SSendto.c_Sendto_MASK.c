
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char const* const,size_t,int ,struct sockaddr*,int) ;

int
FUNC_1(int VAR_2, const char *const VAR_3, size_t VAR_4, const struct sockaddr_in *const VAR_5)
{
 int VAR_6;

 do {
  VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, 0,
    (struct sockaddr *) VAR_5,
    (int) sizeof(struct sockaddr_in));
 } while ((VAR_6 < 0) && (VAR_1 == VAR_0));
 return (VAR_6);
}
