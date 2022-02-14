
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cstate {int dummy; } ;


 int FUNC_0 (struct cstate*,char*) ;

__attribute__((used)) static int FUNC_1(struct cstate *VAR_0, int VAR_1)
{
 if (VAR_1 >= '0' && VAR_1 <= '9') return VAR_1 - '0';
 if (VAR_1 >= 'a' && VAR_1 <= 'f') return VAR_1 - 'a' + 0xA;
 if (VAR_1 >= 'A' && VAR_1 <= 'F') return VAR_1 - 'A' + 0xA;
 FUNC_0(VAR_0, "invalid escape sequence");
 return 0;
}
