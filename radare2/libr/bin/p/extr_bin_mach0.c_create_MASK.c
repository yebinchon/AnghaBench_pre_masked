
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char ut8 ;
typedef int ut32 ;
struct TYPE_3__ {int bits; int arch; } ;
typedef int RBuffer ;
typedef TYPE_1__ RBinArchOptions ;
typedef int RBin ;


 int FUNC_0 (char const*,int) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int,...) ;
 int FUNC_3 (int const,char const*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int,int *) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (int ,char*) ;

__attribute__((used)) static RBuffer *FUNC_12(RBin *VAR_0, const ut8 *VAR_1, int VAR_2, const ut8 *VAR_3, int VAR_4, RBinArchOptions *VAR_5) {
 const bool VAR_6 = 1;
 const bool VAR_7 = 1;
 const bool VAR_8 = 1;
 const bool VAR_9 = 1;
 const bool VAR_10 = 1;
 ut32 VAR_11, VAR_12, VAR_13;
 ut32 VAR_14, VAR_15, VAR_16;
 ut32 VAR_17 = 0, VAR_18 = 0, VAR_19 = 0, VAR_20 = 0;
 ut32 VAR_21 = 0, VAR_22 = 0, VAR_23 = 0, VAR_24 = 0;
 ut32 VAR_25 = 0, VAR_26 = 0, VAR_27 = 0;
 ut32 VAR_28 = 0x1000;

 FUNC_9 (VAR_0 && VAR_5, ((void*)0));

 bool VAR_29 = FUNC_11 (VAR_5->arch, "arm");
 RBuffer *VAR_30 = FUNC_7 ();

 if (VAR_5->bits == 64) {
  FUNC_5 ("TODO: Please use mach064 instead of mach0\n");
  FUNC_6 (VAR_30);
  return ((void*)0);
 }
 FUNC_0(VAR_30,(const ut8*)("\xce\xfa\xed\xfe"),4);

 if (VAR_29) {
  FUNC_0(VAR_30,12);
  FUNC_0(VAR_30,3);
 } else {

  FUNC_0(VAR_30,7);

  FUNC_0(VAR_30,3);
 }
 FUNC_0(VAR_30,2);

 if (VAR_3 && VAR_4 > 0) {
  VAR_14 = 3;
  VAR_15 = 0;
 } else {
  VAR_14 = 2;
  VAR_15 = 0;
 }
 if (VAR_6) {
  VAR_14++;
 }
 if (VAR_8) {
  VAR_14++;
  if (VAR_10) {
   VAR_14 += 3;
  }
  if (VAR_9) {
   VAR_14++;
  }
 }


 FUNC_0(VAR_30,VAR_14);
 VAR_25 = FUNC_8 (VAR_30);
 FUNC_0(VAR_30,-1);
 FUNC_0(VAR_30,0);

 VAR_16 = FUNC_8 (VAR_30);

 if (VAR_6) {

  FUNC_0(VAR_30,1);
  FUNC_0(VAR_30,56);
  VAR_27=FUNC_8 (VAR_30);FUNC_0(VAR_30,16);FUNC_0(VAR_30,VAR_27,(const ut8*)("__PAGEZERO"),FUNC_10("__PAGEZERO"));
  FUNC_0(VAR_30,0);
  FUNC_0(VAR_30,0x00001000);
  FUNC_0(VAR_30,0);
  FUNC_0(VAR_30,0);
  FUNC_0(VAR_30,0);
  FUNC_0(VAR_30,0);
  FUNC_0(VAR_30,0);
  FUNC_0(VAR_30,0);
 }


 FUNC_0(VAR_30,1);
 FUNC_0(VAR_30,124);
 VAR_27=FUNC_8 (VAR_30);FUNC_0(VAR_30,16);FUNC_0(VAR_30,VAR_27,(const ut8*)("__TEXT"),FUNC_10("__TEXT"));
 FUNC_0(VAR_30,VAR_28);
 FUNC_0(VAR_30,0x1000);
 FUNC_0(VAR_30,0);
 VAR_17 = FUNC_8 (VAR_30);
 FUNC_0(VAR_30,-1);
 FUNC_0(VAR_30,7);
 FUNC_0(VAR_30,5);
 FUNC_0(VAR_30,1);
 FUNC_0(VAR_30,0);
 VAR_27=FUNC_8 (VAR_30);FUNC_0(VAR_30,16);FUNC_0(VAR_30,VAR_27,(const ut8*)("__text"),FUNC_10("__text"));
 VAR_27=FUNC_8 (VAR_30);FUNC_0(VAR_30,16);FUNC_0(VAR_30,VAR_27,(const ut8*)("__TEXT"),FUNC_10("__TEXT"));
 VAR_18 = FUNC_8 (VAR_30);
 FUNC_0(VAR_30,-1);
 VAR_19 = FUNC_8 (VAR_30);
 FUNC_0(VAR_30,-1);
 VAR_20 = FUNC_8 (VAR_30);
 FUNC_0(VAR_30,-1);
 FUNC_0(VAR_30,0);
 FUNC_0(VAR_30,0);
 FUNC_0(VAR_30,0);
 FUNC_0(VAR_30,0);
 FUNC_0(VAR_30,0);
 FUNC_0(VAR_30,0);

 if (VAR_3 && VAR_4 > 0) {

  FUNC_0(VAR_30,1);
  FUNC_0(VAR_30,124);
  VAR_27 = FUNC_8 (VAR_30);
  FUNC_0(VAR_30,16);
  FUNC_0(VAR_30,VAR_27,(const ut8*)("__TEXT"),6);
  FUNC_0(VAR_30,0x2000);
  FUNC_0(VAR_30,0x1000);
  FUNC_0(VAR_30,0);
  VAR_21 = FUNC_8 (VAR_30);
  FUNC_0(VAR_30,-1);
  FUNC_0(VAR_30,6);
  FUNC_0(VAR_30,6);
  FUNC_0(VAR_30,1);
  FUNC_0(VAR_30,0);

  VAR_27=FUNC_8 (VAR_30);FUNC_0(VAR_30,16);FUNC_0(VAR_30,VAR_27,(const ut8*)("__data"),FUNC_10("__data"));
  VAR_27=FUNC_8 (VAR_30);FUNC_0(VAR_30,16);FUNC_0(VAR_30,VAR_27,(const ut8*)("__DATA"),FUNC_10("__DATA"));

  VAR_22 = FUNC_8 (VAR_30);
  FUNC_0(VAR_30,-1);
  VAR_23 = FUNC_8 (VAR_30);
  FUNC_0(VAR_30,-1);
  VAR_24 = FUNC_8 (VAR_30);
  FUNC_0(VAR_30,-1);
  FUNC_0(VAR_30,2);
  FUNC_0(VAR_30,0);
  FUNC_0(VAR_30,0);
  FUNC_0(VAR_30,0);
  FUNC_0(VAR_30,0);
  FUNC_0(VAR_30,0);
 }

 if (VAR_8) {
  if (VAR_10) {

   FUNC_0(VAR_30,1);
   FUNC_0(VAR_30,56);
   VAR_27=FUNC_8 (VAR_30);FUNC_0(VAR_30,16);FUNC_0(VAR_30,VAR_27,(const ut8*)("__LINKEDIT"),FUNC_10("__LINKEDIT"));
   FUNC_0(VAR_30,0x3000);
   FUNC_0(VAR_30,0x00001000);
   FUNC_0(VAR_30,0x1000);
   FUNC_0(VAR_30,0);
   FUNC_0(VAR_30,7);
   FUNC_0(VAR_30,1);
   FUNC_0(VAR_30,0);
   FUNC_0(VAR_30,0);


   FUNC_0(VAR_30,2);
   FUNC_0(VAR_30,24);
   FUNC_0(VAR_30,0x1000);
   FUNC_0(VAR_30,0);
   FUNC_0(VAR_30,0x1000);
   FUNC_0(VAR_30,0);


   FUNC_0(VAR_30,0xb);
   FUNC_0(VAR_30,80);
   FUNC_0(VAR_30,18 * sizeof (ut32));
  }

  const char *VAR_31 = "/usr/lib/dyld";
  const int VAR_32 = FUNC_10 (VAR_31) + 1;
  FUNC_0(VAR_30,0xe);
  FUNC_0(VAR_30,(4 * 3) + VAR_32);
  FUNC_0(VAR_30,VAR_32 - 2);
  VAR_27=FUNC_8 (VAR_30);FUNC_0(VAR_30,VAR_32);FUNC_0(VAR_30,VAR_27,(const ut8*)(VAR_31),FUNC_10(VAR_31));

  if (VAR_9) {

   const char *VAR_33 = "/usr/lib/libSystem.B.dylib";
   const int VAR_34 = FUNC_10 (VAR_33) + 1;
   FUNC_0(VAR_30,0xc);
   FUNC_0(VAR_30,24 + VAR_34);
   FUNC_0(VAR_30,24);
   FUNC_0(VAR_30,0x2);
   FUNC_0(VAR_30,0x1);
   FUNC_0(VAR_30,0x1);
   VAR_27=FUNC_8 (VAR_30);FUNC_0(VAR_30,VAR_34);FUNC_0(VAR_30,VAR_27,(const ut8*)(VAR_33),FUNC_10(VAR_33));
  }
 }

 if (VAR_7) {

  FUNC_0(VAR_30,0x80000028);
  FUNC_0(VAR_30,24);
  FUNC_0(VAR_30,VAR_28);
  FUNC_0(VAR_30,0);
  FUNC_0(VAR_30,0);
  FUNC_0(VAR_30,0);
 } else {

  FUNC_0(VAR_30,5);
  FUNC_0(VAR_30,80);
  if (VAR_29) {

   FUNC_0(VAR_30,1);
   FUNC_0(VAR_30,17);
   VAR_26 = FUNC_8 (VAR_30) + (16 * sizeof (ut32));
   FUNC_0(VAR_30,17 * sizeof (ut32));

  } else {

   FUNC_0(VAR_30,1);
   FUNC_0(VAR_30,16);
   VAR_26 = FUNC_8 (VAR_30) + (10 * sizeof (ut32));
   FUNC_0(VAR_30,16 * sizeof (ut32));
  }
 }



 VAR_27=FUNC_8 (VAR_30);FUNC_0(VAR_30,4096 - FUNC_8 (VAR_30));FUNC_0(VAR_30,VAR_27,(const ut8*)(""),FUNC_10(""));

 VAR_15 = FUNC_8 (VAR_30) - VAR_16;
 VAR_12 = FUNC_8 (VAR_30) + VAR_28;
 VAR_13 = FUNC_8 (VAR_30) + VAR_2 + VAR_28;
 if (VAR_26 != 0) {
  FUNC_0(VAR_30,VAR_26,(const ut8*)(&VAR_12),4);
 }


 FUNC_0(VAR_30,VAR_25,(const ut8*)(&VAR_15),4);
 VAR_11 = VAR_16 + VAR_15 + VAR_2 + VAR_4;

 FUNC_0(VAR_30,VAR_17,(const ut8*)(&VAR_11),4);
 FUNC_0(VAR_30,VAR_17-8,(const ut8*)(&VAR_11),4);
 FUNC_0(VAR_30,VAR_18,(const ut8*)(&VAR_12),4);

 FUNC_0(VAR_30,VAR_19,(const ut8*)(&VAR_2),4);
 VAR_27 = VAR_12 - VAR_28;
 FUNC_0(VAR_30,VAR_20,(const ut8*)(&VAR_27),4);

 FUNC_0(VAR_30,(const ut8*)(VAR_1),VAR_2);

 if (VAR_3 && VAR_4 > 0) {

  FUNC_0(VAR_30,VAR_21,(const ut8*)(&VAR_11),4);
  FUNC_0(VAR_30,VAR_22,(const ut8*)(&VAR_13),4);
  FUNC_0(VAR_30,VAR_23,(const ut8*)(&VAR_4),4);
  VAR_27 = VAR_13 - VAR_28;
  FUNC_0(VAR_30,VAR_24,(const ut8*)(&VAR_27),4);
  FUNC_0(VAR_30,(const ut8*)(VAR_3),VAR_4);
 }

 return VAR_30;
}
