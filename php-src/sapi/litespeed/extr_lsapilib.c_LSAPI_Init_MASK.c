
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (char*,int ) ;
 int FUNC_2 (void*,char*) ;
 int FUNC_3 (int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__* VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (int ,int ) ;

int FUNC_8(void)
{
    if ( !VAR_6 )
    {
        VAR_13 = FUNC_4();
        VAR_12[0] = 0;
        FUNC_6(VAR_2, VAR_8);
        FUNC_6(VAR_3, VAR_9);






        FUNC_3( 2, 1 );
        if ( FUNC_0( &VAR_7, VAR_0 ) == -1 )
            return -1;
        VAR_6 = 1;
        VAR_11 = FUNC_5();
        void *VAR_14 = FUNC_1("libpthread.so", VAR_1);
        if (VAR_14)
            VAR_10 = FUNC_2(VAR_14, "pthread_atfork");

    }
    return 0;
}
