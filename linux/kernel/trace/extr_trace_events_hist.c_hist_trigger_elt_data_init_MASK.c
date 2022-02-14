
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracing_map_elt {struct hist_elt_data* private_data; } ;
struct hist_elt_data {scalar_t__ comm; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct tracing_map_elt *VAR_1)
{
 struct hist_elt_data *VAR_2 = VAR_1->private_data;

 if (VAR_2->comm)
  FUNC_0(VAR_2->comm, VAR_0);
}
