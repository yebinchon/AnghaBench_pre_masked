
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct print_event_type {scalar_t__ type; int format; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(char *VAR_3,
          struct print_event_type *VAR_4)
{
 char *VAR_5 = VAR_3 + 1;
 int VAR_6 = 1;

 VAR_4->type = VAR_2;
 while (*VAR_5) {
  switch (*VAR_5) {
  case 'd':
  case 'u':
  case 'i':
  case 'x':
  case 'X':
  case 'o':
   VAR_4->type = VAR_0;
   break;
  case 's':
   VAR_4->type = VAR_1;
   break;
  }
  VAR_5++;
  VAR_6++;
  if (VAR_4->type != VAR_2)
   break;
 }
 FUNC_1(VAR_4->format, 0, 32);
 FUNC_0(VAR_4->format, VAR_3, VAR_6 < 32 ? VAR_6 : 31);
 return VAR_6;
}
