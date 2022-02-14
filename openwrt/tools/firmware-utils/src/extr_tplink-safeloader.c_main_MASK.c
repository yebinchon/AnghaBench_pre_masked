
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_info {int dummy; } ;


 int FUNC_0 (char const*,char const*,char const*,unsigned int,int,int,struct device_info*) ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (int,int ,char*,...) ;
 int FUNC_3 (char const*,char const*) ;
 struct device_info* FUNC_4 (char const*) ;
 int FUNC_5 (int,char**,char*) ;
 char* VAR_0 ;
 int FUNC_6 () ;
 int FUNC_7 (char*,char*,unsigned int*) ;
 int FUNC_8 (char*) ;

int FUNC_9(int VAR_1, char *VAR_2[]) {
 const char *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
 const char *VAR_7 = ((void*)0), *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 bool VAR_10 = 0, VAR_11 = 0;
 unsigned VAR_12 = 0;
 struct device_info *VAR_13;
 FUNC_6();

 while (1) {
  int VAR_14;

  VAR_14 = FUNC_5(VAR_1, VAR_2, "B:k:r:o:V:jSh:x:d:z:");
  if (VAR_14 == -1)
   break;

  switch (VAR_14) {
  case 'B':
   VAR_3 = VAR_0;
   break;

  case 'k':
   VAR_4 = VAR_0;
   break;

  case 'r':
   VAR_5 = VAR_0;
   break;

  case 'o':
   VAR_6 = VAR_0;
   break;

  case 'V':
   FUNC_7(VAR_0, "r%u", &VAR_12);
   break;

  case 'j':
   VAR_10 = 1;
   break;

  case 'S':
   VAR_11 = 1;
   break;

  case 'h':
   FUNC_8(VAR_2[0]);
   return 0;

  case 'd':
   VAR_8 = VAR_0;
   break;

  case 'x':
   VAR_7 = VAR_0;
   break;

  case 'z':
   VAR_9 = VAR_0;
   break;

  default:
   FUNC_8(VAR_2[0]);
   return 1;
  }
 }

 if (VAR_7 || VAR_8) {
  if (!VAR_7)
   FUNC_2(1, 0, "No factory/oem image given via -x <file>. Output directory is only valid with -x");
  if (!VAR_8)
   FUNC_2(1, 0, "Can not extract an image without output directory. Use -d <dir>");
  FUNC_3(VAR_7, VAR_8);
 } else if (VAR_9) {
  if (!VAR_6)
   FUNC_2(1, 0, "Can not convert a factory/oem image into sysupgrade image without output file. Use -o <file>");
  FUNC_1(VAR_9, VAR_6);
 } else {
  if (!VAR_3)
   FUNC_2(1, 0, "no board has been specified");
  if (!VAR_4)
   FUNC_2(1, 0, "no kernel image has been specified");
  if (!VAR_5)
   FUNC_2(1, 0, "no rootfs image has been specified");
  if (!VAR_6)
   FUNC_2(1, 0, "no output filename has been specified");

  VAR_13 = FUNC_4(VAR_3);

  if (VAR_13 == ((void*)0))
   FUNC_2(1, 0, "unsupported board %s", VAR_3);

  FUNC_0(VAR_6, VAR_4, VAR_5, VAR_12, VAR_10, VAR_11, VAR_13);
 }

 return 0;
}
