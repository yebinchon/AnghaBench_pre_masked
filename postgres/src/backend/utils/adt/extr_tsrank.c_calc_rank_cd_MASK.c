
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ float4 ;
struct TYPE_22__ {int q; int p; TYPE_3__* begin; TYPE_3__* end; } ;
struct TYPE_21__ {TYPE_3__* operandData; TYPE_2__* query; } ;
struct TYPE_20__ {int pos; } ;
struct TYPE_19__ {int size; } ;
struct TYPE_18__ {scalar_t__ size; } ;
typedef TYPE_1__* TSVector ;
typedef TYPE_2__* TSQuery ;
typedef TYPE_3__ QueryRepresentationOperand ;
typedef TYPE_4__ QueryRepresentation ;
typedef TYPE_3__ DocRepresentation ;
typedef TYPE_6__ CoverExt ;


 scalar_t__ FUNC_0 (TYPE_3__*,int,TYPE_4__*,TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_6__*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 TYPE_3__* FUNC_7 (TYPE_1__*,TYPE_4__*,int*) ;
 int FUNC_8 (scalar_t__ const*) ;
 double FUNC_9 (double) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (TYPE_3__*) ;
 scalar_t__ const* VAR_8 ;

__attribute__((used)) static float4
FUNC_12(const float4 *VAR_9, TSVector VAR_10, TSQuery VAR_11, int VAR_12)
{
 DocRepresentation *VAR_13;
 int VAR_14,
    VAR_15,
    VAR_16 = 0;
 CoverExt VAR_17;
 double VAR_18 = 0.0;
 double VAR_19[FUNC_8(VAR_8)];
 double VAR_20 = 0.0,
    VAR_21 = 0.0,
    VAR_22 = 0.0;
 int VAR_23 = 0;
 QueryRepresentation VAR_24;


 for (VAR_15 = 0; VAR_15 < FUNC_8(VAR_8); VAR_15++)
 {
  VAR_19[VAR_15] = ((double) ((VAR_9[VAR_15] >= 0) ? VAR_9[VAR_15] : VAR_8[VAR_15]));
  if (VAR_19[VAR_15] > 1.0)
   FUNC_4(VAR_1,
     (FUNC_5(VAR_0),
      FUNC_6("weight out of range")));
  VAR_19[VAR_15] = 1.0 / VAR_19[VAR_15];
 }

 VAR_24.query = VAR_11;
 VAR_24.operandData = (QueryRepresentationOperand *)
  FUNC_10(sizeof(QueryRepresentationOperand) * VAR_11->size);

 VAR_13 = FUNC_7(VAR_10, &VAR_24, &VAR_16);
 if (!VAR_13)
 {
  FUNC_11(VAR_24.operandData);
  return 0.0;
 }

 FUNC_1(&VAR_17, 0, sizeof(CoverExt));
 while (FUNC_0(VAR_13, VAR_16, &VAR_24, &VAR_17))
 {
  double VAR_25 = 0.0;
  double VAR_26 = 0.0;
  int VAR_27;
  DocRepresentation *VAR_28 = VAR_17.begin;

  while (VAR_28 <= VAR_17.end)
  {
   VAR_26 += VAR_19[FUNC_2(VAR_28->pos)];
   VAR_28++;
  }

  VAR_25 = ((double) (VAR_17.end - VAR_17.begin + 1)) / VAR_26;






  VAR_27 = (VAR_17.q - VAR_17.p) - (VAR_17.end - VAR_17.begin);
  if (VAR_27 < 0)
   VAR_27 = (VAR_17.end - VAR_17.begin) / 2;
  VAR_18 += VAR_25 / ((double) (1 + VAR_27));

  VAR_22 = ((double) (VAR_17.q + VAR_17.p)) / 2.0;
  if (VAR_23 > 0 && VAR_22 > VAR_21 )


   VAR_20 += 1.0 / (VAR_22 - VAR_21);

  VAR_21 = VAR_22;
  VAR_23++;
 }

 if ((VAR_12 & VAR_4) && VAR_10->size > 0)
  VAR_18 /= FUNC_9((double) (FUNC_3(VAR_10) + 1));

 if (VAR_12 & VAR_3)
 {
  VAR_14 = FUNC_3(VAR_10);
  if (VAR_14 > 0)
   VAR_18 /= (double) VAR_14;
 }

 if ((VAR_12 & VAR_2) && VAR_23 > 0 && VAR_20 > 0)
  VAR_18 /= ((double) VAR_23) / VAR_20;

 if ((VAR_12 & VAR_7) && VAR_10->size > 0)
  VAR_18 /= (double) (VAR_10->size);

 if ((VAR_12 & VAR_5) && VAR_10->size > 0)
  VAR_18 /= FUNC_9((double) (VAR_10->size + 1)) / FUNC_9(2.0);

 if (VAR_12 & VAR_6)
  VAR_18 /= (VAR_18 + 1);

 FUNC_11(VAR_13);

 FUNC_11(VAR_24.operandData);

 return (float4) VAR_18;
}
