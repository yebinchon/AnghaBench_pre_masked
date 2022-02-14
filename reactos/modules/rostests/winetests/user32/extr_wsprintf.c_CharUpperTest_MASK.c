
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPSTR ;
typedef int INT_PTR ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*,int,int) ;

__attribute__((used)) static void FUNC_2(void)
{
    INT_PTR VAR_2, VAR_3;
    BOOL VAR_4 = VAR_0;

    for (VAR_2=0;VAR_2<256;VAR_2++)
     {
 VAR_3 = (INT_PTR)FUNC_0((LPSTR)VAR_2);
 if ((VAR_3 >> 16) != 0)
    {
           VAR_4 = VAR_1;
    break;
    }
 }
    FUNC_1(!VAR_4,"CharUpper failed - 16bit input (0x%0lx) returned 32bit result (0x%0lx)\n",VAR_2,VAR_3);
}
