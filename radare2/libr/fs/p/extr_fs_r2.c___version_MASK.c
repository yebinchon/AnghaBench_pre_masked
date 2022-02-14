
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_11__ {int size; int p; int * data; int * ptr; } ;
struct TYPE_9__ {char* (* cmdstrf ) (int ,char*) ;int core; } ;
struct TYPE_10__ {int p; TYPE_1__ cob; } ;
typedef TYPE_2__ RFSRoot ;
typedef TYPE_3__ RFSFile ;


 int FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,char const*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ,char*) ;

__attribute__((used)) static RFSFile *FUNC_4(RFSRoot *VAR_0, RFSFile *VAR_1, const char *VAR_2) {
 char *VAR_3 = VAR_0->cob.cmdstrf (VAR_0->cob.core, "?V");

 if (!VAR_1) {
  VAR_1 = FUNC_1 (VAR_0, VAR_2);
 }
 VAR_1->ptr = ((void*)0);
 FUNC_0 (VAR_1->data);
 VAR_1->data = (ut8*)VAR_3;
 VAR_1->p = VAR_0->p;
 VAR_1->size = FUNC_2 (VAR_3);
 return VAR_1;
}
