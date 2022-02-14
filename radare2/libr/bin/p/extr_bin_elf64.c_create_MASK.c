
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char ut8 ;
typedef int ut64 ;
typedef int ut32 ;
typedef int ut16 ;
typedef int RBuffer ;
typedef int RBinArchOptions ;
typedef int RBin ;


 int FUNC_0 (char const*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;

__attribute__((used)) static RBuffer* FUNC_9(RBin* VAR_0, const ut8 *VAR_1, int VAR_2, const ut8 *VAR_3, int VAR_4, RBinArchOptions *VAR_5) {
 ut32 VAR_6, VAR_7, VAR_8;
 ut32 VAR_9, VAR_10, VAR_11, VAR_12;
 ut32 VAR_13, VAR_14;
 ut64 VAR_15, VAR_16, VAR_17, VAR_18;
 ut16 VAR_19, VAR_20;
 ut64 VAR_21 = 0x400000LL;
 RBuffer *VAR_22 = FUNC_7 ();
 FUNC_0(VAR_22,(const ut8*)("\x7F" "ELF" "\x02\x01\x01\x00"),8);
 FUNC_0(VAR_22,8);
 FUNC_0(VAR_22,2);
 FUNC_0(VAR_22,62);
 FUNC_0(VAR_22,1);
 VAR_6 = FUNC_8 (VAR_22);
 FUNC_0(VAR_22,-1);
 VAR_7 = FUNC_8 (VAR_22);
 FUNC_0(VAR_22,-1);
 FUNC_0(VAR_22,0);
 FUNC_0(VAR_22,0);
 VAR_13 = FUNC_8 (VAR_22);
 FUNC_0(VAR_22,-1);
 VAR_14 = FUNC_8 (VAR_22);
 FUNC_0(VAR_22,-1);
 FUNC_0(VAR_22,1);
 FUNC_0(VAR_22,0);
 FUNC_0(VAR_22,0);
 FUNC_0(VAR_22,0);


 VAR_8 = FUNC_8 (VAR_22);
 FUNC_0(VAR_22,1);
 FUNC_0(VAR_22,5);
 FUNC_0(VAR_22,0);
 VAR_9 = FUNC_8 (VAR_22);
 FUNC_0(VAR_22,-1);
 VAR_10 = FUNC_8 (VAR_22);
 FUNC_0(VAR_22,-1);
 VAR_11 = FUNC_8 (VAR_22);
 FUNC_0(VAR_22,-1);
 VAR_12 = FUNC_8 (VAR_22);
 FUNC_0(VAR_22,-1);
 FUNC_0(VAR_22,0x200000);


 VAR_19 = VAR_8;
 VAR_20 = FUNC_8 (VAR_22) - VAR_8;
 VAR_17 = FUNC_8 (VAR_22);
 VAR_16 = VAR_17 + VAR_21;
 VAR_18 = VAR_8;
 VAR_15 = VAR_17 + VAR_2 + VAR_4;


 FUNC_0(VAR_22,VAR_6,(const ut8*)(&VAR_16),8);
 FUNC_0(VAR_22,VAR_7,(const ut8*)(&VAR_18),8);
 FUNC_0(VAR_22,VAR_13,(const ut8*)(&VAR_19),2);
 FUNC_0(VAR_22,VAR_14,(const ut8*)(&VAR_20),2);
 FUNC_0(VAR_22,VAR_11,(const ut8*)(&VAR_15),8);
 FUNC_0(VAR_22,VAR_12,(const ut8*)(&VAR_15),8);

 FUNC_0(VAR_22,VAR_9,(const ut8*)(&VAR_21),8);
 FUNC_0(VAR_22,VAR_10,(const ut8*)(&VAR_21),8);


 FUNC_0(VAR_22,(const ut8*)(VAR_1),VAR_2);

 if (VAR_3 && VAR_4>0) {
  FUNC_6 ("Warning: DATA section not support for ELF yet\n");
  FUNC_0(VAR_22,(const ut8*)(VAR_3),VAR_4);
 }
 return VAR_22;
}
