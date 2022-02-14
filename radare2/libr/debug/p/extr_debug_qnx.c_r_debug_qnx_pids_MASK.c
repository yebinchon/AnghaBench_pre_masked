
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ free; } ;
typedef scalar_t__ RListFree ;
typedef TYPE_1__ RList ;
typedef int RDebug ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_3 () ;

__attribute__((used)) static RList *FUNC_4 (RDebug *VAR_3, int VAR_4) {
 RList *VAR_5 = FUNC_3 ();
 if (!VAR_5) {
  return ((void*)0);
 }
 VAR_5->free = (RListFree)&VAR_0;


 if (VAR_4) {
  FUNC_2 (VAR_5, FUNC_0 ("(current)", VAR_4, 's', 0));
 } else {
  FUNC_1 (VAR_1, VAR_5, &VAR_2);
 }

 return VAR_5;
}
