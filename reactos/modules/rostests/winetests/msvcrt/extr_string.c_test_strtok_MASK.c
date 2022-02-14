
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exp_offsetret1; int exp_offsetret2; int exp_offsetret3; scalar_t__ string; int delimiter; } ;


 int FUNC_0 (int,char*,char*,scalar_t__,char*) ;
 int FUNC_1 (char*,scalar_t__) ;
 char* FUNC_2 (char*,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_3(void)
{
    int VAR_1;
    char *VAR_2;
    char VAR_3[100];
    for( VAR_1 = 0; VAR_0[VAR_1].string; VAR_1++){
        FUNC_1( VAR_3, VAR_0[VAR_1].string);
        VAR_2 = FUNC_2( VAR_3, VAR_0[VAR_1].delimiter);
        FUNC_0( (int)(VAR_2 - VAR_3) == VAR_0[VAR_1].exp_offsetret1 ||
                (!VAR_2 && VAR_0[VAR_1].exp_offsetret1 == -1),
                "string (%p) \'%s\' return %p\n",
                VAR_3, VAR_0[VAR_1].string, VAR_2);
        if( !VAR_2) continue;
        VAR_2 = FUNC_2( ((void*)0), VAR_0[VAR_1].delimiter);
        FUNC_0( (int)(VAR_2 - VAR_3) == VAR_0[VAR_1].exp_offsetret2 ||
                (!VAR_2 && VAR_0[VAR_1].exp_offsetret2 == -1),
                "second call string (%p) \'%s\' return %p\n",
                VAR_3, VAR_0[VAR_1].string, VAR_2);
        if( !VAR_2) continue;
        VAR_2 = FUNC_2( ((void*)0), VAR_0[VAR_1].delimiter);
        FUNC_0( (int)(VAR_2 - VAR_3) == VAR_0[VAR_1].exp_offsetret3 ||
                (!VAR_2 && VAR_0[VAR_1].exp_offsetret3 == -1),
                "third call string (%p) \'%s\' return %p\n",
                VAR_3, VAR_0[VAR_1].string, VAR_2);
    }
}
