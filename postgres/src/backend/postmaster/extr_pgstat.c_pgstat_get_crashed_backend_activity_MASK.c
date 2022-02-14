
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int st_procpid; char* st_activity_raw; } ;
typedef TYPE_1__ PgBackendStatus ;


 char const* VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char const*) ;
 int FUNC_1 (char*,char const*,int ) ;
 char const* VAR_4 ;

const char *
FUNC_2(int VAR_5, char *VAR_6, int VAR_7)
{
 volatile PgBackendStatus *VAR_8;
 int VAR_9;

 VAR_8 = VAR_2;





 if (VAR_8 == ((void*)0) || VAR_0 == ((void*)0))
  return ((void*)0);

 for (VAR_9 = 1; VAR_9 <= VAR_3; VAR_9++)
 {
  if (VAR_8->st_procpid == VAR_5)
  {

   const char *VAR_10 = VAR_8->st_activity_raw;
   const char *VAR_11;







   VAR_11 = VAR_0 + VAR_1
    - VAR_4;

   if (VAR_10 < VAR_0 ||
    VAR_10 > VAR_11)
    return ((void*)0);


   if (VAR_10[0] == '\0')
    return ((void*)0);







   FUNC_1(VAR_6, VAR_10,
          FUNC_0(VAR_7, VAR_4));

   return VAR_6;
  }

  VAR_8++;
 }


 return ((void*)0);
}
