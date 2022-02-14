
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int rawScalar; } ;
struct TYPE_15__ {TYPE_1__ array; } ;
struct TYPE_17__ {TYPE_2__ val; } ;
struct TYPE_16__ {char* data; } ;
typedef TYPE_3__* StringInfo ;
typedef TYPE_4__ JsonbValue ;
typedef int JsonbIteratorToken ;
typedef int JsonbIterator ;
typedef int JsonbContainer ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int **,TYPE_4__*,int) ;


 int VAR_1 ;




 int VAR_2 ;
 int FUNC_3 (TYPE_3__*,int,int) ;
 int FUNC_4 (TYPE_3__*,char*,int) ;
 int FUNC_5 (TYPE_3__*,char) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (TYPE_3__*,TYPE_4__*) ;
 TYPE_3__* FUNC_9 () ;

__attribute__((used)) static char *
FUNC_10(StringInfo VAR_3, JsonbContainer *VAR_4, int VAR_5, bool VAR_6)
{
 bool VAR_7 = 1;
 JsonbIterator *VAR_8;
 JsonbValue VAR_9;
 JsonbIteratorToken VAR_10 = VAR_1;
 int VAR_11 = 0;
 bool VAR_12 = 0;


 int VAR_13 = VAR_6 ? 1 : 2;





 bool VAR_14 = 0;
 bool VAR_15 = 0;
 bool VAR_16 = 0;

 if (VAR_3 == ((void*)0))
  VAR_3 = FUNC_9();

 FUNC_7(VAR_3, (VAR_5 >= 0) ? VAR_5 : 64);

 VAR_8 = FUNC_1(VAR_4);

 while (VAR_12 ||
     ((VAR_10 = FUNC_2(&VAR_8, &VAR_9, 0)) != VAR_1))
 {
  VAR_12 = 0;
  switch (VAR_10)
  {
   case 133:
    if (!VAR_7)
     FUNC_4(VAR_3, ", ", VAR_13);

    if (!VAR_9.val.array.rawScalar)
    {
     FUNC_3(VAR_3, VAR_14 && !VAR_16, VAR_11);
     FUNC_5(VAR_3, '[');
    }
    else
     VAR_15 = 1;

    VAR_7 = 1;
    VAR_11++;
    break;
   case 132:
    if (!VAR_7)
     FUNC_4(VAR_3, ", ", VAR_13);

    FUNC_3(VAR_3, VAR_14 && !VAR_16, VAR_11);
    FUNC_5(VAR_3, '{');

    VAR_7 = 1;
    VAR_11++;
    break;
   case 128:
    if (!VAR_7)
     FUNC_4(VAR_3, ", ", VAR_13);
    VAR_7 = 1;

    FUNC_3(VAR_3, VAR_14, VAR_11);


    FUNC_8(VAR_3, &VAR_9);
    FUNC_4(VAR_3, ": ", 2);

    VAR_10 = FUNC_2(&VAR_8, &VAR_9, 0);
    if (VAR_10 == VAR_2)
    {
     VAR_7 = 0;
     FUNC_8(VAR_3, &VAR_9);
    }
    else
    {
     FUNC_0(VAR_10 == 132 || VAR_10 == 133);






     VAR_12 = 1;
    }
    break;
   case 131:
    if (!VAR_7)
     FUNC_4(VAR_3, ", ", VAR_13);
    VAR_7 = 0;

    if (!VAR_15)
     FUNC_3(VAR_3, VAR_14, VAR_11);
    FUNC_8(VAR_3, &VAR_9);
    break;
   case 130:
    VAR_11--;
    if (!VAR_15)
    {
     FUNC_3(VAR_3, VAR_14, VAR_11);
     FUNC_5(VAR_3, ']');
    }
    VAR_7 = 0;
    break;
   case 129:
    VAR_11--;
    FUNC_3(VAR_3, VAR_14, VAR_11);
    FUNC_5(VAR_3, '}');
    VAR_7 = 0;
    break;
   default:
    FUNC_6(VAR_0, "unknown jsonb iterator token type");
  }
  VAR_14 = VAR_6;
  VAR_16 = VAR_12;
 }

 FUNC_0(VAR_11 == 0);

 return VAR_3->data;
}
