
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct debug_entry {scalar_t__ addr; } ;
struct buffer_ext {int dummy; } ;


 int FUNC_0 (struct buffer_ext*,int ) ;
 int FUNC_1 (struct buffer_ext*) ;
 int FUNC_2 (struct buffer_ext*,void*,int,int ) ;
 int FUNC_3 (struct buffer_ext*,char*) ;
 int FUNC_4 (struct buffer_ext*) ;
 struct debug_entry* FUNC_5 (struct debug_entry*) ;

__attribute__((used)) static int
FUNC_6(uint64_t VAR_0,
         void *VAR_1, int VAR_2,
         struct buffer_ext *VAR_3,
         struct buffer_ext *VAR_4,
         struct buffer_ext *VAR_5)
{
 struct debug_entry *VAR_6 = VAR_1;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_6->addr = VAR_6->addr - VAR_0;
  VAR_6 = FUNC_5(VAR_6);
 }
 FUNC_0(VAR_5, FUNC_4(VAR_3));
 FUNC_2(VAR_3, VAR_1, VAR_2, 0);
 FUNC_1(VAR_4);
 if (0) FUNC_3(VAR_4, "abbrev");

 return 0;
}
