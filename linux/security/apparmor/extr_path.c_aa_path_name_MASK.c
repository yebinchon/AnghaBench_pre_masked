
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct path const*,char*,char**,int,char const*) ;

int FUNC_1(const struct path *VAR_3, int VAR_4, char *VAR_5,
   const char **VAR_6, const char **VAR_7, const char *VAR_8)
{
 char *VAR_9 = ((void*)0);
 int VAR_10 = FUNC_0(VAR_3, VAR_5, &VAR_9, VAR_4, VAR_8);

 if (VAR_7 && VAR_10) {
  if (VAR_10 == -VAR_2)
   *VAR_7 = "Failed name lookup - deleted entry";
  else if (VAR_10 == -VAR_0)
   *VAR_7 = "Failed name lookup - disconnected path";
  else if (VAR_10 == -VAR_1)
   *VAR_7 = "Failed name lookup - name too long";
  else
   *VAR_7 = "Failed name lookup";
 }

 *VAR_6 = VAR_9;

 return VAR_10;
}
