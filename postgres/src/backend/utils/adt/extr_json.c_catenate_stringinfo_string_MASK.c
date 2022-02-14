
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int text ;
struct TYPE_3__ {int len; char const* data; } ;
typedef TYPE_1__* StringInfo ;


 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__,char const*,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static text *
FUNC_5(StringInfo VAR_1, const char *VAR_2)
{

 int VAR_3 = VAR_1->len;
 int VAR_4 = FUNC_4(VAR_2);
 text *VAR_5 = (text *) FUNC_3(VAR_3 + VAR_4 + VAR_0);

 FUNC_0(VAR_5, VAR_3 + VAR_4 + VAR_0);
 FUNC_2(FUNC_1(VAR_5), VAR_1->data, VAR_3);
 FUNC_2(FUNC_1(VAR_5) + VAR_3, VAR_2, VAR_4);

 return VAR_5;
}
