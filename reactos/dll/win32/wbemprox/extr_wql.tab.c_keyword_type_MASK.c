
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keyword {unsigned int len; int type; int const* name; } ;
typedef int WCHAR ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 struct keyword* FUNC_1 (struct keyword*,int ,int ,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2( const WCHAR *VAR_4, unsigned int VAR_5 )
{
    struct keyword VAR_6, *VAR_7;

    if (VAR_5 > VAR_0) return VAR_1;

    VAR_6.name = VAR_4;
    VAR_6.len = VAR_5;
    VAR_6.type = 0;
    VAR_7 = FUNC_1( &VAR_6, VAR_3, FUNC_0(VAR_3), sizeof(struct keyword), VAR_2 );
    if (VAR_7) return VAR_7->type;
    return VAR_1;
}
