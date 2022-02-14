
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int type_t ;
typedef enum type_context { ____Placeholder_type_context } type_context ;
typedef int attr_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int const*,int const*,int) ;
 scalar_t__ FUNC_1 (int const*,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static unsigned char FUNC_3( const type_t *VAR_6, const attr_list_t *VAR_7,
                                             enum type_context VAR_8 )
{
    int VAR_9 = FUNC_0(VAR_6, VAR_7, VAR_8 == VAR_4);

    if (VAR_9 == VAR_2 && FUNC_1( VAR_7, VAR_0 ) &&
        VAR_8 == VAR_3 && FUNC_2( VAR_5 ))
        VAR_9 = VAR_1;

    return VAR_9;
}
