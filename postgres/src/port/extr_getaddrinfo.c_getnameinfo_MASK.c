
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_port; int sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sockaddr const*,int,char*,int,char*,int,int) ;
 scalar_t__ FUNC_1 () ;
 int * FUNC_2 (scalar_t__,int *,int,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int,char*,int) ;
 int FUNC_5 (struct sockaddr const*,int,char*,int,char*,int,int) ;

int
FUNC_6(const struct sockaddr *VAR_7, int VAR_8,
   char *VAR_9, int VAR_10,
   char *VAR_11, int VAR_12, int VAR_13)
{
 if (VAR_7 == ((void*)0) || (VAR_9 == ((void*)0) && VAR_11 == ((void*)0)))
  return VAR_3;







 if (VAR_13 & VAR_6)
  return VAR_2;

 if (VAR_9)
 {
  if (VAR_7->sa_family == VAR_0)
  {
   if (FUNC_2(VAR_0,
         &((struct sockaddr_in *) VAR_7)->sin_addr,
         VAR_7->sa_family == VAR_0 ? 32 : 128,
         VAR_9, VAR_10) == ((void*)0))
    return VAR_5;
  }
  else
   return VAR_5;
 }

 if (VAR_11)
 {
  int VAR_14 = -1;

  if (VAR_7->sa_family == VAR_0)
  {
   VAR_14 = FUNC_4(VAR_11, VAR_12, "%d",
         FUNC_3(((struct sockaddr_in *) VAR_7)->sin_port));
  }
  if (VAR_14 < 0 || VAR_14 >= VAR_12)
   return VAR_5;
 }

 return 0;
}
