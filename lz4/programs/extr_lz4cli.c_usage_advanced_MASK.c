
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const char* VAR_3)
{
    FUNC_0(VAR_1);
    FUNC_1(VAR_3);
    FUNC_0( "\n");
    FUNC_0( "Advanced arguments :\n");
    FUNC_0( " -V     : display Version number and exit \n");
    FUNC_0( " -v     : verbose mode \n");
    FUNC_0( " -q     : suppress warnings; specify twice to suppress errors too\n");
    FUNC_0( " -c     : force write to standard output, even if it is the console\n");
    FUNC_0( " -t     : test compressed file integrity\n");
    FUNC_0( " -m     : multiple input files (implies automatic output filenames)\n");



    FUNC_0( " -l     : compress using Legacy format (Linux kernel compression)\n");
    FUNC_0( " -B#    : cut file into blocks of size # bytes [32+] \n");
    FUNC_0( "                     or predefined block size [4-7] (default: 7) \n");
    FUNC_0( " -BI    : Block Independence (default) \n");
    FUNC_0( " -BD    : Block dependency (improves compression ratio) \n");
    FUNC_0( " -BX    : enable block checksum (default:disabled) \n");
    FUNC_0( "--no-frame-crc : disable stream checksum (default:enabled) \n");
    FUNC_0( "--content-size : compressed frame includes original size (default:not present)\n");
    FUNC_0( "--list FILE : lists information about .lz4 files (useful for files compressed with --content-size flag)\n");
    FUNC_0( "--[no-]sparse  : sparse mode (default:enabled on file, disabled on stdout)\n");
    FUNC_0( "--favor-decSpeed: compressed files decompress faster, but are less compressed \n");
    FUNC_0( "--fast[=#]: switch to ultra fast compression level (default: %i)\n", 1);
    FUNC_0( "--best  : same as -%d\n", VAR_0);
    FUNC_0( "Benchmark arguments : \n");
    FUNC_0( " -b#    : benchmark file(s), using # compression level (default : 1) \n");
    FUNC_0( " -e#    : test all compression levels from -bX to # (default : 1)\n");
    FUNC_0( " -i#    : minimum evaluation time in seconds (default : 3s) \n");
    if (VAR_2) {
        FUNC_0( "Legacy arguments : \n");
        FUNC_0( " -c0    : fast compression \n");
        FUNC_0( " -c1    : high compression \n");
        FUNC_0( " -c2,-hc: very high compression \n");
        FUNC_0( " -y     : overwrite output without prompting \n");
    }
    return 0;
}
