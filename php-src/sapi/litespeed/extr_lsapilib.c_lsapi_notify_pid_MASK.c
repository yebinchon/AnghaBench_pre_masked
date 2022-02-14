
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lsapi_packet_header {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct lsapi_packet_header*,int ,scalar_t__) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int,char*,int) ;

__attribute__((used)) static inline int FUNC_4( int VAR_2 )
{
    char VAR_3[16];
    FUNC_1( (struct lsapi_packet_header *)VAR_3, VAR_1,
                        8 + VAR_0 );
    FUNC_2( &VAR_3[8], "\0PID", 4 );
    *((int *)&VAR_3[12]) = FUNC_0();

    if ( FUNC_3( VAR_2, VAR_3, 16 ) < 16 )
        return -1;
    return 0;
}
