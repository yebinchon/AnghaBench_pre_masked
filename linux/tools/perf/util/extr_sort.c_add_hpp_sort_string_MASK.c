
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct hpp_dimension {int name; } ;


 int FUNC_0 (struct strbuf*,int ,int*) ;

__attribute__((used)) static void FUNC_1(struct strbuf *VAR_0, struct hpp_dimension *VAR_1, int VAR_2,
    int *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_0(VAR_0, VAR_1[VAR_4].name, VAR_3);
}
