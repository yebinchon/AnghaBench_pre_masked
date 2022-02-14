
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct concat_filter {int current; int count; int * chain; } ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,struct concat_filter*) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, void *VAR_1)
{
 struct concat_filter *VAR_2 = (struct concat_filter *)VAR_1;
 int VAR_3;

 for (VAR_3 = VAR_2->current; VAR_3 < VAR_2->count; VAR_3++)
 {
  FUNC_0(VAR_0, VAR_2->chain[VAR_3]);
 }
 FUNC_1(VAR_0, VAR_2);
}
