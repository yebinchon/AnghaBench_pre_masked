
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int evutil_socket_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,char const*,size_t,int ) ;
 scalar_t__ FUNC_1 (int ,char const*,size_t) ;

ssize_t
FUNC_2(evutil_socket_t VAR_2, const void *VAR_3, size_t VAR_4)
{
 size_t VAR_5;
 ssize_t VAR_6;
 const char *VAR_7;

 VAR_7 = VAR_3;
 VAR_5 = VAR_4;
 while (VAR_5 > 0) {

        if ( (VAR_6 = FUNC_1(VAR_2, VAR_7, VAR_5)) <= 0)



        {
   if (VAR_6 < 0 && VAR_1 == VAR_0)
    VAR_6 = 0;
   else
    return(-1);
  }

  VAR_5 -= VAR_6;
  VAR_7 += VAR_6;
 }
 return(VAR_4);
}
