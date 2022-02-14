
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int state ;
typedef int sem ;
struct TYPE_5__ {int res; int object_field_start; int scalar; int array_end; int object_end; int array_start; int object_start; void* semstate; } ;
typedef TYPE_1__ JsonbInState ;
typedef TYPE_1__ JsonSemAction ;
typedef int JsonLexContext ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_2 (char*,int,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int *,TYPE_1__*) ;

__attribute__((used)) static inline Datum
FUNC_5(char *VAR_6, int VAR_7)
{
 JsonLexContext *VAR_8;
 JsonbInState VAR_9;
 JsonSemAction VAR_10;

 FUNC_3(&VAR_9, 0, sizeof(VAR_9));
 FUNC_3(&VAR_10, 0, sizeof(VAR_10));
 VAR_8 = FUNC_2(VAR_6, VAR_7, 1);

 VAR_10.semstate = (void *) &VAR_9;

 VAR_10.object_start = VAR_4;
 VAR_10.array_start = VAR_1;
 VAR_10.object_end = VAR_2;
 VAR_10.array_end = VAR_0;
 VAR_10.scalar = VAR_5;
 VAR_10.object_field_start = VAR_3;

 FUNC_4(VAR_8, &VAR_10);


 FUNC_1(FUNC_0(VAR_9.res));
}
