
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(const char *VAR_0)
{
 FUNC_1("Usage: %s [-DsbdlHOLC3vpNR24SI]\n", VAR_0);
 FUNC_2("  -D --device   device to use (default /dev/spidev1.1)\n"
      "  -s --speed    max speed (Hz)\n"
      "  -d --delay    delay (usec)\n"
      "  -b --bpw      bits per word\n"
      "  -i --input    input data from a file (e.g. \"test.bin\")\n"
      "  -o --output   output data to a file (e.g. \"results.bin\")\n"
      "  -l --loop     loopback\n"
      "  -H --cpha     clock phase\n"
      "  -O --cpol     clock polarity\n"
      "  -L --lsb      least significant bit first\n"
      "  -C --cs-high  chip select active high\n"
      "  -3 --3wire    SI/SO signals shared\n"
      "  -v --verbose  Verbose (show tx buffer)\n"
      "  -p            Send data (e.g. \"1234\\xde\\xad\")\n"
      "  -N --no-cs    no chip select\n"
      "  -R --ready    slave pulls low to pause\n"
      "  -2 --dual     dual transfer\n"
      "  -4 --quad     quad transfer\n"
      "  -S --size     transfer size\n"
      "  -I --iter     iterations\n");
 FUNC_0(1);
}
