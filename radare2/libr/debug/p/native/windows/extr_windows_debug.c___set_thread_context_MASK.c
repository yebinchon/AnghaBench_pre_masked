
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef int ctx ;
struct TYPE_4__ {int member_0; } ;
typedef int HANDLE ;
typedef TYPE_1__ CONTEXT ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int const*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(HANDLE VAR_0, const ut8 *VAR_1, int VAR_2, int VAR_3) {
 bool VAR_4;
 CONTEXT VAR_5 = {0};
 VAR_2 = FUNC_0 (VAR_2, sizeof (VAR_5));
 FUNC_2 (&VAR_5, VAR_1, VAR_2);
 if(!(VAR_4 = FUNC_1 (VAR_0, &VAR_5))) {
  FUNC_3 ("__set_thread_context/SetThreadContext");
 }
 return VAR_4;
}
