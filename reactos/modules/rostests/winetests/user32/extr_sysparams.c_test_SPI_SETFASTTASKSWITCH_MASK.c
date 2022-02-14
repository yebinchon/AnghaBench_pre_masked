
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4( void )
{
    BOOL VAR_1;
    BOOL VAR_2;

    FUNC_3("testing SPI_GETFASTTASKSWITCH\n");
    FUNC_0(0xdeadbeef);
    VAR_1=FUNC_1( VAR_0, 0, &VAR_2, 0 );
    if (!FUNC_2(VAR_1,"SPI_{GET,SET}FASTTASKSWITCH"))
        return;




}
