
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,char*) ;
 int FUNC_3 (char*,int,int,int *) ;
 int FUNC_4 (int,int,int ) ;
 scalar_t__ FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (char*,int,...) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int,char const*,int) ;

__attribute__((used)) static void FUNC_10( void )
{
    static const char VAR_7[] = {0,1,2,3,4,5,6,7,8,9};
    char VAR_8[10];
    int VAR_9;
    FILE *VAR_10;

    VAR_9 = FUNC_7 ("fdopen.tst", VAR_3 | VAR_1 | VAR_0, VAR_5 |VAR_6);
    FUNC_9 (VAR_9, VAR_7, sizeof (VAR_7));
    FUNC_0 (VAR_9);

    VAR_9 = FUNC_7 ("fdopen.tst", VAR_2 | VAR_0);
    FUNC_4 (VAR_9, 5, VAR_4);
    VAR_10 = FUNC_2 (VAR_9, "rb");
    FUNC_6 (FUNC_3 (VAR_8, 1, sizeof (VAR_7), VAR_10) == 5, "read wrong byte count\n");
    FUNC_6 (FUNC_5 (VAR_8, VAR_7 + 5, 5) == 0, "read wrong bytes\n");
    FUNC_1 (VAR_10);
    FUNC_8 ("fdopen.tst");
}
