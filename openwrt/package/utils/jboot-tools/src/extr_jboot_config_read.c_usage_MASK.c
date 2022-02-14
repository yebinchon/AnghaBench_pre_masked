
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 char* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(int VAR_2)
{
 FUNC_1(VAR_1, "Usage: %s [OPTIONS...]\n", VAR_0);
 FUNC_1(VAR_1,
  "\n"
  "Options:\n"
  "  -i <file>       config partition file <file>\n"
  "  -m              print mac address\n"
  "  -e <file>       save eeprom calibration data image to the file <file>\n"
  "  -o <offset>     set start offset to <ofset>\n"
  "  -p              print config data\n"
  "  -v              verbose\n"
  "  -h              show this screen\n");

 FUNC_0(VAR_2);
}
