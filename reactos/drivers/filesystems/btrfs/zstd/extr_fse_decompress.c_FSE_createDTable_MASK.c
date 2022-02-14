
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int FSE_DTable ;


 scalar_t__ FUNC_0 (int ,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 unsigned int VAR_1 ;
 int VAR_2 ;

FSE_DTable* FUNC_2 (unsigned VAR_3)
{
    if (VAR_3 > VAR_1) VAR_3 = VAR_1;
    return (FSE_DTable*)FUNC_0(VAR_2, FUNC_1(VAR_3) * sizeof (U32), VAR_0);
}
