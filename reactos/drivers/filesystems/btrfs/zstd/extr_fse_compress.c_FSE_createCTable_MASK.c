
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int FSE_CTable ;


 scalar_t__ FUNC_0 (int ,size_t,int ) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int,unsigned int) ;
 unsigned int VAR_1 ;
 int VAR_2 ;

FSE_CTable* FUNC_2 (unsigned VAR_3, unsigned VAR_4)
{
    size_t VAR_5;
    if (VAR_4 > VAR_1) VAR_4 = VAR_1;
    VAR_5 = FUNC_1 (VAR_4, VAR_3) * sizeof(U32);
    return (FSE_CTable*)FUNC_0(VAR_2, VAR_5, VAR_0);
}
