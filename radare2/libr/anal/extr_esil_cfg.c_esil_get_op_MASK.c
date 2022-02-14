
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ops; } ;
typedef int RAnalEsilOp ;
typedef TYPE_1__ RAnalEsil ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (scalar_t__,char*,int ) ;
 scalar_t__ FUNC_4 (char const*) ;

RAnalEsilOp *FUNC_5 (RAnalEsil *VAR_0, const char *VAR_1) {
 FUNC_0 (VAR_1 && FUNC_4 (VAR_1) && VAR_0 && VAR_0->ops, ((void*)0));
 char VAR_2[128];
 char *VAR_3 = FUNC_2 (FUNC_1 (VAR_1), VAR_2, 16);
 return (RAnalEsilOp *)(size_t)FUNC_3 (VAR_0->ops, VAR_3, 0);
}
