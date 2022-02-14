
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* src; } ;
typedef TYPE_1__ RAnalOp ;
typedef int RAnal ;


 scalar_t__ FUNC_0 (char const*,char const*) ;
 char* FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static bool FUNC_2 (const char *VAR_0, RAnal *VAR_1, RAnalOp *VAR_2) {
 const char* VAR_3 = VAR_2->src[0] ? FUNC_1 (VAR_1, VAR_2->src[0]) : ((void*)0);
 const char* VAR_4 = VAR_2->src[1] ? FUNC_1 (VAR_1, VAR_2->src[1]) : ((void*)0);
 const char* VAR_5 = VAR_2->src[2] ? FUNC_1 (VAR_1, VAR_2->src[2]) : ((void*)0);
 return (FUNC_0 (VAR_0, VAR_3)) || (FUNC_0 (VAR_0, VAR_4)) || (FUNC_0 (VAR_0, VAR_5));
}
