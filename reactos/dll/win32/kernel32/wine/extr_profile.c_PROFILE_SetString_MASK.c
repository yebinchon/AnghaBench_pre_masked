
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_5__ {int changed; int section; } ;
struct TYPE_4__ {int * value; } ;
typedef TYPE_1__ PROFILEKEY ;
typedef int * LPCWSTR ;
typedef int BOOL ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int *) ;
 TYPE_1__* FUNC_5 (int *,int *,int *,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;
 int VAR_2 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static BOOL FUNC_12( LPCWSTR VAR_3, LPCWSTR VAR_4,
                               LPCWSTR VAR_5, BOOL VAR_6 )
{
    if (!VAR_4)
    {
        FUNC_7("(%s)\n", FUNC_8(VAR_3));
        VAR_0->changed |= FUNC_4( &VAR_0->section,
                                                      VAR_3 );
        return VAR_2;

    }
    else if (!VAR_5)
    {
        FUNC_7("(%s,%s)\n", FUNC_8(VAR_3), FUNC_8(VAR_4) );
        VAR_0->changed |= FUNC_3( &VAR_0->section,
                                                  VAR_3, VAR_4 );
        return VAR_2;
    }
    else
    {
        PROFILEKEY *VAR_7 = FUNC_5(&VAR_0->section, VAR_3,
                                        VAR_4, VAR_2, VAR_6 );
        FUNC_7("(%s,%s,%s):\n",
              FUNC_8(VAR_3), FUNC_8(VAR_4), FUNC_8(VAR_5) );
        if (!VAR_7) return VAR_1;



        while (FUNC_6(*VAR_5)) VAR_5++;

        if (VAR_7->value)
        {
            if (!FUNC_9( VAR_7->value, VAR_5 ))
            {
                FUNC_7("  no change needed\n" );
                return VAR_2;
            }
            FUNC_7("  replacing %s\n", FUNC_8(VAR_7->value) );
            FUNC_2( FUNC_0(), 0, VAR_7->value );
        }
        else FUNC_7("  creating key\n" );
        VAR_7->value = FUNC_1( FUNC_0(), 0, (FUNC_11(VAR_5)+1) * sizeof(WCHAR) );
        FUNC_10( VAR_7->value, VAR_5 );
        VAR_0->changed = VAR_2;
    }
    return VAR_2;
}
