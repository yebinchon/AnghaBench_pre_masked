
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct graphics_offsets {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct graphics_offsets*,char*) ;
 char* FUNC_2 (char const*) ;

__attribute__((used)) static inline bool FUNC_3(struct graphics_offsets *VAR_0,
       const char *VAR_1)
{
 char *VAR_2 = FUNC_2(VAR_1);
 bool VAR_3 = 0;
 if (VAR_2 && *VAR_2)
  VAR_3 = FUNC_1(VAR_0, VAR_2);
 FUNC_0(VAR_2);
 return VAR_3;
}
