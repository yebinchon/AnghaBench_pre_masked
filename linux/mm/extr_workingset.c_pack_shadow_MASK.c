
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long node_id; } ;
typedef TYPE_1__ pg_data_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 void* FUNC_0 (unsigned long) ;

__attribute__((used)) static void *FUNC_1(int VAR_4, pg_data_t *VAR_5, unsigned long VAR_6,
    bool VAR_7)
{
 VAR_6 >>= VAR_3;
 VAR_6 &= VAR_0;
 VAR_6 = (VAR_6 << VAR_1) | VAR_4;
 VAR_6 = (VAR_6 << VAR_2) | VAR_5->node_id;
 VAR_6 = (VAR_6 << 1) | VAR_7;

 return FUNC_0(VAR_6);
}
