
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_dirid {int id; int * str; } ;
typedef int WCHAR ;
typedef int HINF ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct user_dirid* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int *) ;
 struct user_dirid* FUNC_3 (int ,int ,struct user_dirid*,int) ;
 int FUNC_4 (char*,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int) ;
 int VAR_3 ;
 struct user_dirid* VAR_4 ;

__attribute__((used)) static BOOL FUNC_7( HINF VAR_5, int VAR_6, WCHAR *VAR_7 )
{
    int VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) if (VAR_4[VAR_8].id == VAR_6) break;

    if (VAR_8 < VAR_3) FUNC_2( FUNC_0(), 0, VAR_4[VAR_8].str );
    else
    {
        if (VAR_3 >= VAR_2)
        {
            int VAR_9 = FUNC_6( 32, VAR_2 * 2 );

     struct user_dirid *VAR_10;

     if (VAR_4)
                VAR_10 = FUNC_3( FUNC_0(), 0, VAR_4,
                                                  VAR_9 * sizeof(*VAR_10) );
     else
                VAR_10 = FUNC_1( FUNC_0(), 0,
                                                  VAR_9 * sizeof(*VAR_10) );

            if (!VAR_10) return VAR_0;
            VAR_4 = VAR_10;
            VAR_2 = VAR_9;
        }
        VAR_3++;
    }
    VAR_4[VAR_8].id = VAR_6;
    VAR_4[VAR_8].str = VAR_7;
    FUNC_4("id %d -> %s\n", VAR_6, FUNC_5(VAR_7) );
    return VAR_1;
}
