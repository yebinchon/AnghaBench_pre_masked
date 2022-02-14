
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_7__ {TYPE_1__* data; } ;
struct TYPE_6__ {int modified; } ;
typedef TYPE_1__ RIOZipFileObj ;
typedef TYPE_2__ RIODesc ;
typedef int RIO ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static bool FUNC_2(RIO *VAR_0, RIODesc *VAR_1, ut64 VAR_2) {
 RIOZipFileObj *VAR_3;
 if (!VAR_1 || !VAR_1->data) {
  return 0;
 }
 VAR_3 = VAR_1->data;
 if (FUNC_1 (VAR_3, VAR_2)) {
  VAR_3->modified = 1;
  FUNC_0 (VAR_3);
  return 1;
 }
 return 0;
}
