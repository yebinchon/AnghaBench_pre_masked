
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_18__ {int value; int key; } ;
struct TYPE_14__ {int nPairs; TYPE_5__* pairs; } ;
struct TYPE_15__ {TYPE_1__ object; } ;
struct TYPE_17__ {TYPE_2__ val; } ;
struct TYPE_16__ {int len; } ;
typedef TYPE_3__* StringInfo ;
typedef TYPE_4__ JsonbValue ;
typedef TYPE_5__ JsonbPair ;
typedef int JEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_3__*,char*,int) ;
 int FUNC_2 (TYPE_3__*,int*,int *) ;
 int FUNC_3 (TYPE_3__*,int*,int *,int) ;
 int FUNC_4 (TYPE_3__*,int,char*,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_10(StringInfo VAR_8, JEntry *VAR_9, JsonbValue *VAR_10, int VAR_11)
{
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 uint32 VAR_16;
 int VAR_17 = VAR_10->val.object.nPairs;


 VAR_12 = VAR_8->len;


 FUNC_8(VAR_8);





 VAR_16 = VAR_17 | VAR_2;
 FUNC_1(VAR_8, (char *) &VAR_16, sizeof(uint32));


 VAR_13 = FUNC_9(VAR_8, sizeof(JEntry) * VAR_17 * 2);





 VAR_15 = 0;
 for (VAR_14 = 0; VAR_14 < VAR_17; VAR_14++)
 {
  JsonbPair *VAR_18 = &VAR_10->val.object.pairs[VAR_14];
  int VAR_19;
  JEntry VAR_20;





  FUNC_2(VAR_8, &VAR_20, &VAR_18->key);

  VAR_19 = FUNC_0(VAR_20);
  VAR_15 += VAR_19;






  if (VAR_15 > VAR_6)
   FUNC_5(VAR_1,
     (FUNC_6(VAR_0),
      FUNC_7("total size of jsonb object elements exceeds the maximum of %u bytes",
       VAR_6)));




  if ((VAR_14 % VAR_3) == 0)
   VAR_20 = (VAR_20 & VAR_7) | VAR_15 | VAR_4;

  FUNC_4(VAR_8, VAR_13, (char *) &VAR_20, sizeof(JEntry));
  VAR_13 += sizeof(JEntry);
 }
 for (VAR_14 = 0; VAR_14 < VAR_17; VAR_14++)
 {
  JsonbPair *VAR_21 = &VAR_10->val.object.pairs[VAR_14];
  int VAR_22;
  JEntry VAR_23;





  FUNC_3(VAR_8, &VAR_23, &VAR_21->value, VAR_11 + 1);

  VAR_22 = FUNC_0(VAR_23);
  VAR_15 += VAR_22;






  if (VAR_15 > VAR_6)
   FUNC_5(VAR_1,
     (FUNC_6(VAR_0),
      FUNC_7("total size of jsonb object elements exceeds the maximum of %u bytes",
       VAR_6)));




  if (((VAR_14 + VAR_17) % VAR_3) == 0)
   VAR_23 = (VAR_23 & VAR_7) | VAR_15 | VAR_4;

  FUNC_4(VAR_8, VAR_13, (char *) &VAR_23, sizeof(JEntry));
  VAR_13 += sizeof(JEntry);
 }


 VAR_15 = VAR_8->len - VAR_12;


 if (VAR_15 > VAR_6)
  FUNC_5(VAR_1,
    (FUNC_6(VAR_0),
     FUNC_7("total size of jsonb object elements exceeds the maximum of %u bytes",
      VAR_6)));


 *VAR_9 = VAR_5 | VAR_15;
}
