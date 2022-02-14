
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int varsourceline ;
typedef int varsource ;
typedef int varscontext ;
typedef int len ;
struct TYPE_3__ {char** arg; struct TYPE_3__* previous; int callback; } ;
typedef int Size ;
typedef int GucSource ;
typedef int GucContext ;
typedef TYPE_1__ ErrorContextCallback ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_5 (int*,void*,int) ;
 int VAR_6 ;
 char* FUNC_6 (char**,char*) ;
 int FUNC_7 (char**,char*,int*,int) ;
 int FUNC_8 (char*,char*,int,int,int ,int,int ,int) ;
 int FUNC_9 (char*,char*,int) ;

void
FUNC_10(void *VAR_7)
{
 char *VAR_8,
      *VAR_9,
      *VAR_10;
 int VAR_11;
 GucSource VAR_12;
 GucContext VAR_13;
 char *VAR_14 = (char *) VAR_7;
 char *VAR_15;
 Size VAR_16;
 int VAR_17;
 ErrorContextCallback VAR_18;


 for (VAR_17 = 0; VAR_17 < VAR_6; VAR_17++)
  if (!FUNC_1(VAR_5[VAR_17]))
   FUNC_0(VAR_5[VAR_17]);


 FUNC_5(&VAR_16, VAR_7, sizeof(VAR_16));

 VAR_14 += sizeof(VAR_16);
 VAR_15 = VAR_14 + VAR_16;


 VAR_18.callback = VAR_4;
 VAR_18.previous = VAR_3;
 VAR_18.arg = ((void*)0);
 VAR_3 = &VAR_18;

 while (VAR_14 < VAR_15)
 {
  int VAR_19;
  char *VAR_20[2];

  VAR_8 = FUNC_6(&VAR_14, VAR_15);
  VAR_9 = FUNC_6(&VAR_14, VAR_15);
  VAR_10 = FUNC_6(&VAR_14, VAR_15);
  if (VAR_10[0])
   FUNC_7(&VAR_14, VAR_15,
         &VAR_11, sizeof(VAR_11));
  else
   VAR_11 = 0;
  FUNC_7(&VAR_14, VAR_15,
        &VAR_12, sizeof(VAR_12));
  FUNC_7(&VAR_14, VAR_15,
        &VAR_13, sizeof(VAR_13));

  VAR_20[0] = VAR_8;
  VAR_20[1] = VAR_9;
  VAR_18.arg = &VAR_20[0];
  VAR_19 = FUNC_8(VAR_8, VAR_9, VAR_13, VAR_12,
           VAR_2, 1, VAR_1, 1);
  if (VAR_19 <= 0)
   FUNC_2(VAR_1,
     (FUNC_3(VAR_0),
      FUNC_4("parameter \"%s\" could not be set", VAR_8)));
  if (VAR_10[0])
   FUNC_9(VAR_8, VAR_10, VAR_11);
  VAR_18.arg = ((void*)0);
 }

 VAR_3 = VAR_18.previous;
}
