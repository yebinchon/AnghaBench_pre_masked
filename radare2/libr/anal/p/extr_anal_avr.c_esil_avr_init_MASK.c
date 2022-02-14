
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ round; } ;
struct TYPE_6__ {int hook_reg_write; } ;
struct TYPE_7__ {TYPE_1__ cb; } ;
typedef TYPE_2__ RAnalEsil ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_5__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,char*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(RAnalEsil *VAR_7) {
 if (!VAR_7) {
  return 0;
 }
 VAR_5.round = 0;
 FUNC_0 (VAR_7, "des", VAR_1, 0, 0, VAR_0);
 FUNC_0 (VAR_7, "SPM_PAGE_ERASE", VAR_2, 0, 0, VAR_0);
 FUNC_0 (VAR_7, "SPM_PAGE_FILL", VAR_3, 0, 0, VAR_0);
 FUNC_0 (VAR_7, "SPM_PAGE_WRITE", VAR_4, 0, 0, VAR_0);
 VAR_7->cb.hook_reg_write = VAR_6;

 return 1;
}
