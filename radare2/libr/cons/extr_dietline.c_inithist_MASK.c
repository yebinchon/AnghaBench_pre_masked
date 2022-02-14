
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; char** data; } ;
struct TYPE_4__ {TYPE_1__ history; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__) ;
 scalar_t__ FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2() {
 FUNC_0 (VAR_0.history);
 if ((VAR_0.history.size + 1024) * sizeof (char *) < VAR_0.history.size) {
  return 0;
 }
 VAR_0.history.data = (char **) FUNC_1 ((VAR_0.history.size + 1024), sizeof(char *));
 if (!VAR_0.history.data) {
  return 0;
 }
 VAR_0.history.size = VAR_1;
 return 1;
}
