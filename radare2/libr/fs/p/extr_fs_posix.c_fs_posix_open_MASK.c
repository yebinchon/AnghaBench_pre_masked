
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int size; int p; int * ptr; } ;
struct TYPE_8__ {int p; } ;
typedef TYPE_1__ RFSRoot ;
typedef TYPE_2__ RFSFile ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (TYPE_1__*,char const*) ;
 int * FUNC_5 (char const*,char*) ;

__attribute__((used)) static RFSFile* FUNC_6(RFSRoot *VAR_1, const char *VAR_2, bool VAR_3) {
 FILE *VAR_4;
 RFSFile *VAR_5 = FUNC_4 (VAR_1, VAR_2);
 if (!VAR_5) {
  return ((void*)0);
 }
 VAR_5->ptr = ((void*)0);
 VAR_5->p = VAR_1->p;
 VAR_4 = FUNC_5 (VAR_2, VAR_3? "wb": "rb");
 if (VAR_4) {
  FUNC_1 (VAR_4, 0, VAR_0);
  VAR_5->size = FUNC_2 (VAR_4);
  FUNC_0 (VAR_4);
 } else {
  FUNC_3 (VAR_5);
  VAR_5 = ((void*)0);
 }
 return VAR_5;
}
