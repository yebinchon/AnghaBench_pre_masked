
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_bool ;
struct TYPE_6__ {int l; int s; } ;
struct TYPE_5__ {char* member_0; int member_1; char* s; } ;
typedef TYPE_1__ const MYSQLND_STRING ;
typedef TYPE_2__ MYSQLND_CSTRING ;


 int FUNC_0 (char*,int ,int) ;
 scalar_t__ FUNC_1 (int,int const) ;

__attribute__((used)) static inline MYSQLND_STRING FUNC_2(const MYSQLND_CSTRING VAR_0, const zend_bool VAR_1)
{
 const MYSQLND_STRING VAR_2 = {(char*) FUNC_1(VAR_0.l + 1, VAR_1), VAR_0.l};
 if (VAR_2.s) {
  FUNC_0(VAR_2.s, VAR_0.s, VAR_0.l);
  VAR_2.s[VAR_0.l] = '\0';
 }
 return VAR_2;
}
