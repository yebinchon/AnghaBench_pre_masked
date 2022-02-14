
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int b; struct TYPE_5__* password; struct TYPE_5__* name; scalar_t__ modified; } ;
typedef TYPE_1__ RIOZipFileObj ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(RIOZipFileObj *VAR_0) {
 if (!VAR_0) {
  return;
 }
 if (VAR_0->modified) {
  FUNC_2 (VAR_0);
 }
 FUNC_0 (VAR_0->name);
 FUNC_0 (VAR_0->password);
 FUNC_1 (VAR_0->b);
 FUNC_0 (VAR_0);
}
