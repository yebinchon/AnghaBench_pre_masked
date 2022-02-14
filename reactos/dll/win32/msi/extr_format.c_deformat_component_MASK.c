
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_11__ {int package; } ;
struct TYPE_10__ {int len; } ;
struct TYPE_9__ {scalar_t__ Action; int Directory; } ;
typedef TYPE_1__ MSICOMPONENT ;
typedef TYPE_2__ FORMSTR ;
typedef TYPE_3__ FORMAT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_1 (int *,int ,int) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ) ;
 int * FUNC_6 (int ,int ,int *) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static WCHAR *FUNC_9( FORMAT *VAR_1, FORMSTR *VAR_2, int *VAR_3 )
{
    WCHAR *VAR_4, *VAR_5;
    MSICOMPONENT *VAR_6;

    if (!(VAR_4 = FUNC_2( (VAR_2->len + 1) * sizeof(WCHAR) ))) return ((void*)0);
    FUNC_1(VAR_4, FUNC_0(VAR_1, VAR_2), VAR_2->len + 1);

    if (!(VAR_6 = FUNC_4( VAR_1->package, VAR_4 )))
    {
        FUNC_3( VAR_4 );
        return ((void*)0);
    }
    if (VAR_6->Action == VAR_0)
        VAR_5 = FUNC_6( VAR_1->package, VAR_6->Directory, ((void*)0) );
    else
        VAR_5 = FUNC_7( FUNC_5( VAR_1->package, VAR_6->Directory ) );

    if (VAR_5) *VAR_3 = FUNC_8( VAR_5 );
    else *VAR_3 = 0;
    FUNC_3( VAR_4 );
    return VAR_5;
}
