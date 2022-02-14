
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int marshal_data; scalar_t__ window; scalar_t__ src_data; } ;
typedef TYPE_1__ ole_clipbrd ;
typedef char WCHAR ;
typedef int HINSTANCE ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ) ;
 int VAR_0 ;
 int FUNC_8 (TYPE_1__*,int *) ;
 TYPE_1__* VAR_1 ;

void FUNC_9(void)
{
    ole_clipbrd *VAR_2 = VAR_1;

    FUNC_6("()\n");

    if ( VAR_2 )
    {
        static const WCHAR VAR_3[] = {'o','l','e','3','2',0};
        HINSTANCE VAR_4 = FUNC_1(VAR_3);



        if (VAR_2->src_data)
        {
            FUNC_4(VAR_2->src_data);
            FUNC_8(VAR_2, ((void*)0));
        }

        if ( VAR_2->window )
        {
            FUNC_0(VAR_2->window);
            FUNC_7( VAR_0, VAR_4 );
        }

        FUNC_5(VAR_2->marshal_data);
        FUNC_3(FUNC_2(), 0, VAR_2);
        VAR_1 = ((void*)0);
    }
}
