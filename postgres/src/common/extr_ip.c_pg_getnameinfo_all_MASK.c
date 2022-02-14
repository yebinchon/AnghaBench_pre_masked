
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int dummy; } ;
struct sockaddr_storage {scalar_t__ ss_family; } ;
struct sockaddr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sockaddr const*,int,char*,int,char*,int,int) ;
 int FUNC_1 (struct sockaddr_un const*,int,char*,int,char*,int,int) ;
 int FUNC_2 (char*,char*,int) ;

int
FUNC_3(const struct sockaddr_storage *VAR_1, int VAR_2,
       char *VAR_3, int VAR_4,
       char *VAR_5, int VAR_6,
       int VAR_7)
{
 int VAR_8;
  VAR_8 = FUNC_0((const struct sockaddr *) VAR_1, VAR_2,
       VAR_3, VAR_4,
       VAR_5, VAR_6,
       VAR_7);

 if (VAR_8 != 0)
 {
  if (VAR_3)
   FUNC_2(VAR_3, "???", VAR_4);
  if (VAR_5)
   FUNC_2(VAR_5, "???", VAR_6);
 }

 return VAR_8;
}
