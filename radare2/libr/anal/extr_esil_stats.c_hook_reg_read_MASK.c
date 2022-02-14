
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_3__ {int stats; } ;
typedef TYPE_1__ RAnalEsil ;


 int FUNC_0 (int ,char const*,char const*,int ) ;

__attribute__((used)) static int FUNC_1(RAnalEsil *VAR_0, const char *VAR_1, ut64 *VAR_2, int *VAR_3) {
 const char *VAR_4 = (*VAR_1>='0' && *VAR_1<='9')? "num.load": "reg.read";
 FUNC_0 (VAR_0->stats, VAR_4, VAR_1, 0);
 return 0;
}
