
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ path; scalar_t__ dir; } ;
typedef int RList ;
typedef int RFSRoot ;


 int FUNC_0 (int *,scalar_t__,char,int ,int ) ;
 int * FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static RList *FUNC_2(RFSRoot *VAR_1, const char *VAR_2) {
 RList *VAR_3 = FUNC_1 (((void*)0));
 if (!VAR_3) {
  return ((void*)0);
 }
 int VAR_4;
 for (VAR_4 = 0; VAR_0[VAR_4].path; VAR_4++) {
  char VAR_5 = VAR_0[VAR_4].dir? 'd': 'f';
  FUNC_0 (VAR_3, VAR_0[VAR_4].path + 1, VAR_5, 0, 0);
 }
 return VAR_3;
}
