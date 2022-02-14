
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {size_t tag; int string; } ;
struct TYPE_2__ {char n; } ;
typedef int FILE ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char,int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_2(FILE * VAR_1, struct string_list *VAR_2)
{
 if (VAR_0[VAR_2->tag].n) {
  FUNC_1(VAR_0[VAR_2->tag].n, VAR_1);
  FUNC_1('#', VAR_1);
 }
 FUNC_0(VAR_2->string, VAR_1);
}
