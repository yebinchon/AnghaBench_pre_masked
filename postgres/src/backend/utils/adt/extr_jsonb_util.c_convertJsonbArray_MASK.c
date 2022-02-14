
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_13__ {int nElems; TYPE_4__* elems; scalar_t__ rawScalar; } ;
struct TYPE_14__ {TYPE_1__ array; } ;
struct TYPE_16__ {TYPE_2__ val; } ;
struct TYPE_15__ {int len; } ;
typedef TYPE_3__* StringInfo ;
typedef TYPE_4__ JsonbValue ;
typedef int JEntry ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_3__*,char*,int) ;
 int FUNC_3 (TYPE_3__*,int*,TYPE_4__*,int) ;
 int FUNC_4 (TYPE_3__*,int,char*,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_10(StringInfo VAR_9, JEntry *VAR_10, JsonbValue *VAR_11, int VAR_12)
{
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 uint32 VAR_17;
 int VAR_18 = VAR_11->val.array.nElems;


 VAR_13 = VAR_9->len;


 FUNC_8(VAR_9);





 VAR_17 = VAR_18 | VAR_2;
 if (VAR_11->val.array.rawScalar)
 {
  FUNC_0(VAR_18 == 1);
  FUNC_0(VAR_12 == 0);
  VAR_17 |= VAR_3;
 }

 FUNC_2(VAR_9, (char *) &VAR_17, sizeof(uint32));


 VAR_14 = FUNC_9(VAR_9, sizeof(JEntry) * VAR_18);

 VAR_16 = 0;
 for (VAR_15 = 0; VAR_15 < VAR_18; VAR_15++)
 {
  JsonbValue *VAR_19 = &VAR_11->val.array.elems[VAR_15];
  int VAR_20;
  JEntry VAR_21;





  FUNC_3(VAR_9, &VAR_21, VAR_19, VAR_12 + 1);

  VAR_20 = FUNC_1(VAR_21);
  VAR_16 += VAR_20;






  if (VAR_16 > VAR_7)
   FUNC_5(VAR_1,
     (FUNC_6(VAR_0),
      FUNC_7("total size of jsonb array elements exceeds the maximum of %u bytes",
       VAR_7)));




  if ((VAR_15 % VAR_4) == 0)
   VAR_21 = (VAR_21 & VAR_8) | VAR_16 | VAR_5;

  FUNC_4(VAR_9, VAR_14, (char *) &VAR_21, sizeof(JEntry));
  VAR_14 += sizeof(JEntry);
 }


 VAR_16 = VAR_9->len - VAR_13;


 if (VAR_16 > VAR_7)
  FUNC_5(VAR_1,
    (FUNC_6(VAR_0),
     FUNC_7("total size of jsonb array elements exceeds the maximum of %u bytes",
      VAR_7)));


 *VAR_10 = VAR_6 | VAR_16;
}
