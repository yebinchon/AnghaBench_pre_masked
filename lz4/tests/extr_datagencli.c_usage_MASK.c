
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(char* VAR_3)
{
    FUNC_0( "Compressible data generator\n");
    FUNC_0( "Usage :\n");
    FUNC_0( "      %s [size] [args]\n", VAR_3);
    FUNC_0( "\n");
    FUNC_0( "Arguments :\n");
    FUNC_0( " -g#    : generate # data (default:%i)\n", VAR_2);
    FUNC_0( " -s#    : Select seed (default:%i)\n", VAR_1);
    FUNC_0( " -P#    : Select compressibility in %% (default:%i%%)\n", VAR_0);
    FUNC_0( " -h     : display help and exit\n");
    FUNC_0( "Special values :\n");
    FUNC_0( " -P0    : generate incompressible noise\n");
    FUNC_0( " -P100  : generate sparse files\n");
    return 0;
}
