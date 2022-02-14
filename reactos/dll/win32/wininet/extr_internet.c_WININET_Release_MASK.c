
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ htype; int dwInternalFlags; scalar_t__ hInternet; TYPE_1__* vtbl; int entry; int dwContext; int refs; } ;
typedef TYPE_2__ object_header_t ;
typedef int ULONG ;
typedef size_t UINT_PTR ;
struct TYPE_10__ {int (* Destroy ) (TYPE_2__*) ;int (* CloseConnection ) (TYPE_2__*) ;} ;
typedef int HINTERNET ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,int ,scalar_t__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,TYPE_2__*,...) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int ** VAR_7 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *) ;
 size_t VAR_8 ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;

BOOL FUNC_10( object_header_t *VAR_9 )
{
    ULONG VAR_10 = FUNC_2(&VAR_9->refs);
    FUNC_4( "object %p refcount = %d\n", VAR_9, VAR_10 );
    if( !VAR_10 )
    {
        FUNC_6(VAR_9);
        if ( VAR_9->vtbl->CloseConnection )
        {
            FUNC_4( "closing connection %p\n", VAR_9);
            VAR_9->vtbl->CloseConnection( VAR_9 );
        }

        if ((VAR_9->htype != VAR_4 && VAR_9->htype != VAR_3)
            || !(VAR_9->dwInternalFlags & VAR_0))
        {
            FUNC_1(VAR_9, VAR_9->dwContext,
                                  VAR_1, &VAR_9->hInternet,
                                  sizeof(HINTERNET));
        }
        FUNC_4( "destroying object %p\n", VAR_9);
        if ( VAR_9->htype != VAR_5 )
            FUNC_7( &VAR_9->entry );
        VAR_9->vtbl->Destroy( VAR_9 );

        if(VAR_9->hInternet) {
            UINT_PTR VAR_11 = (UINT_PTR)VAR_9->hInternet;

            FUNC_0( &VAR_6 );

            VAR_7[VAR_11] = ((void*)0);
            if(VAR_8 > VAR_11)
                VAR_8 = VAR_11;

            FUNC_3( &VAR_6 );
        }

        FUNC_5(VAR_9);
    }
    return VAR_2;
}
