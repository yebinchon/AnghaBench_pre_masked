
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SOCKET ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ,char*,int,int ) ;

__attribute__((used)) static void FUNC_2 ( SOCKET VAR_0 )
{
    char VAR_1[256];
    int VAR_2, VAR_3 = 0;
    while ( ( VAR_2 = FUNC_1 ( VAR_0, VAR_1, 256, 0 ) ) > 0 )
        VAR_3 += VAR_2;
    FUNC_0 ( VAR_3 <= 0, "garbage data received: %d bytes\n", VAR_3 );
}
