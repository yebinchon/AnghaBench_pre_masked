
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int*) ;

__attribute__((used)) static inline int FUNC_1( int VAR_2 )
{
    char VAR_3[128];
    socklen_t VAR_4 = 128;
    if (( FUNC_0( VAR_2, (struct sockaddr *)VAR_3, &VAR_4 ) != 0 )&&
        ( VAR_1 == VAR_0 ))
        return 0;
    else
        return 1;
}
