
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wint_t ;
typedef int wchar_t ;
typedef scalar_t__ pg_wchar ;
struct TYPE_3__ {int lt; } ;
struct TYPE_4__ {TYPE_1__ info; } ;
 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (unsigned char,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

__attribute__((used)) static pg_wchar
FUNC_6(pg_wchar VAR_3)
{
 switch (VAR_2)
 {
  case 131:
   if (VAR_3 <= (pg_wchar) 127)
    return FUNC_0((unsigned char) VAR_3);
   return VAR_3;
  case 129:

   if (VAR_3 <= (pg_wchar) 127)
    return FUNC_0((unsigned char) VAR_3);
   if (sizeof(wchar_t) >= 4 || VAR_3 <= (pg_wchar) 0xFFFF)
    return FUNC_3((wint_t) VAR_3);

  case 133:

   if (VAR_3 <= (pg_wchar) 127)
    return FUNC_0((unsigned char) VAR_3);
   if (VAR_3 <= (pg_wchar) VAR_0)
    return FUNC_1((unsigned char) VAR_3);
   return VAR_3;
  case 128:





  case 132:




   return VAR_3;
  case 130:



   break;
 }
 return 0;
}
