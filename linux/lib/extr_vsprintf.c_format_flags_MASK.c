
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_print_flags {unsigned long mask; scalar_t__ name; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,char*,unsigned long,int ) ;
 char* FUNC_1 (char*,char*,scalar_t__,int ) ;

__attribute__((used)) static
char *FUNC_2(char *VAR_2, char *VAR_3, unsigned long VAR_4,
     const struct trace_print_flags *VAR_5)
{
 unsigned long VAR_6;

 for ( ; VAR_4 && VAR_5->name; VAR_5++) {
  VAR_6 = VAR_5->mask;
  if ((VAR_4 & VAR_6) != VAR_6)
   continue;

  VAR_2 = FUNC_1(VAR_2, VAR_3, VAR_5->name, VAR_1);

  VAR_4 &= ~VAR_6;
  if (VAR_4) {
   if (VAR_2 < VAR_3)
    *VAR_2 = '|';
   VAR_2++;
  }
 }

 if (VAR_4)
  VAR_2 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_0);

 return VAR_2;
}
