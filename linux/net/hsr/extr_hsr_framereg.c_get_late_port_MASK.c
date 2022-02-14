
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hsr_priv {int dummy; } ;
struct hsr_port {int dummy; } ;
struct hsr_node {scalar_t__* time_in; scalar_t__* time_in_stale; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct hsr_port* FUNC_0 (struct hsr_priv*,size_t) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct hsr_port *FUNC_3(struct hsr_priv *VAR_3,
          struct hsr_node *VAR_4)
{
 if (VAR_4->time_in_stale[VAR_0])
  return FUNC_0(VAR_3, VAR_0);
 if (VAR_4->time_in_stale[VAR_1])
  return FUNC_0(VAR_3, VAR_1);

 if (FUNC_2(VAR_4->time_in[VAR_1],
         VAR_4->time_in[VAR_0] +
     FUNC_1(VAR_2)))
  return FUNC_0(VAR_3, VAR_0);
 if (FUNC_2(VAR_4->time_in[VAR_0],
         VAR_4->time_in[VAR_1] +
     FUNC_1(VAR_2)))
  return FUNC_0(VAR_3, VAR_1);

 return ((void*)0);
}
