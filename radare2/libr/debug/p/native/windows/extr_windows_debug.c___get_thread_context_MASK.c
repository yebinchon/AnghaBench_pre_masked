
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef int ctx ;
struct TYPE_4__ {int ContextFlags; int member_0; } ;
typedef int HANDLE ;
typedef TYPE_1__ CONTEXT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_1__*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(HANDLE VAR_1, ut8 *VAR_2, int VAR_3, int VAR_4) {
 int VAR_5 = 0;
 CONTEXT VAR_6 = {0};

 VAR_6.ContextFlags = VAR_0;
 if (FUNC_0 (VAR_1, &VAR_6)) {
  if (VAR_3 > sizeof (VAR_6)) {
   VAR_3 = sizeof (VAR_6);
  }
  FUNC_2 (VAR_2, &VAR_6, VAR_3);
  VAR_5 = VAR_3;
 } else {
  if (FUNC_1 (VAR_1)) {
   FUNC_3 ("__get_thread_context/GetThreadContext");
  }
 }
 return VAR_5;
}
