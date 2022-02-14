
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int element_type; } ;
struct TYPE_10__ {scalar_t__ len; int str; } ;
struct TYPE_11__ {int jsonb; TYPE_1__ json; } ;
struct TYPE_13__ {TYPE_2__ val; scalar_t__ is_json; } ;
struct TYPE_12__ {char const* colname; int ndims; int* dims; int* sizes; int acxt; int astate; int mcxt; TYPE_5__* aio; } ;
typedef TYPE_3__ PopulateArrayContext ;
typedef int MemoryContext ;
typedef TYPE_4__ JsValue ;
typedef int Datum ;
typedef TYPE_5__ ArrayIOData ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int,int*,int*,int ,int) ;
 int* FUNC_3 (int) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;
 int FUNC_6 (TYPE_3__*,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static Datum
FUNC_8(ArrayIOData *VAR_1,
      const char *VAR_2,
      MemoryContext VAR_3,
      JsValue *VAR_4)
{
 PopulateArrayContext VAR_5;
 Datum VAR_6;
 int *VAR_7;
 int VAR_8;

 VAR_5.aio = VAR_1;
 VAR_5.mcxt = VAR_3;
 VAR_5.acxt = VAR_0;
 VAR_5.astate = FUNC_1(VAR_1->element_type, VAR_5.acxt, 1);
 VAR_5.colname = VAR_2;
 VAR_5.ndims = 0;
 VAR_5.dims = ((void*)0);
 VAR_5.sizes = ((void*)0);

 if (VAR_4->is_json)
  FUNC_6(&VAR_5, VAR_4->val.json.str,
       VAR_4->val.json.len >= 0 ? VAR_4->val.json.len
       : FUNC_7(VAR_4->val.json.str));
 else
 {
  FUNC_5(&VAR_5, VAR_4->val.jsonb, 1);
  VAR_5.dims[0] = VAR_5.sizes[0];
 }

 FUNC_0(VAR_5.ndims > 0);

 VAR_7 = FUNC_3(sizeof(int) * VAR_5.ndims);

 for (VAR_8 = 0; VAR_8 < VAR_5.ndims; VAR_8++)
  VAR_7[VAR_8] = 1;

 VAR_6 = FUNC_2(VAR_5.astate, VAR_5.ndims, VAR_5.dims, VAR_7,
          VAR_5.acxt, 1);

 FUNC_4(VAR_5.dims);
 FUNC_4(VAR_5.sizes);
 FUNC_4(VAR_7);

 return VAR_6;
}
