
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* string; int quoted; } ;
typedef TYPE_1__ HbaToken ;


 int FUNC_0 (char*,char const*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static HbaToken *
FUNC_3(const char *VAR_0, bool VAR_1)
{
 HbaToken *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0);

 VAR_2 = (HbaToken *) FUNC_1(sizeof(HbaToken) + VAR_3 + 1);
 VAR_2->string = (char *) VAR_2 + sizeof(HbaToken);
 VAR_2->quoted = VAR_1;
 FUNC_0(VAR_2->string, VAR_0, VAR_3 + 1);

 return VAR_2;
}
