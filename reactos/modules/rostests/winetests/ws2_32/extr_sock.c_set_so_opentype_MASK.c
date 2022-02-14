
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int optval ;
typedef int LPVOID ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int*) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_3 ( BOOL VAR_3 )
{
    int VAR_4 = !VAR_3, VAR_5, VAR_6 = sizeof (int);

    FUNC_1 ( FUNC_2 ( VAR_0, VAR_1, VAR_2,
                      (LPVOID) &VAR_4, sizeof (VAR_4) ) == 0,
         "setting SO_OPENTYPE failed\n" );
    FUNC_1 ( FUNC_0 ( VAR_0, VAR_1, VAR_2,
                      (LPVOID) &VAR_5, &VAR_6 ) == 0,
         "getting SO_OPENTYPE failed\n" );
    FUNC_1 ( VAR_4 == VAR_5, "failed to set SO_OPENTYPE\n" );
}
