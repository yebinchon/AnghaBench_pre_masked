
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wint_t ;
typedef int wchar_t ;
typedef size_t pg_wchar ;
struct TYPE_3__ {int lt; } ;
struct TYPE_4__ {TYPE_1__ info; } ;


 int VAR_0 ;






 int VAR_1 ;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (unsigned char,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int* VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (size_t) ;

__attribute__((used)) static int
FUNC_5(pg_wchar VAR_5)
{
 switch (VAR_4)
 {
  case 131:
   return (VAR_5 <= (pg_wchar) 127 &&
     (VAR_2[VAR_5] & VAR_0));
  case 129:
   if (sizeof(wchar_t) >= 4 || VAR_5 <= (pg_wchar) 0xFFFF)
    return FUNC_2((wint_t) VAR_5);

  case 133:
   return (VAR_5 <= (pg_wchar) VAR_1 &&
     FUNC_0((unsigned char) VAR_5));
  case 128:





  case 132:




   break;
  case 130:



   break;
 }
 return 0;
}
