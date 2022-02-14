
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_field {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static const char *FUNC_0(struct hist_field *VAR_7)
{
 const char *VAR_8 = ((void*)0);

 if (VAR_7->flags & VAR_1)
  VAR_8 = "hex";
 else if (VAR_7->flags & VAR_3)
  VAR_8 = "sym";
 else if (VAR_7->flags & VAR_4)
  VAR_8 = "sym-offset";
 else if (VAR_7->flags & VAR_0)
  VAR_8 = "execname";
 else if (VAR_7->flags & VAR_5)
  VAR_8 = "syscall";
 else if (VAR_7->flags & VAR_2)
  VAR_8 = "log2";
 else if (VAR_7->flags & VAR_6)
  VAR_8 = "usecs";

 return VAR_8;
}
