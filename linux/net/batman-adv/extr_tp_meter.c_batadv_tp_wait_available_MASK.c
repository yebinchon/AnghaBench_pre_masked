
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_tp_vars {int more_bytes; } ;


 int VAR_0 ;
 int FUNC_0 (struct batadv_tp_vars*,size_t) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct batadv_tp_vars *VAR_1, size_t VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1->more_bytes,
            FUNC_0(VAR_1, VAR_2),
            VAR_0 / 10);

 return VAR_3;
}
