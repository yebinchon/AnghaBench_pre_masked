
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,int,int,int ,char*) ;

__attribute__((used)) static void FUNC_2(unsigned char *VAR_2, int VAR_3){
  int VAR_4;
  FUNC_0( VAR_3==0 || VAR_3==1 );
  VAR_4 = VAR_3 ? 48 : 0;
  FUNC_1(VAR_2, 0+VAR_4, 4, VAR_0, "Wal-index version");
  FUNC_1(VAR_2, 4+VAR_4, 4, 0, "unused padding");
  FUNC_1(VAR_2, 8+VAR_4, 4, VAR_0, "transaction counter");
  FUNC_1(VAR_2,12+VAR_4, 1, 0, "1 when initialized");
  FUNC_1(VAR_2,13+VAR_4, 1, 0, "true if WAL cksums are bigendian");
  FUNC_1(VAR_2,14+VAR_4, 2, VAR_1, "database page size");
  FUNC_1(VAR_2,16+VAR_4, 4, VAR_0, "mxFrame");
  FUNC_1(VAR_2,20+VAR_4, 4, VAR_0, "Size of database in pages");
  FUNC_1(VAR_2,24+VAR_4, 8, 0, "Cksum of last frame in -wal");
  FUNC_1(VAR_2,32+VAR_4, 8, 0, "Salt values from the -wal");
  FUNC_1(VAR_2,40+VAR_4, 8, 0, "Cksum over all prior fields");
}
