
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 () ;
 unsigned int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(int VAR_0)
{
  unsigned int VAR_1;
  unsigned int VAR_2, VAR_3;
  int VAR_4, VAR_5;
  const char *VAR_6;
  int VAR_7;

  VAR_1 = FUNC_3();

  VAR_4 = FUNC_2();
  VAR_2 = FUNC_3();
  VAR_3 = FUNC_3();
  VAR_5 = FUNC_2();

  switch (VAR_0) {
  case 140: VAR_6 = "Baseline"; break;
  case 139: VAR_6 = "Extended sequential"; break;
  case 133: VAR_6 = "Progressive"; break;
  case 132: VAR_6 = "Lossless"; break;
  case 131: VAR_6 = "Differential sequential"; break;
  case 130: VAR_6 = "Differential progressive"; break;
  case 129: VAR_6 = "Differential lossless"; break;
  case 128: VAR_6 = "Extended sequential, arithmetic coding"; break;
  case 138: VAR_6 = "Progressive, arithmetic coding"; break;
  case 137: VAR_6 = "Lossless, arithmetic coding"; break;
  case 136: VAR_6 = "Differential sequential, arithmetic coding"; break;
  case 135:
    VAR_6 = "Differential progressive, arithmetic coding"; break;
  case 134: VAR_6 = "Differential lossless, arithmetic coding"; break;
  default: VAR_6 = "Unknown"; break;
  }

  FUNC_1("JPEG image is %uw * %uh, %d color components, %d bits per sample\n",
         VAR_3, VAR_2, VAR_5, VAR_4);
  FUNC_1("JPEG process: %s\n", VAR_6);

  if (VAR_1 != (unsigned int)(8 + VAR_5 * 3))
    FUNC_0("Bogus SOF marker length");

  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
    (void)FUNC_2();
    (void)FUNC_2();
    (void)FUNC_2();
  }
}
