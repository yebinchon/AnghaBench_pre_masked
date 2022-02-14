
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int depth; } ;
typedef TYPE_1__ fz_trace_device ;
typedef int fz_path ;
typedef int fz_context ;


 int FUNC_0 (int *,int const*,int *,TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_1, fz_trace_device *VAR_2, const fz_path *VAR_3)
{
 VAR_2->depth++;
 FUNC_0(VAR_1, VAR_3, &VAR_0, VAR_2);
 VAR_2->depth--;
}
