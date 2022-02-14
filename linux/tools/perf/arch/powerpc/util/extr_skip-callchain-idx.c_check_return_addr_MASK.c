
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct dso {char* long_name; int * dwfl; } ;
typedef int Dwfl_Module ;
typedef int Dwfl ;
typedef int Dwarf_Frame ;
typedef int Dwarf_Addr ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int *,int*) ;
 int * FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,char const*,char const*,int,int ,int) ;
 int * FUNC_7 (int *,int ) ;
 int * FUNC_8 (int *,int ) ;
 int VAR_0 ;
 int FUNC_9 (char*,int ) ;

__attribute__((used)) static int FUNC_10(struct dso *VAR_1, u64 VAR_2, Dwarf_Addr VAR_3)
{
 int VAR_4 = -1;
 Dwfl *VAR_5;
 Dwfl_Module *VAR_6;
 Dwarf_Frame *VAR_7;
 int VAR_8;
 Dwarf_Addr VAR_9 = VAR_3;
 Dwarf_Addr VAR_10 = VAR_3;
 bool VAR_11;
 const char *VAR_12 = VAR_1->long_name;

 VAR_5 = VAR_1->dwfl;

 if (!VAR_5) {
  VAR_5 = FUNC_4(&VAR_0);
  if (!VAR_5) {
   FUNC_9("dwfl_begin() failed: %s\n", FUNC_1(-1));
   return -1;
  }

  VAR_6 = FUNC_6(VAR_5, VAR_12, VAR_12, -1,
      VAR_2, 0);
  if (!VAR_6) {
   FUNC_9("dwfl_report_elf() failed %s\n",
      FUNC_1(-1));





   FUNC_5(VAR_5);
   goto out;
  }
  VAR_1->dwfl = VAR_5;
 }

 VAR_6 = FUNC_3(VAR_5, VAR_3);
 if (!VAR_6) {
  FUNC_9("dwfl_addrmodule() failed, %s\n", FUNC_1(-1));
  goto out;
 }





 VAR_7 = FUNC_8(VAR_6, VAR_3);
 if (!VAR_7) {
  VAR_7 = FUNC_7(VAR_6, VAR_3);
  if (!VAR_7)
   goto out;
 }

 VAR_8 = FUNC_2(VAR_7, &VAR_9, &VAR_10, &VAR_11);
 if (VAR_8 < 0) {
  FUNC_9("Return address register unavailable: %s\n",
    FUNC_1(-1));
  goto out;
 }

 VAR_4 = FUNC_0(VAR_8, VAR_7);

out:
 return VAR_4;
}
