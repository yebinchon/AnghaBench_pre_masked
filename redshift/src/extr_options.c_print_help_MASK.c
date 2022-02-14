
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,...) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_3(const char *VAR_5)
{





 FUNC_2(FUNC_0("Usage: %s -l LAT:LON -t DAY:NIGHT [OPTIONS...]\n"),
  VAR_5);
 FUNC_1("\n", VAR_4);



 FUNC_1(FUNC_0("Set color temperature of display"
  " according to time of day.\n"), VAR_4);
 FUNC_1("\n", VAR_4);



 FUNC_1(FUNC_0("  -h\t\tDisplay this help message\n"
  "  -v\t\tVerbose output\n"
  "  -V\t\tShow program version\n"), VAR_4);
 FUNC_1("\n", VAR_4);




 FUNC_1(FUNC_0("  -b DAY:NIGHT\tScreen brightness to apply (between 0.1 and 1.0)\n"
  "  -c FILE\tLoad settings from specified configuration file\n"
  "  -g R:G:B\tAdditional gamma correction to apply\n"
  "  -l LAT:LON\tYour current location\n"
  "  -l PROVIDER\tSelect provider for automatic"
  " location updates\n"
  "  \t\t(Type `list' to see available providers)\n"
  "  -m METHOD\tMethod to use to set color temperature\n"
  "  \t\t(Type `list' to see available methods)\n"
  "  -o\t\tOne shot mode (do not continuously adjust"
  " color temperature)\n"
  "  -O TEMP\tOne shot manual mode (set color temperature)\n"
  "  -p\t\tPrint mode (only print parameters and exit)\n"
  "  -P\t\tReset existing gamma ramps before applying new"
  " color effect\n"
  "  -x\t\tReset mode (remove adjustment from screen)\n"
  "  -r\t\tDisable fading between color temperatures\n"
  "  -t DAY:NIGHT\tColor temperature to set at daytime/night\n"),
       VAR_4);
 FUNC_1("\n", VAR_4);


 FUNC_2(FUNC_0("The neutral temperature is %uK. Using this value will not change "
   "the color\ntemperature of the display. Setting the color temperature "
   "to a value higher\nthan this results in more blue light, and setting "
   "a lower value will result in\nmore red light.\n"),
   VAR_2);

 FUNC_1("\n", VAR_4);


 FUNC_2(FUNC_0("Default values:\n\n"
   "  Daytime temperature: %uK\n"
   "  Night temperature: %uK\n"),
        VAR_0, VAR_1);

 FUNC_1("\n", VAR_4);


 FUNC_2(FUNC_0("Please report bugs to <%s>\n"), VAR_3);
}
