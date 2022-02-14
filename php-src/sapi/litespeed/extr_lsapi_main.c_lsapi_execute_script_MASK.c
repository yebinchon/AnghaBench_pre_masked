
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zend_file_handle ;
struct TYPE_2__ {scalar_t__ path_translated; } ;


 TYPE_1__ FUNC_0 (int ) ;
 char* VAR_0 ;
 int FUNC_1 (char*,scalar_t__,int ,int) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_5( zend_file_handle * VAR_2)
{
    char *VAR_3;
    int VAR_4;
 FUNC_4(VAR_2, FUNC_0(VAR_1).path_translated);

    VAR_3 = VAR_0;
    *VAR_3++ = ':';
    VAR_4 = FUNC_3( FUNC_0(VAR_1).path_translated );
    if ( VAR_4 > 45 )
        VAR_4 = VAR_4 - 45;
    else
        VAR_4 = 0;
    FUNC_1( VAR_3, FUNC_0(VAR_1).path_translated + VAR_4, 0, 46 );

    FUNC_2(VAR_2);
    return 0;

}
