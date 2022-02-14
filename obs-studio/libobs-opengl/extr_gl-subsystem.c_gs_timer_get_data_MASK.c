
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {int * queries; } ;
typedef TYPE_1__ gs_timer_t ;
typedef scalar_t__ GLuint64 ;
typedef int GLint ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,scalar_t__*) ;
 int FUNC_2 (char*) ;

bool FUNC_3(gs_timer_t *VAR_2, uint64_t *VAR_3)
{
 GLint VAR_4 = 0;
 FUNC_0(VAR_2->queries[1], VAR_1,
      &VAR_4);

 GLuint64 VAR_5, VAR_6;
 FUNC_1(VAR_2->queries[0], VAR_0, &VAR_5);
 FUNC_2("glGetQueryObjectui64v");
 FUNC_1(VAR_2->queries[1], VAR_0, &VAR_6);
 FUNC_2("glGetQueryObjectui64v");

 *VAR_3 = VAR_6 - VAR_5;
 return 1;
}
