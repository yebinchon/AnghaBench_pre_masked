
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ubyte ;
struct debug_entry {char* name; int lineno; unsigned long addr; } ;
struct buffer_ext {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct debug_entry* FUNC_0 (struct debug_entry*) ;
 int FUNC_1 (struct buffer_ext*,int) ;
 int FUNC_2 (struct buffer_ext*,unsigned long) ;
 int FUNC_3 (struct buffer_ext*,char*) ;
 int FUNC_4 (struct buffer_ext*,void*) ;
 int FUNC_5 (struct buffer_ext*,scalar_t__) ;
 int FUNC_6 (struct buffer_ext*,unsigned long) ;
 scalar_t__ FUNC_7 (struct debug_entry*,int,unsigned long) ;
 scalar_t__ FUNC_8 (char const*,char*) ;

__attribute__((used)) static void FUNC_9(struct buffer_ext *VAR_1,
        struct debug_entry *VAR_2, size_t VAR_3,
        unsigned long VAR_4)
{
 size_t VAR_5;
 unsigned long VAR_6 = VAR_4;
 char const *VAR_7 = ((void*)0);
 unsigned long VAR_8 = 0;
 int VAR_9 = 1;

 FUNC_4(VAR_1, (void *)VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++, VAR_2 = FUNC_0(VAR_2)) {
  int VAR_10 = 0;
  ubyte VAR_11;




  if (!VAR_7 || FUNC_8(VAR_7, VAR_2->name)) {
   FUNC_3(VAR_1, VAR_2->name);
   VAR_7 = VAR_2->name;
   FUNC_6(VAR_1, ++VAR_8);
   VAR_10 = 1;
  }

  VAR_11 = FUNC_7(VAR_2, VAR_9, VAR_6);
  if (VAR_11 != 0) {
   VAR_9 = VAR_2->lineno;
   VAR_6 = VAR_2->addr;
   FUNC_5(VAR_1, VAR_11);
  } else {



   if (VAR_9 != VAR_2->lineno) {
    FUNC_1(VAR_1, VAR_2->lineno - VAR_9);
    VAR_9 = VAR_2->lineno;
    VAR_10 = 1;
   }



   if (VAR_6 != VAR_2->addr) {
    FUNC_2(VAR_1, VAR_2->addr - VAR_6);
    VAR_6 = VAR_2->addr;
    VAR_10 = 1;
   }



   if (VAR_10)
    FUNC_5(VAR_1, VAR_0);
  }
 }
}
