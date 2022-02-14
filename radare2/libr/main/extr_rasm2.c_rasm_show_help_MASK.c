
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(int VAR_0) {
 if (VAR_0 < 2) {
  FUNC_0 ("Usage: rasm2 [-ACdDehLBvw] [-a arch] [-b bits] [-o addr] [-s syntax]\n"
   "             [-f file] [-F fil:ter] [-i skip] [-l len] 'code'|hex|-\n");
 }
 if (VAR_0 != 1) {
  FUNC_0 (" -a [arch]    Set architecture to assemble/disassemble (see -L)\n"
   " -A           Show Analysis information from given hexpairs\n"
   " -b [bits]    Set cpu register size (8, 16, 32, 64) (RASM2_BITS)\n"
   " -B           Binary input/output (-l is mandatory for binary input)\n"
   " -c [cpu]     Select specific CPU (depends on arch)\n"
   " -C           Output in C format\n"
   " -d, -D       Disassemble from hexpair bytes (-D show hexpairs)\n"
   " -e           Use big endian instead of little endian\n"
   " -E           Display ESIL expression (same input as in -d)\n"
   " -f [file]    Read data from file\n"
   " -F [in:out]  Specify input and/or output filters (att2intel, x86.pseudo, ...)\n"
   " -h, -hh      Show this help, -hh for long\n"
   " -i [len]     ignore/skip N bytes of the input buffer\n"
   " -j           output in json format\n"
   " -k [kernel]  Select operating system (linux, windows, darwin, ..)\n"
   " -l [len]     Input/Output length\n"
   " -L           List Asm plugins: (a=asm, d=disasm, A=analyze, e=ESIL)\n"
   " -o,-@ [addr] Set start address for code (default 0)\n"
   " -O [file]    Output file name (rasm2 -Bf a.asm -O a)\n"
   " -p           Run SPP over input for assembly\n"
   " -q           quiet mode\n"
   " -r           output in radare commands\n"
   " -s [syntax]  Select syntax (intel, att)\n"
   " -v           Show version information\n"
   " -x           Use hex dwords instead of hex pairs when assembling.\n"
   " -w           What's this instruction for? describe opcode\n"
   " If '-l' value is greater than output length, output is padded with nops\n"
   " If the last argument is '-' reads from stdin\n");
  FUNC_0 ("Environment:\n"
   " RASM2_NOPLUGINS  do not load shared plugins (speedup loading)\n"
   " RASM2_ARCH       same as rasm2 -a\n"
   " RASM2_BITS       same as rasm2 -b\n"
   " R_DEBUG          if defined, show error messages and crash signal\n"
   "");
 }
 if (VAR_0 == 2) {
  FUNC_0 ("Supported Assembler directives:\n");
  FUNC_1 ();
 }
 return 0;
}
