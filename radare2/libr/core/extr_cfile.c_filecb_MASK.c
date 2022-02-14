
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut32 ;
struct TYPE_4__ {int found; int name; } ;
struct TYPE_3__ {int name; } ;
typedef TYPE_1__ RIODesc ;
typedef TYPE_2__ RCoreFileData ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(void *VAR_0, void *VAR_1, ut32 VAR_2) {
 RCoreFileData *VAR_3 = VAR_0;
 RIODesc *VAR_4 = (RIODesc *)VAR_1;
 if (!FUNC_0 (VAR_4->name, VAR_3->name)) {
  VAR_3->found = 1;
 }
 return 1;
}
