
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* file; int io; } ;
struct TYPE_10__ {int name; } ;
struct TYPE_9__ {int user; } ;
struct TYPE_8__ {int fd; } ;
typedef int RThreadFunctionRet ;
typedef TYPE_2__ RThread ;
typedef TYPE_3__ RIODesc ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 TYPE_6__ VAR_1 ;
 int FUNC_2 (TYPE_6__*,char*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (int ,int ) ;
 char* FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int * VAR_2 ;
 char* FUNC_8 (char*,char) ;

__attribute__((used)) static RThreadFunctionRet FUNC_9(RThread *VAR_3) {
 RIODesc *VAR_4 = FUNC_4 (VAR_1.io, VAR_1.file->fd);
 if (VAR_2 && FUNC_3 (VAR_4->name)) {
  char *VAR_5, *VAR_6, *VAR_7 = FUNC_5 (VAR_2, ((void*)0), ((void*)0));
  VAR_6 = VAR_7;
  if (VAR_6) {
   do {
    if (VAR_3) {
     FUNC_6 (VAR_3->user);
    }
    VAR_5 = FUNC_8 (VAR_6, '\n');
    if (VAR_5) {
     *VAR_5 = 0;
    }
    FUNC_2 (&VAR_1, VAR_6, 0);
    if (VAR_5) {
     VAR_6 = VAR_5 + 1;
    }
    if (VAR_3) {
     FUNC_7 (VAR_3->user);
    }
   } while (VAR_5);
  }

  FUNC_1 (VAR_2);
  VAR_2 = ((void*)0);
 }
 if (VAR_3) {
  FUNC_0 ("rabin2: done\n");
 }
 return VAR_0;
}
