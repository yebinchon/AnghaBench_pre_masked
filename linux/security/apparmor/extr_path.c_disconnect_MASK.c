
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int mnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char**,int,char const*,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(const struct path *VAR_3, char *VAR_4, char **VAR_5,
        int VAR_6, const char *VAR_7)
{
 int VAR_8 = 0;

 if (!(VAR_6 & VAR_2) &&
     !(((VAR_6 & VAR_0) == VAR_0) &&
       FUNC_0(VAR_3->mnt))) {



  VAR_8 = -VAR_1;
  if (**VAR_5 == '/')
   *VAR_5 = *VAR_5 + 1;
 } else {
  if (**VAR_5 != '/')

   VAR_8 = FUNC_1(VAR_5, *VAR_5 - VAR_4, "/", 1);
  if (!VAR_8 && VAR_7)
   VAR_8 = FUNC_1(VAR_5, *VAR_5 - VAR_4, VAR_7,
     FUNC_2(VAR_7));
 }

 return VAR_8;
}
