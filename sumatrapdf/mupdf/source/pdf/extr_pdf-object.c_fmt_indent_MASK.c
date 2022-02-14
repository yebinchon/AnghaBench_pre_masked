
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fmt {int indent; } ;
typedef int fz_context ;


 int FUNC_0 (int *,struct fmt*,char) ;

__attribute__((used)) static inline void FUNC_1(fz_context *VAR_0, struct fmt *VAR_1)
{
 int VAR_2 = VAR_1->indent;
 while (VAR_2--) {
  FUNC_0(VAR_0, VAR_1, ' ');
  FUNC_0(VAR_0, VAR_1, ' ');
 }
}
