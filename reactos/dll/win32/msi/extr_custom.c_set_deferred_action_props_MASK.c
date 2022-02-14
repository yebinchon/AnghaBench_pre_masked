
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_3__ {int db; } ;
typedef TYPE_1__ MSIPACKAGE ;


 int FUNC_0 (int ,int ,char const*,int) ;
 char* FUNC_1 (char const*,char) ;
 char* FUNC_2 (char const*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3( MSIPACKAGE *VAR_3, const WCHAR *VAR_4 )
{
    static const WCHAR VAR_5[] = {'<','=','>',0};
    const WCHAR *VAR_6, *VAR_7 = VAR_4 + 1;

    VAR_6 = FUNC_2(VAR_7, VAR_5);
    FUNC_0( VAR_3->db, VAR_0, VAR_7, VAR_6 - VAR_7 );
    VAR_7 = VAR_6 + 3;

    VAR_6 = FUNC_2(VAR_7, VAR_5);
    FUNC_0( VAR_3->db, VAR_2, VAR_7, VAR_6 - VAR_7 );
    VAR_7 = VAR_6 + 3;

    VAR_6 = FUNC_1(VAR_7, ']');
    FUNC_0( VAR_3->db, VAR_1, VAR_7, VAR_6 - VAR_7 );
}
