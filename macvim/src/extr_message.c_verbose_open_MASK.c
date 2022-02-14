
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int * FUNC_2 (char*,char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * VAR_6 ;

int
FUNC_3()
{
    if (VAR_6 == ((void*)0) && !VAR_5)
    {

 VAR_5 = VAR_2;

 VAR_6 = FUNC_2((char *)VAR_4, "a");
 if (VAR_6 == ((void*)0))
 {
     FUNC_0(FUNC_1(VAR_3), VAR_4);
     return VAR_0;
 }
    }
    return VAR_1;
}
