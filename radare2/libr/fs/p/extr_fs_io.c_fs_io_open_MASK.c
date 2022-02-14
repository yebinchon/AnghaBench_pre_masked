
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ut32 ;
struct TYPE_10__ {scalar_t__ size; int p; int * ptr; } ;
struct TYPE_8__ {char* (* system ) (int ,char*) ;int io; } ;
struct TYPE_9__ {int p; TYPE_1__ iob; } ;
typedef TYPE_2__ RFSRoot ;
typedef TYPE_3__ RFSFile ;


 int FUNC_0 (char*) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,char const*) ;
 char* FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char*,scalar_t__*) ;
 char* FUNC_4 (int ,char*) ;

__attribute__((used)) static RFSFile *FUNC_5(RFSRoot *VAR_0, const char *VAR_1, bool VAR_2) {
 char *VAR_3 = FUNC_2 ("m %s", VAR_1);
 char *VAR_4 = VAR_0->iob.system (VAR_0->iob.io, VAR_3);
 FUNC_0 (VAR_3);
 if (VAR_4) {
  ut32 VAR_5 = 0;
  if (FUNC_3 (VAR_4, "%u", &VAR_5) != 1) {
   VAR_5 = 0;
  }
  FUNC_0 (VAR_4);
  if (VAR_5 == 0) {
   return ((void*)0);
  }
  RFSFile *VAR_6 = FUNC_1 (VAR_0, VAR_1);
  if (!VAR_6) {
   return ((void*)0);
  }
  VAR_6->ptr = ((void*)0);
  VAR_6->p = VAR_0->p;
  VAR_6->size = VAR_5;
  return VAR_6;
 }
 return ((void*)0);
}
