
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int,int) ;
 int VAR_0 ;
 int FUNC_3 (int,int,unsigned char*,int ) ;
 int FUNC_4 (unsigned char*,int,int,int,char*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(int VAR_2){
  int VAR_3;
  unsigned char *VAR_4;
  VAR_3 = 32 + (VAR_2-1)*(VAR_0+24);
  FUNC_0(VAR_1, "Frame %d:   (offsets 0x%x..0x%x)\n",
          VAR_2, VAR_3, VAR_3+VAR_0+24);
  VAR_4 = FUNC_2(VAR_3, VAR_0+24);
  FUNC_4(VAR_4, 0, 4, 0, "Page number");
  FUNC_4(VAR_4, 4, 4, 0, "DB size, or 0 for non-commit");
  FUNC_4(VAR_4, 8, 4, 1, "Salt-1");
  FUNC_4(VAR_4,12, 4, 1, "Salt-2");
  FUNC_4(VAR_4,16, 4, 1, "Checksum-1");
  FUNC_4(VAR_4,20, 4, 1, "Checksum-2");
  FUNC_3(VAR_3+24, VAR_0, VAR_4+24, 0);
  FUNC_1(VAR_4);
}
