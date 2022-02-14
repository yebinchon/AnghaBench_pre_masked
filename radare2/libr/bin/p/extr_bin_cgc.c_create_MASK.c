
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char ut8 ;
typedef int ut32 ;
typedef int ut16 ;
typedef int RBuffer ;
typedef int RBinArchOptions ;
typedef int RBin ;


 int FUNC_0 (char const*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;

__attribute__((used)) static RBuffer* FUNC_8(RBin* VAR_0, const ut8 *VAR_1, int VAR_2, const ut8 *VAR_3, int VAR_4, RBinArchOptions *VAR_5) {
 ut32 VAR_6, VAR_7, VAR_8, VAR_9;
 ut32 VAR_10, VAR_11, VAR_12;
 ut32 VAR_13, VAR_14;
 ut16 VAR_15, VAR_16;
 ut32 VAR_17, VAR_18, VAR_19, VAR_20;
 ut32 VAR_21 = 0x8048000;
 RBuffer *VAR_22 = FUNC_6 ();
 FUNC_0(VAR_22,(const ut8*)("\x7F" "CGC" "\x01\x01\x01\x43"),8);
 FUNC_0(VAR_22,8);
 FUNC_0(VAR_22,2);
 FUNC_0(VAR_22,3);

 FUNC_0(VAR_22,1);
 VAR_10 = FUNC_7 (VAR_22);
 FUNC_0(VAR_22,-1);
 VAR_11 = FUNC_7 (VAR_22);
 FUNC_0(VAR_22,-1);
 FUNC_0(VAR_22,0);
 FUNC_0(VAR_22,0);
 VAR_13 = FUNC_7 (VAR_22);
 FUNC_0(VAR_22,-1);
 VAR_14 = FUNC_7 (VAR_22);
 FUNC_0(VAR_22,-1);
 FUNC_0(VAR_22,1);
 FUNC_0(VAR_22,0);
 FUNC_0(VAR_22,0);
 FUNC_0(VAR_22,0);

 VAR_12 = FUNC_7 (VAR_22);
 FUNC_0(VAR_22,1);
 FUNC_0(VAR_22,0);
 VAR_17 = FUNC_7 (VAR_22);
 FUNC_0(VAR_22,-1);
 VAR_18 = FUNC_7 (VAR_22);
 FUNC_0(VAR_22,-1);
 VAR_19 = FUNC_7 (VAR_22);
 FUNC_0(VAR_22,-1);
 VAR_20 = FUNC_7 (VAR_22);
 FUNC_0(VAR_22,-1);
 FUNC_0(VAR_22,5);
 FUNC_0(VAR_22,0x1000);

 VAR_15 = VAR_12;
 VAR_16 = FUNC_7 (VAR_22) - VAR_12;
 VAR_8 = FUNC_7 (VAR_22);
 VAR_7 = VAR_8 + VAR_21;
 VAR_9 = 0x34;
 VAR_6 = VAR_8 + VAR_2 + VAR_4;

 FUNC_0(VAR_22,VAR_10,(const ut8*)(&VAR_7),4);
 FUNC_0(VAR_22,VAR_11,(const ut8*)(&VAR_9),4);
 FUNC_0(VAR_22,VAR_13,(const ut8*)(&VAR_15),2);
 FUNC_0(VAR_22,VAR_14,(const ut8*)(&VAR_16),2);

 VAR_7 = VAR_21;
 FUNC_0(VAR_22,VAR_17,(const ut8*)(&VAR_7),4);
 VAR_8 = VAR_21;
 FUNC_0(VAR_22,VAR_18,(const ut8*)(&VAR_8),4);

 FUNC_0(VAR_22,VAR_19,(const ut8*)(&VAR_6),4);
 FUNC_0(VAR_22,VAR_20,(const ut8*)(&VAR_6),4);

 FUNC_0(VAR_22,(const ut8*)(VAR_1),VAR_2);

 if (VAR_3 && VAR_4>0) {

  FUNC_5 ("Warning: DATA section not support for ELF yet\n");
  FUNC_0(VAR_22,(const ut8*)(VAR_3),VAR_4);
 }
 return VAR_22;
}
