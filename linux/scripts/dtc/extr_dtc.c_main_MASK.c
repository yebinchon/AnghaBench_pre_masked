
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dt_info {char const* outname; long long boot_cpuid_phys; int dtsflags; int dt; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char const* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int FUNC_0 (char*,...) ;
 struct dt_info* FUNC_1 (char const*) ;
 struct dt_info* FUNC_2 (char const*) ;
 struct dt_info* FUNC_3 (char const*) ;
 int FUNC_4 (int *,struct dt_info*,int) ;
 int FUNC_5 (int *,struct dt_info*,int) ;
 int FUNC_6 (int *,struct dt_info*) ;
 int FUNC_7 (int *,struct dt_info*) ;
 int VAR_10 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (int ,char*) ;
 void* FUNC_11 (char const*,char*) ;
 int FUNC_12 (void*,char*,char const*) ;
 int FUNC_13 (char,void*) ;
 int VAR_11 ;
 int FUNC_14 (struct dt_info*,char*) ;
 int FUNC_15 (struct dt_info*,char*,int) ;
 int FUNC_16 (struct dt_info*,char*) ;
 int VAR_12 ;
 char* FUNC_17 (char const*,char*) ;
 char* FUNC_18 (char const*,int *) ;
 int FUNC_19 (char const*) ;
 void* VAR_13 ;
 char const* VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 int FUNC_20 (int,int,char const*) ;
 int VAR_17 ;
 int FUNC_21 (int,struct dt_info*) ;
 scalar_t__ VAR_18 ;
 void* VAR_19 ;
 int FUNC_22 (struct dt_info*) ;
 int FUNC_23 (char const*) ;
 int * VAR_20 ;
 scalar_t__ FUNC_24 (char const*,char*) ;
 int FUNC_25 (int ) ;
 void* FUNC_26 (char const*,int *,int ) ;
 long long FUNC_27 (char const*,int *,int ) ;
 int FUNC_28 (char*) ;
 int FUNC_29 () ;
 int FUNC_30 () ;

int FUNC_31(int VAR_21, char *VAR_22[])
{
 struct dt_info *VAR_23;
 const char *VAR_24 = ((void*)0);
 const char *VAR_25 = ((void*)0);
 const char *VAR_26 = "-";
 const char *VAR_27 = ((void*)0);
 bool VAR_28 = 0, VAR_29 = 0;
 const char *VAR_30;
 int VAR_31;
 FILE *VAR_32 = ((void*)0);
 int VAR_33 = VAR_0;
 long long VAR_34 = -1;

 VAR_18 = 0;
 VAR_19 = 0;
 VAR_13 = 0;
 VAR_16 = 0;
 VAR_6 = 0;

 while ((VAR_31 = FUNC_29()) != VAR_2) {
  switch (VAR_31) {
  case 'I':
   VAR_24 = VAR_14;
   break;
  case 'O':
   VAR_25 = VAR_14;
   break;
  case 'o':
   VAR_26 = VAR_14;
   break;
  case 'V':
   VAR_33 = FUNC_26(VAR_14, ((void*)0), 0);
   break;
  case 'd':
   VAR_27 = VAR_14;
   break;
  case 'R':
   VAR_19 = FUNC_26(VAR_14, ((void*)0), 0);
   break;
  case 'S':
   VAR_13 = FUNC_26(VAR_14, ((void*)0), 0);
   break;
  case 'p':
   VAR_16 = FUNC_26(VAR_14, ((void*)0), 0);
   break;
  case 'a':
   VAR_6 = FUNC_26(VAR_14, ((void*)0), 0);
   if (!FUNC_19(VAR_6))
    FUNC_0("Invalid argument \"%d\" to -a option\n",
        VAR_6);
   break;
  case 'f':
   VAR_28 = 1;
   break;
  case 'q':
   VAR_18++;
   break;
  case 'b':
   VAR_34 = FUNC_27(VAR_14, ((void*)0), 0);
   break;
  case 'i':
   FUNC_23(VAR_14);
   break;
  case 'v':
   FUNC_30();
  case 'H':
   if (FUNC_24(VAR_14, "legacy"))
    VAR_17 = VAR_5;
   else if (FUNC_24(VAR_14, "epapr"))
    VAR_17 = VAR_4;
   else if (FUNC_24(VAR_14, "both"))
    VAR_17 = VAR_3;
   else
    FUNC_0("Invalid argument \"%s\" to -H option\n",
        VAR_14);
   break;

  case 's':
   VAR_29 = 1;
   break;

  case 'W':
   FUNC_20(1, 0, VAR_14);
   break;

  case 'E':
   FUNC_20(0, 1, VAR_14);
   break;

  case '@':
   VAR_12 = 1;
   break;
  case 'A':
   VAR_8 = 1;
   break;
  case 'T':
   VAR_7++;
   break;

  case 'h':
   FUNC_28(((void*)0));
  default:
   FUNC_28("unknown option");
  }
 }

 if (VAR_21 > (VAR_15+1))
  FUNC_28("missing files");
 else if (VAR_21 < (VAR_15+1))
  VAR_30 = "-";
 else
  VAR_30 = VAR_22[VAR_15];


 if (VAR_13 && VAR_16)
  FUNC_0("Can't set both -p and -S\n");

 if (VAR_27) {
  VAR_9 = FUNC_11(VAR_27, "w");
  if (!VAR_9)
   FUNC_0("Couldn't open dependency file %s: %s\n", VAR_27,
       FUNC_25(VAR_10));
  FUNC_12(VAR_9, "%s:", VAR_26);
 }

 if (VAR_24 == ((void*)0))
  VAR_24 = FUNC_17(VAR_30, "dts");
 if (VAR_25 == ((void*)0)) {
  VAR_25 = FUNC_18(VAR_26, ((void*)0));
  if (VAR_25 == ((void*)0)) {
   if (FUNC_24(VAR_24, "dts"))
    VAR_25 = "dtb";
   else
    VAR_25 = "dts";
  }
 }
 if (VAR_7 && (!FUNC_24(VAR_24, "dts") || !FUNC_24(VAR_25, "dts")))
  FUNC_0("--annotate requires -I dts -O dts\n");
 if (FUNC_24(VAR_24, "dts"))
  VAR_23 = FUNC_3(VAR_30);
 else if (FUNC_24(VAR_24, "fs"))
  VAR_23 = FUNC_2(VAR_30);
 else if(FUNC_24(VAR_24, "dtb"))
  VAR_23 = FUNC_1(VAR_30);
 else
  FUNC_0("Unknown input format \"%s\"\n", VAR_24);

 VAR_23->outname = VAR_26;

 if (VAR_9) {
  FUNC_13('\n', VAR_9);
  FUNC_9(VAR_9);
 }

 if (VAR_34 != -1)
  VAR_23->boot_cpuid_phys = VAR_34;

 FUNC_10(VAR_23->dt, "");


 if (VAR_23->dtsflags & VAR_1) {
  VAR_11 = 1;
 }

 FUNC_21(VAR_28, VAR_23);

 if (VAR_8)
  FUNC_15(VAR_23, "aliases", 0);

 if (VAR_12)
  FUNC_15(VAR_23, "__symbols__", 1);

 if (VAR_11) {
  FUNC_14(VAR_23, "__fixups__");
  FUNC_16(VAR_23, "__local_fixups__");
 }

 if (VAR_29)
  FUNC_22(VAR_23);

 if (FUNC_24(VAR_26, "-")) {
  VAR_32 = VAR_20;
 } else {
  VAR_32 = FUNC_11(VAR_26, "wb");
  if (! VAR_32)
   FUNC_0("Couldn't open output file %s: %s\n",
       VAR_26, FUNC_25(VAR_10));
 }

 if (FUNC_24(VAR_25, "dts")) {
  FUNC_6(VAR_32, VAR_23);

 } else if (FUNC_24(VAR_25, "yaml")) {
  if (!FUNC_24(VAR_24, "dts"))
   FUNC_0("YAML output format requires dts input format\n");
  FUNC_7(VAR_32, VAR_23);

 } else if (FUNC_24(VAR_25, "dtb")) {
  FUNC_5(VAR_32, VAR_23, VAR_33);
 } else if (FUNC_24(VAR_25, "asm")) {
  FUNC_4(VAR_32, VAR_23, VAR_33);
 } else if (FUNC_24(VAR_25, "null")) {

 } else {
  FUNC_0("Unknown output format \"%s\"\n", VAR_25);
 }

 FUNC_8(0);
}
