
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct async_header {void (* proc ) (struct async_header*) ;int * sink; void* wait; void* cancel; } ;
typedef int IWbemObjectSink ;
typedef int BOOL ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (int *,int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_3( struct async_header *VAR_2, IWbemObjectSink *VAR_3,
                        void (*VAR_4)(struct async_header *) )
{
    if (!(VAR_2->wait = FUNC_1( ((void*)0), VAR_0, VAR_0, ((void*)0) ))) return VAR_0;
    if (!(VAR_2->cancel = FUNC_1( ((void*)0), VAR_0, VAR_0, ((void*)0) )))
    {
        FUNC_0( VAR_2->wait );
        return VAR_0;
    }
    VAR_2->proc = VAR_4;
    VAR_2->sink = VAR_3;
    FUNC_2( VAR_3 );
    return VAR_1;
}
