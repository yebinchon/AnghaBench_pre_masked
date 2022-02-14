
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*,int,int,int) ;
 int VAR_3 ;

void FUNC_2(const char *VAR_4)
{
 FUNC_1(VAR_3, "Usage: %s [options] <input> <output>\n"
  "Options:\n"
  "    -p <pagesize>      NAND page size (default: %d)\n"
  "    -o <oobsize>       NAND OOB size (default: %d)\n"
  "    -e <offset>        NAND ECC offset (default: %d)\n"
  "\n", VAR_4, VAR_2, VAR_1,
  VAR_0);
 FUNC_0(1);
}
