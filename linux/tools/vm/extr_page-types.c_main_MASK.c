
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int,char**,char*,int ,int *) ;
 int FUNC_6 () ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 (char*) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 () ;

int FUNC_19(int VAR_24, char *VAR_25[])
{
 int VAR_26;

 VAR_23 = FUNC_6();

 while ((VAR_26 = FUNC_5(VAR_24, VAR_25,
    "rp:f:a:b:d:c:CilLMNXxF:h",
    VAR_21, ((void*)0))) != -1) {
  switch (VAR_26) {
  case 'r':
   VAR_18 = 1;
   break;
  case 'p':
   FUNC_12(VAR_20);
   break;
  case 'f':
   FUNC_10(VAR_20);
   break;
  case 'a':
   FUNC_7(VAR_20);
   break;
  case 'b':
   FUNC_8(VAR_20);
   break;
  case 'c':
   FUNC_9(VAR_20);
   break;
  case 'C':
   VAR_13 = 1;
   break;
  case 'd':
   FUNC_2(VAR_20);
   FUNC_3(0);
  case 'i':
   VAR_15 = 1;
   break;
  case 'l':
   VAR_12 = 1;
   break;
  case 'L':
   VAR_12 = 2;
   break;
  case 'M':
   VAR_14 = 1;
   break;
  case 'N':
   VAR_16 = 1;
   break;
  case 'X':
   VAR_10 = 1;
   FUNC_13();
   break;
  case 'x':
   VAR_19 = 1;
   FUNC_13();
   break;
  case 'F':
   FUNC_11(VAR_20);
   break;
  case 'h':
   FUNC_16();
   FUNC_3(0);
  default:
   FUNC_16();
   FUNC_3(1);
  }
 }

 if (!VAR_11)
  VAR_11 = VAR_4;

 if (VAR_8 || VAR_13)
  VAR_6 = FUNC_0(VAR_2, VAR_0);

 if (VAR_12 && VAR_14)
  VAR_7 = FUNC_0(VAR_3, VAR_0);

 if (VAR_15 && VAR_9)
  VAR_22 = FUNC_0(VAR_5, VAR_1);

 if (VAR_12 && VAR_17)
  FUNC_14("voffset\t");
 if (VAR_12 && VAR_9)
  FUNC_14("foffset\t");
 if (VAR_12 && VAR_13)
  FUNC_14("cgroup\t");
 if (VAR_12 && VAR_14)
  FUNC_14("map-cnt\t");

 if (VAR_12 == 1)
  FUNC_14("offset\tlen\tflags\n");
 if (VAR_12 == 2)
  FUNC_14("offset\tflags\n");

 if (VAR_9)
  FUNC_18();
 else
  FUNC_17();

 if (VAR_12 == 1)
  FUNC_4();

 if (VAR_16)
  return 0;

 if (VAR_12)
  FUNC_14("\n\n");

 FUNC_15();

 if (VAR_14)
  FUNC_1(VAR_7);

 if (VAR_22 >= 0)
  FUNC_1(VAR_22);

 return 0;
}
