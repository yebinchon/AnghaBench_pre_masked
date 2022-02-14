
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut16 ;
struct TYPE_7__ {int opcode; } ;
struct TYPE_8__ {int member_0; } ;
struct TYPE_9__ {TYPE_1__ b; TYPE_2__ member_0; } ;
typedef TYPE_3__ op ;


 int FUNC_0 (int const,TYPE_3__*,int const,int const) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (char*,TYPE_3__*) ;

int FUNC_3(char *VAR_0, const ut16* VAR_1, int VAR_2, int *VAR_3) {
 op VAR_4 = {{0}};
 int VAR_5 = FUNC_0 (VAR_1[0], &VAR_4, VAR_1[1], VAR_1[2]);
 if (VAR_3) *VAR_3 = FUNC_1(&VAR_4) + ((VAR_4.b.opcode >= 0xc)?1:0);
 FUNC_2 (VAR_0, &VAR_4);

 return VAR_5<<1;
}
