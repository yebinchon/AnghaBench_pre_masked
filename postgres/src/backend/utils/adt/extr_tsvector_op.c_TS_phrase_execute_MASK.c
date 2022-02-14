
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_12__ {int oper; int distance; int left; } ;
struct TYPE_14__ {scalar_t__ type; TYPE_1__ qoperator; } ;
struct TYPE_13__ {int negate; int width; scalar_t__ npos; } ;
typedef int (* TSExecuteCallback ) (void*,int *,TYPE_2__*) ;
typedef int Rdata ;
typedef int QueryOperand ;
typedef TYPE_3__ QueryItem ;
typedef int Ldata ;
typedef TYPE_2__ ExecPhraseData ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;




 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,TYPE_2__*,int,int,int,scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;

__attribute__((used)) static bool
FUNC_7(QueryItem *VAR_6, void *VAR_7, uint32 VAR_8,
      TSExecuteCallback VAR_9,
      ExecPhraseData *VAR_10)
{
 ExecPhraseData VAR_11,
    VAR_12;
 bool VAR_13,
    VAR_14;
 int VAR_15,
    VAR_16,
    VAR_17;


 FUNC_4();

 if (VAR_6->type == VAR_1)
  return VAR_9(VAR_7, (QueryOperand *) VAR_6, VAR_10);

 switch (VAR_6->qoperator.oper)
 {
  case 130:
   if (FUNC_7(VAR_6 + 1, VAR_7, VAR_8, VAR_9, VAR_10))
   {
    if (VAR_10->npos > 0)
    {

     VAR_10->negate = !VAR_10->negate;
     return 1;
    }
    else if (VAR_10->negate)
    {

     VAR_10->negate = 0;
     return 0;
    }

    return 1;
   }
   else
   {

    FUNC_0(VAR_10->npos == 0 && !VAR_10->negate);
    VAR_10->negate = 1;
    return 1;
   }

  case 128:
  case 131:
   FUNC_6(&VAR_11, 0, sizeof(VAR_11));
   FUNC_6(&VAR_12, 0, sizeof(VAR_12));

   if (!FUNC_7(VAR_6 + VAR_6->qoperator.left,
           VAR_7, VAR_8, VAR_9, &VAR_11))
    return 0;

   if (!FUNC_7(VAR_6 + 1,
           VAR_7, VAR_8, VAR_9, &VAR_12))
    return 0;







   if ((VAR_11.npos == 0 && !VAR_11.negate) ||
    (VAR_12.npos == 0 && !VAR_12.negate))
    return (VAR_8 & VAR_5) ? 1 : 0;

   if (VAR_6->qoperator.oper == 128)
   {




    VAR_15 = VAR_6->qoperator.distance + VAR_12.width;
    VAR_16 = 0;
    if (VAR_10)
     VAR_10->width = VAR_6->qoperator.distance +
      VAR_11.width + VAR_12.width;
   }
   else
   {




    VAR_17 = FUNC_1(VAR_11.width, VAR_12.width);
    VAR_15 = VAR_17 - VAR_11.width;
    VAR_16 = VAR_17 - VAR_12.width;
    if (VAR_10)
     VAR_10->width = VAR_17;
   }

   if (VAR_11.negate && VAR_12.negate)
   {

    (void) FUNC_3(VAR_10, &VAR_11, &VAR_12,
          VAR_2 | VAR_3 | VAR_4,
          VAR_15, VAR_16,
          VAR_11.npos + VAR_12.npos);
    if (VAR_10)
     VAR_10->negate = 1;
    return 1;
   }
   else if (VAR_11.negate)
   {

    return FUNC_3(VAR_10, &VAR_11, &VAR_12,
          VAR_4,
          VAR_15, VAR_16,
          VAR_12.npos);
   }
   else if (VAR_12.negate)
   {

    return FUNC_3(VAR_10, &VAR_11, &VAR_12,
          VAR_3,
          VAR_15, VAR_16,
          VAR_11.npos);
   }
   else
   {

    return FUNC_3(VAR_10, &VAR_11, &VAR_12,
          VAR_2,
          VAR_15, VAR_16,
          FUNC_2(VAR_11.npos, VAR_12.npos));
   }

  case 129:
   FUNC_6(&VAR_11, 0, sizeof(VAR_11));
   FUNC_6(&VAR_12, 0, sizeof(VAR_12));

   VAR_13 = FUNC_7(VAR_6 + VAR_6->qoperator.left,
            VAR_7, VAR_8, VAR_9, &VAR_11);
   VAR_14 = FUNC_7(VAR_6 + 1,
            VAR_7, VAR_8, VAR_9, &VAR_12);

   if (!VAR_13 && !VAR_14)
    return 0;







   if ((VAR_13 && VAR_11.npos == 0 && !VAR_11.negate) ||
    (VAR_14 && VAR_12.npos == 0 && !VAR_12.negate))
    return (VAR_8 & VAR_5) ? 1 : 0;






   if (!VAR_13)
    VAR_11.width = 0;
   if (!VAR_14)
    VAR_12.width = 0;







   VAR_17 = FUNC_1(VAR_11.width, VAR_12.width);
   VAR_15 = VAR_17 - VAR_11.width;
   VAR_16 = VAR_17 - VAR_12.width;
   VAR_10->width = VAR_17;

   if (VAR_11.negate && VAR_12.negate)
   {

    (void) FUNC_3(VAR_10, &VAR_11, &VAR_12,
          VAR_2,
          VAR_15, VAR_16,
          FUNC_2(VAR_11.npos, VAR_12.npos));
    VAR_10->negate = 1;
    return 1;
   }
   else if (VAR_11.negate)
   {

    (void) FUNC_3(VAR_10, &VAR_11, &VAR_12,
          VAR_3,
          VAR_15, VAR_16,
          VAR_11.npos);
    VAR_10->negate = 1;
    return 1;
   }
   else if (VAR_12.negate)
   {

    (void) FUNC_3(VAR_10, &VAR_11, &VAR_12,
          VAR_4,
          VAR_15, VAR_16,
          VAR_12.npos);
    VAR_10->negate = 1;
    return 1;
   }
   else
   {

    return FUNC_3(VAR_10, &VAR_11, &VAR_12,
          VAR_2 | VAR_3 | VAR_4,
          VAR_15, VAR_16,
          VAR_11.npos + VAR_12.npos);
   }

  default:
   FUNC_5(VAR_0, "unrecognized operator: %d", VAR_6->qoperator.oper);
 }


 return 0;
}
