
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct range_filter {struct range_filter* ranges; int chain; } ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,struct range_filter*) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, void *VAR_1)
{
 struct range_filter *VAR_2 = (struct range_filter *)VAR_1;
 FUNC_0(VAR_0, VAR_2->chain);
 FUNC_1(VAR_0, VAR_2->ranges);
 FUNC_1(VAR_0, VAR_2);
}
