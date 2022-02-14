
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;
typedef int FRESULT ;
typedef scalar_t__ BYTE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const**) ;

FRESULT FUNC_1 (
 const TCHAR* VAR_3
)
{
 int VAR_4;



 VAR_4 = FUNC_0(&VAR_3);
 if (VAR_4 < 0) return VAR_1;
 VAR_0 = (BYTE)VAR_4;

 return VAR_2;
}
