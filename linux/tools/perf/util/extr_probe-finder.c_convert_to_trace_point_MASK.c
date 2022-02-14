
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct probe_trace_point {unsigned long offset; unsigned long address; int retprobe; int symbol; } ;
struct TYPE_3__ {scalar_t__ st_value; } ;
typedef TYPE_1__ GElf_Sym ;
typedef int Dwfl_Module ;
typedef int Dwarf_Die ;
typedef scalar_t__ Dwarf_Addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,scalar_t__*) ;
 scalar_t__ FUNC_2 (int *,scalar_t__*) ;
 char* FUNC_3 (int *,scalar_t__,TYPE_1__*,int *) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(Dwarf_Die *VAR_3, Dwfl_Module *VAR_4,
      Dwarf_Addr VAR_5, bool VAR_6,
      const char *VAR_7,
      struct probe_trace_point *VAR_8)
{
 Dwarf_Addr VAR_9, VAR_10;
 GElf_Sym VAR_11;
 const char *VAR_12;


 if (FUNC_1(VAR_3, &VAR_9) != 0) {
  FUNC_4("Failed to get entry address of %s\n",
      FUNC_0(VAR_3));
  return -VAR_1;
 }
 if (FUNC_2(VAR_3, &VAR_10) != 0) {
  FUNC_4("Failed to get end address of %s\n",
      FUNC_0(VAR_3));
  return -VAR_1;
 }
 if (VAR_5 > VAR_10) {
  FUNC_4("Offset specified is greater than size of %s\n",
      FUNC_0(VAR_3));
  return -VAR_0;
 }

 VAR_12 = FUNC_0(VAR_3);
 if (!VAR_12) {

  VAR_12 = FUNC_3(VAR_4, VAR_5, &VAR_11, ((void*)0));
  if (!VAR_12) {
   FUNC_4("Failed to find symbol at 0x%lx\n",
       (unsigned long)VAR_5);
   return -VAR_1;
  }
  VAR_9 = VAR_11.st_value;
 }
 VAR_8->offset = (unsigned long)(VAR_5 - VAR_9);
 VAR_8->address = (unsigned long)VAR_5;
 VAR_8->symbol = FUNC_5(VAR_12);
 if (!VAR_8->symbol)
  return -VAR_2;


 if (VAR_6) {
  if (VAR_9 != VAR_5) {
   FUNC_4("Failed to find \"%s%%return\",\n"
       " because %s is an inlined function and"
       " has no return point.\n", VAR_7,
       VAR_7);
   return -VAR_0;
  }
  VAR_8->retprobe = 1;
 }

 return 0;
}
