
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut32 ;
struct TYPE_4__ {TYPE_1__* desc; int uri; scalar_t__ perm; } ;
struct TYPE_3__ {int uri; scalar_t__ perm; } ;
typedef TYPE_1__ RIODesc ;
typedef TYPE_2__ FindFile ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(void *VAR_0, void *VAR_1, ut32 VAR_2) {
 FindFile *VAR_3 = (FindFile*)VAR_0;
 RIODesc *VAR_4 = (RIODesc*)VAR_1;
 if (VAR_4->perm && VAR_3->perm && !FUNC_0 (VAR_4->uri, VAR_3->uri)) {
  VAR_3->desc = VAR_4;
  return 0;
 }
 return 1;
}
