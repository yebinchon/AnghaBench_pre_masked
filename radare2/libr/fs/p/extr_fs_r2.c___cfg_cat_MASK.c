
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_11__ {int size; int p; int * data; int * ptr; } ;
struct TYPE_9__ {char* (* cmdstrf ) (int ,char*,char*) ;int core; } ;
struct TYPE_10__ {int p; TYPE_1__ cob; } ;
typedef TYPE_2__ RFSRoot ;
typedef TYPE_3__ RFSFile ;


 TYPE_3__* FUNC_0 (TYPE_2__*,char const*) ;
 int FUNC_1 (char*,char,char) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (int ,char*,char*) ;

__attribute__((used)) static RFSFile *FUNC_5(RFSRoot *VAR_0, RFSFile *VAR_1, const char *VAR_2) {
 if (FUNC_3 (VAR_2) < 6) {
  return ((void*)0);
 }
 char *VAR_3 = FUNC_2 (VAR_2 + 5);
 FUNC_1 (VAR_3, '/', '.');
 char *VAR_4 = VAR_0->cob.cmdstrf (VAR_0->cob.core, "e %s", VAR_3);


 if (!VAR_1) {
  VAR_1 = FUNC_0 (VAR_0, VAR_2);
 }
 VAR_1->ptr = ((void*)0);
 VAR_1->data = (ut8*)VAR_4;
 VAR_1->p = VAR_0->p;
 VAR_1->size = FUNC_3 (VAR_4);
 return VAR_1;
}
