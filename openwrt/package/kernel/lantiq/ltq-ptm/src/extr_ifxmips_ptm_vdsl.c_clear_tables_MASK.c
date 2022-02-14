
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_10__ {int dataptr; } ;
struct TYPE_9__ {int dataptr; } ;
struct TYPE_8__ {int dataptr; } ;
struct TYPE_7__ {int dataptr; } ;
struct TYPE_6__ {int dataptr; } ;


 TYPE_5__* VAR_0 ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_0 (int) ;
 int VAR_8 ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(void)
{
    struct sk_buff *VAR_9;
    int VAR_10, VAR_11;

    for ( VAR_10 = 0; VAR_10 < VAR_5; VAR_10++ ) {
        VAR_9 = FUNC_2(VAR_4[VAR_10].dataptr);
        if ( VAR_9 != ((void*)0) )
            FUNC_1(VAR_9);
    }

    for ( VAR_10 = 0; VAR_10 < VAR_1; VAR_10++ ) {
        VAR_9 = FUNC_2(VAR_0[VAR_10].dataptr);
        if ( VAR_9 != ((void*)0) )
            FUNC_1(VAR_9);
    }

    for ( VAR_11 = 0; VAR_11 < 8; VAR_11++ )
        for ( VAR_10 = 0; VAR_10 < VAR_8; VAR_10++ ) {
            VAR_9 = FUNC_2(FUNC_0(VAR_11)[VAR_10].dataptr);
            if ( VAR_9 != ((void*)0) )
                FUNC_1(VAR_9);
        }

    for ( VAR_10 = 0; VAR_10 < VAR_7; VAR_10++ ) {
        VAR_9 = FUNC_2(VAR_6[VAR_10].dataptr);
        if ( VAR_9 != ((void*)0) )
            FUNC_1(VAR_9);
    }

    for ( VAR_10 = 0; VAR_10 < VAR_3; VAR_10++ ) {
        VAR_9 = FUNC_2(VAR_2[VAR_10].dataptr);
        if ( VAR_9 != ((void*)0) )
            FUNC_1(VAR_9);
    }
}
