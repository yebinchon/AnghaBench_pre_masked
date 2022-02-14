
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char const*,int,char const*,char const*) ;
 scalar_t__ FUNC_3 (char const*,int,char const*,char const*) ;
 int VAR_3 ;

BOOL FUNC_4(const char* VAR_4, int VAR_5, const char* VAR_6, const char* VAR_7)
{
 if ((VAR_3 == 0) && (!FUNC_0(FUNC_1())))
  return VAR_0;
 if ((VAR_4 == ((void*)0)) || (VAR_6 == ((void*)0)) || (VAR_7 == ((void*)0)))
  return VAR_0;



 return ( ((VAR_3 & VAR_1) && FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7))
    || ((VAR_3 & VAR_2) && FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7)) );
}
