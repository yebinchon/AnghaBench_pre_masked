
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ptrdiff_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__,char*,int,unsigned long const*) ;

int FUNC_2(bool VAR_1, char *VAR_2, const unsigned long *VAR_3,
       int VAR_4)
{
 ptrdiff_t VAR_5 = VAR_0 - FUNC_0(VAR_2);

 return VAR_1 ? FUNC_1(VAR_2, VAR_5, "%*pbl\n", VAR_4, VAR_3) :
        FUNC_1(VAR_2, VAR_5, "%*pb\n", VAR_4, VAR_3);
}
