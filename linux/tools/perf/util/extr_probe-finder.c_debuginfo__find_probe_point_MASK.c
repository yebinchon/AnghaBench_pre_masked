
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_probe_point {int line; unsigned long offset; int * function; int * file; } ;
struct debuginfo {int dbg; } ;
typedef int Dwarf_Die ;
typedef unsigned long Dwarf_Addr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long,char const**,int*) ;
 scalar_t__ FUNC_1 (struct debuginfo*,unsigned long*,int) ;
 scalar_t__ FUNC_2 (int *,unsigned long,int *) ;
 scalar_t__ FUNC_3 (int *,unsigned long,int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,unsigned long,int *) ;
 char* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int*) ;
 char* FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,unsigned long*) ;
 int FUNC_11 (char*,unsigned long) ;
 scalar_t__ FUNC_12 (char const*,char const*) ;
 void* FUNC_13 (char const*) ;
 int FUNC_14 (int **) ;

int FUNC_15(struct debuginfo *VAR_2, unsigned long VAR_3,
    struct perf_probe_point *VAR_4)
{
 Dwarf_Die VAR_5, VAR_6, VAR_7;
 Dwarf_Addr VAR_8 = 0, VAR_9 = 0;
 const char *VAR_10 = ((void*)0), *VAR_11 = ((void*)0), *VAR_12 = ((void*)0), *VAR_13;
 int VAR_14 = 0, VAR_15 = 0, VAR_16 = 0;


 if (FUNC_1(VAR_2, &VAR_9, 0) == 0)
  VAR_3 += VAR_9;

 if (!FUNC_6(VAR_2->dbg, (Dwarf_Addr)VAR_3, &VAR_5)) {
  FUNC_11("Failed to find debug information for address %lx\n",
      VAR_3);
  VAR_16 = -VAR_0;
  goto end;
 }


 FUNC_0(&VAR_5, VAR_3, &VAR_10, &VAR_15);



 if (FUNC_2(&VAR_5, (Dwarf_Addr)VAR_3, &VAR_6)) {

  VAR_11 = VAR_12 = FUNC_9(&VAR_6);
  if (!VAR_11 ||
      FUNC_10(&VAR_6, &VAR_9) != 0 ||
      FUNC_8(&VAR_6, &VAR_14) != 0) {
   VAR_15 = 0;
   goto post;
  }

  VAR_10 = FUNC_7(&VAR_6);
  if (VAR_3 == (unsigned long)VAR_9) {

   VAR_15 = VAR_14;
   goto post;
  }


  while (FUNC_3(&VAR_6, (Dwarf_Addr)VAR_3,
      &VAR_7)) {

   if (FUNC_10(&VAR_7, &VAR_8) == 0 &&
       VAR_8 == VAR_3) {





    VAR_15 = FUNC_5(&VAR_7);
    VAR_10 = FUNC_4(&VAR_7);
    break;
   } else {






    VAR_13 = FUNC_9(&VAR_7);
    if (!VAR_13 ||
        FUNC_8(&VAR_7, &VAR_14) != 0)
     break;
    VAR_11 = VAR_13;
    VAR_6 = VAR_7;
   }
  }

  VAR_13 = FUNC_7(&VAR_6);
  if (!VAR_13 || FUNC_12(VAR_13, VAR_10) != 0)
   VAR_15 = 0;
 }

post:

 if (VAR_15)
  VAR_4->line = VAR_15 - VAR_14;
 else if (VAR_12) {
  VAR_4->offset = VAR_3 - (unsigned long)VAR_9;
  VAR_11 = VAR_12;
 }


 if (VAR_11) {
  VAR_4->function = FUNC_13(VAR_11);
  if (VAR_4->function == ((void*)0)) {
   VAR_16 = -VAR_1;
   goto end;
  }
 }
 if (VAR_10) {
  VAR_4->file = FUNC_13(VAR_10);
  if (VAR_4->file == ((void*)0)) {
   FUNC_14(&VAR_4->function);
   VAR_16 = -VAR_1;
   goto end;
  }
 }
end:
 if (VAR_16 == 0 && (VAR_10 || VAR_11))
  VAR_16 = 1;
 return VAR_16;
}
