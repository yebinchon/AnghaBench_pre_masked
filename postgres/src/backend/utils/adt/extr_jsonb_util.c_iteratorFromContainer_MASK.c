
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int header; scalar_t__ children; } ;
struct TYPE_9__ {int nElems; char* dataProper; int state; scalar_t__ children; int isScalar; struct TYPE_9__* parent; TYPE_2__* container; } ;
typedef TYPE_1__ JsonbIterator ;
typedef TYPE_2__ JsonbContainer ;
typedef int JEntry ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,char*) ;
 TYPE_1__* FUNC_4 (int) ;

__attribute__((used)) static JsonbIterator *
FUNC_5(JsonbContainer *VAR_3, JsonbIterator *VAR_4)
{
 JsonbIterator *VAR_5;

 VAR_5 = FUNC_4(sizeof(JsonbIterator));
 VAR_5->container = VAR_3;
 VAR_5->parent = VAR_4;
 VAR_5->nElems = FUNC_2(VAR_3);


 VAR_5->children = VAR_3->children;

 switch (VAR_3->header & (129 | 128))
 {
  case 129:
   VAR_5->dataProper =
    (char *) VAR_5->children + VAR_5->nElems * sizeof(JEntry);
   VAR_5->isScalar = FUNC_1(VAR_3);

   FUNC_0(!VAR_5->isScalar || VAR_5->nElems == 1);

   VAR_5->state = VAR_1;
   break;

  case 128:
   VAR_5->dataProper =
    (char *) VAR_5->children + VAR_5->nElems * sizeof(JEntry) * 2;
   VAR_5->state = VAR_2;
   break;

  default:
   FUNC_3(VAR_0, "unknown type of jsonb container");
 }

 return VAR_5;
}
