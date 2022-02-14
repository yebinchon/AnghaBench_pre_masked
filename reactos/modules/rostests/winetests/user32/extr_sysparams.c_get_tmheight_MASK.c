
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tmHeight; int tmExternalLeading; } ;
typedef TYPE_1__ TEXTMETRICA ;
typedef int LOGFONTA ;
typedef int HFONT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3( LOGFONTA *VAR_1, int VAR_2)
{
    TEXTMETRICA VAR_3;
    HFONT VAR_4 = FUNC_0( VAR_1);
    VAR_4 = FUNC_2( VAR_0, VAR_4);
    FUNC_1( VAR_0, &VAR_3);
    VAR_4 = FUNC_2( VAR_0, VAR_4);
    return VAR_3.tmHeight + (VAR_2 ? VAR_3.tmExternalLeading : 0);
}
