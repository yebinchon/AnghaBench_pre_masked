
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* pg_locale_t ;
struct TYPE_4__ {int lt; } ;
struct TYPE_5__ {scalar_t__ provider; TYPE_1__ info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (unsigned char) ;
 int FUNC_2 (unsigned char,int ) ;

__attribute__((used)) static int
FUNC_3(char VAR_2, bool VAR_3,
      pg_locale_t VAR_4, bool VAR_5)
{
 if (VAR_5)
  return (VAR_2 >= 'A' && VAR_2 <= 'Z') || (VAR_2 >= 'a' && VAR_2 <= 'z');
 else if (VAR_3 && FUNC_0(VAR_2))
  return 1;
 else if (VAR_4 && VAR_4->provider == VAR_0)
  return FUNC_0(VAR_2) ||
   (VAR_2 >= 'A' && VAR_2 <= 'Z') || (VAR_2 >= 'a' && VAR_2 <= 'z');




 else
  return FUNC_1((unsigned char) VAR_2);
}
