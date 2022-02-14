
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
typedef scalar_t__ ULONG_PTR ;
struct TYPE_6__ {int nb_items; int self; } ;
typedef int LRESULT ;
typedef int * LPWSTR ;
typedef int const* LPCWSTR ;
typedef TYPE_1__ LB_DESCR ;
typedef int INT ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*,int,int *,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (char*,int ,int,char*) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (int *,int const*) ;
 int FUNC_9 (int const*) ;

__attribute__((used)) static LRESULT FUNC_10( LB_DESCR *VAR_2, INT VAR_3, LPCWSTR VAR_4 )
{
    LPWSTR VAR_5 = ((void*)0);
    ULONG_PTR VAR_6 = 0;
    LRESULT VAR_7;

    if (FUNC_1(VAR_2))
    {
        static const WCHAR VAR_8[] = { 0 };
        if (!VAR_4) VAR_4 = VAR_8;
        if (!(VAR_5 = FUNC_2( FUNC_0(), 0, (FUNC_9(VAR_4) + 1) * sizeof(WCHAR) )))
        {
            FUNC_5( VAR_2, VAR_0 );
            return VAR_1;
        }
        FUNC_8(VAR_5, VAR_4);
    }
    else VAR_6 = (ULONG_PTR)VAR_4;

    if (VAR_3 == -1) VAR_3 = VAR_2->nb_items;
    if ((VAR_7 = FUNC_4( VAR_2, VAR_3, VAR_5, VAR_6 )) != 0)
    {
        FUNC_3( FUNC_0(), 0, VAR_5 );
        return VAR_7;
    }

    FUNC_6("[%p]: added item %d %s\n",
          VAR_2->self, VAR_3, FUNC_1(VAR_2) ? FUNC_7(VAR_5) : "" );
    return VAR_3;
}
