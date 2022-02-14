
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int num; } ;
struct TYPE_6__ {scalar_t__ alias; int offset; } ;
typedef TYPE_1__ RFlagItem ;
typedef TYPE_2__ RFlag ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static RFlagItem *FUNC_2(RFlag *VAR_0, RFlagItem *VAR_1) {
 FUNC_1 (VAR_0 && VAR_1, ((void*)0));
 if (VAR_1->alias) {
  VAR_1->offset = FUNC_0 (VAR_0->num, VAR_1->alias);
 }
 return VAR_1;
}
