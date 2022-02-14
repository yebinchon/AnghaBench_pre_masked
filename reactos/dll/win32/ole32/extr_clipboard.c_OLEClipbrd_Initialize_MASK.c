
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int marshal_data; int * cached_enum; int * src_data; int * window; int * latest_snapshot; } ;
typedef TYPE_1__ ole_clipbrd ;
typedef int HGLOBAL ;


 int FUNC_0 (int ,int ,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,TYPE_1__*) ;
 int FUNC_7 (char*) ;
 int VAR_2 ;
 int FUNC_8 () ;
 TYPE_1__* VAR_3 ;

void FUNC_9(void)
{
    FUNC_8();

    if ( !VAR_3 )
    {
        ole_clipbrd* VAR_4;
        HGLOBAL VAR_5;

        FUNC_7("()\n");

        VAR_4 = FUNC_5( FUNC_2(), 0, sizeof(*VAR_4) );
        if (!VAR_4) return;

        VAR_4->latest_snapshot = ((void*)0);
        VAR_4->window = ((void*)0);
        VAR_4->src_data = ((void*)0);
        VAR_4->cached_enum = ((void*)0);

        VAR_5 = FUNC_3(VAR_0 | VAR_1, 0);
        if(!VAR_5)
        {
            FUNC_6(FUNC_2(), 0, VAR_4);
            return;
        }

        if(FUNC_1(FUNC_0(VAR_5, VAR_2, &VAR_4->marshal_data)))
        {
            FUNC_4(VAR_5);
            FUNC_6(FUNC_2(), 0, VAR_4);
            return;
        }

        VAR_3 = VAR_4;
    }
}
