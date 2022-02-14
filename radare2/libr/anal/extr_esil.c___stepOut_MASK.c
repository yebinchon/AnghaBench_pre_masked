
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int address; scalar_t__ (* cmd ) (TYPE_1__*,char const*,int ,int ) ;} ;
typedef TYPE_1__ RAnalEsil ;


 scalar_t__ FUNC_0 (TYPE_1__*,char const*,int ,int ) ;

__attribute__((used)) static bool FUNC_1(RAnalEsil *VAR_0, const char *VAR_1) {
 static bool VAR_2 = 0;
 if (VAR_1 && VAR_0 && VAR_0->cmd && !VAR_2) {
  VAR_2 = 1;
  if (VAR_0->cmd (VAR_0, VAR_1, VAR_0->address, 0)) {
   VAR_2 = 0;

   return 1;
  }
  VAR_2 = 0;
 }
 return 0;
}
