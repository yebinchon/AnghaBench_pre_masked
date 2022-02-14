
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char ut8 ;
typedef int ut64 ;
struct TYPE_8__ {char* data; TYPE_2__* root; } ;
struct TYPE_6__ {char* (* system ) (int ,char*) ;int io; } ;
struct TYPE_7__ {TYPE_1__ iob; } ;
typedef TYPE_2__ RFSRoot ;
typedef TYPE_3__ RFSFile ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (char*,...) ;
 char* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int ,char*) ;

__attribute__((used)) static bool FUNC_8(RFSFile *VAR_0, ut64 VAR_1, int VAR_2) {
 RFSRoot *VAR_3 = VAR_0->root;
 char *VAR_4 = FUNC_3 (VAR_0);
 if (!VAR_4) {
  return 0;
 }
 char *VAR_5 = FUNC_5 ("mg %s", VAR_4);
 FUNC_0 (VAR_4);
 if (!VAR_5) {
  return 0;
 }
 char *VAR_6 = VAR_3->iob.system (VAR_3->iob.io, VAR_5);
 FUNC_0 (VAR_5);
 if (VAR_6) {
  int VAR_7 = FUNC_6 (VAR_6);
  if (VAR_7 != VAR_2 * 2) {
   FUNC_2 ("Unexpected size (%d vs %d)\n", VAR_7, VAR_2*2);
   FUNC_0 (VAR_6);
   return 0;
  }
  VAR_0->data = (ut8 *) FUNC_1 (1, VAR_2);
  if (!VAR_0->data) {
   FUNC_0 (VAR_6);
   return 0;
  }
  int VAR_8 = FUNC_4 (VAR_6, VAR_0->data);
  if (VAR_8 != VAR_2) {
   FUNC_2 ("Inconsistent read\n");
   FUNC_0 (VAR_0->data);
  }
  FUNC_0 (VAR_6);
 }
 return 0;
}
