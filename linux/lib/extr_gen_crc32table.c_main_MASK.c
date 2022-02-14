
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,int,int,char*) ;
 int FUNC_4 (char*,...) ;

int FUNC_5(int VAR_9, char** VAR_10)
{
 FUNC_4("/* this file is generated - do not edit */\n\n");

 if (VAR_3 > 1) {
  FUNC_2();
  FUNC_4("static const u32 ____cacheline_aligned "
         "crc32table_le[%d][%d] = {",
         VAR_4, VAR_5);
  FUNC_3(VAR_8, VAR_4,
        VAR_5, "tole");
  FUNC_4("};\n");
 }

 if (VAR_2 > 1) {
  FUNC_1();
  FUNC_4("static const u32 ____cacheline_aligned "
         "crc32table_be[%d][%d] = {",
         VAR_0, VAR_1);
  FUNC_3(VAR_7, VAR_4,
        VAR_1, "tobe");
  FUNC_4("};\n");
 }
 if (VAR_3 > 1) {
  FUNC_0();
  FUNC_4("static const u32 ____cacheline_aligned "
         "crc32ctable_le[%d][%d] = {",
         VAR_4, VAR_5);
  FUNC_3(VAR_6, VAR_4,
        VAR_5, "tole");
  FUNC_4("};\n");
 }

 return 0;
}
