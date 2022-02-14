
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char ut8 ;
typedef int ut32 ;
typedef int RBuffer ;
typedef int RBinArchOptions ;
typedef int RBin ;


 int FUNC_0 (char const*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int*,int) ;
 int FUNC_5 (char*) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;

__attribute__((used)) static RBuffer* FUNC_8(RBin* VAR_0, const ut8 *VAR_1, int VAR_2, const ut8 *VAR_3, int VAR_4, RBinArchOptions *VAR_5) {
 ut32 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 ut32 VAR_12 = 0x400000;
 RBuffer *VAR_13 = FUNC_6 ();
 FUNC_0(VAR_13,(const ut8*)("MZ\x00\x00"),4);
 FUNC_0(VAR_13,(const ut8*)("PE\x00\x00"),4);
 FUNC_0(VAR_13,0x14c);
 FUNC_0(VAR_13,1);
 FUNC_0(VAR_13,0);
 FUNC_0(VAR_13,0);
 FUNC_0(VAR_13,0);
 VAR_10 = FUNC_7 (VAR_13);
 FUNC_0(VAR_13,-1);
 FUNC_0(VAR_13,0x103);


 VAR_8 = FUNC_7 (VAR_13);
 FUNC_0(VAR_13,0x10b);
 FUNC_0(VAR_13,(const ut8*)("\x08\x00"),2);

 VAR_9 = FUNC_7 (VAR_13);
 VAR_11 = VAR_9 - VAR_8;
 FUNC_0(VAR_13,VAR_10,(const ut8*)(&VAR_11),2);


 VAR_7 = 0x7c;
 VAR_6 = 0x7c;

 FUNC_0(VAR_13,FUNC_3 (VAR_2, 4));
 FUNC_0(VAR_13,0);
 FUNC_0(VAR_13,VAR_2);
 FUNC_0(VAR_13,VAR_7);
 FUNC_0(VAR_13,VAR_2);
 FUNC_0(VAR_13,VAR_7);
 FUNC_0(VAR_13,VAR_12);
 FUNC_0(VAR_13,4);
 FUNC_0(VAR_13,4);
 FUNC_0(VAR_13,4);
 FUNC_0(VAR_13,0);
 FUNC_0(VAR_13,0);
 FUNC_0(VAR_13,0);
 FUNC_0(VAR_13,4);
 FUNC_0(VAR_13,0);
 FUNC_0(VAR_13,0);
 FUNC_0(VAR_13,(FUNC_3 (VAR_6, 4)) + (FUNC_3 (VAR_2, 4)));
 FUNC_0(VAR_13,FUNC_3 (VAR_6, 4));
 FUNC_0(VAR_13,0);
 FUNC_0(VAR_13,2);
 FUNC_0(VAR_13,0x400);
 FUNC_0(VAR_13,0x100000);
 FUNC_0(VAR_13,0x1000);
 FUNC_0(VAR_13,0x100000);
 FUNC_0(VAR_13,0x1000);
 FUNC_0(VAR_13,0);
 FUNC_0(VAR_13,0);
 FUNC_0(VAR_13,(const ut8*)(VAR_1),VAR_2);

 if (VAR_3 && VAR_4>0) {

  FUNC_5 ("Warning: DATA section not support for PE yet\n");
  FUNC_0(VAR_13,(const ut8*)(VAR_3),VAR_4);
 }
 return VAR_13;
}
