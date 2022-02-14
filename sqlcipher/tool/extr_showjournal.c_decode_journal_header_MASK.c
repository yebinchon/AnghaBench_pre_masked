
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 void* VAR_1 ;
 void* FUNC_1 (unsigned char*,int,int,char*) ;
 int FUNC_2 (char*,int) ;
 unsigned char* FUNC_3 (int,int) ;
 void* VAR_2 ;

__attribute__((used)) static unsigned FUNC_4(int VAR_3){
  unsigned char *VAR_4 = FUNC_3(64, VAR_3);
  unsigned VAR_5;
  FUNC_2("Header at offset %d:\n", VAR_3);
  FUNC_1(VAR_4, 0, 4, "Header part 1 (3654616569)");
  FUNC_1(VAR_4, 4, 4, "Header part 2 (547447767)");
  VAR_5 =
  FUNC_1(VAR_4, 8, 4, "page count");
  VAR_0 =
  FUNC_1(VAR_4, 12, 4, "chksum nonce");
  FUNC_1(VAR_4, 16, 4, "initial database size in pages");
  VAR_2 =
  FUNC_1(VAR_4, 20, 4, "sector size");
  VAR_1 =
  FUNC_1(VAR_4, 24, 4, "page size");
  FUNC_1(VAR_4, 28, 4, "zero");
  FUNC_1(VAR_4, 32, 4, "zero");
  FUNC_1(VAR_4, 36, 4, "zero");
  FUNC_1(VAR_4, 40, 4, "zero");
  FUNC_0(VAR_4);
  return VAR_5;
}
