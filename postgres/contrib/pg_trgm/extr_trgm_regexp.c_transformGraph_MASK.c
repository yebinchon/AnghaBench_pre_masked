
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int initkey ;
struct TYPE_14__ {void** colors; } ;
struct TYPE_15__ {int nstate; TYPE_1__ prefix; } ;
typedef TYPE_2__ TrgmStateKey ;
struct TYPE_16__ {int flags; } ;
typedef TYPE_3__ TrgmState ;
struct TYPE_17__ {scalar_t__ queue; scalar_t__ arcsCount; int overflowed; int states; TYPE_3__* initState; int regex; scalar_t__ nstates; scalar_t__ keysQueue; } ;
typedef TYPE_4__ TrgmNFA ;
struct TYPE_18__ {int keysize; int entrysize; int hcxt; } ;
typedef TYPE_5__ HASHCTL ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_3__* FUNC_1 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_2 (char*,int,TYPE_5__*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_8(TrgmNFA *VAR_10)
{
 HASHCTL VAR_11;
 TrgmStateKey VAR_12;
 TrgmState *VAR_13;


 VAR_10->queue = VAR_7;
 VAR_10->keysQueue = VAR_7;
 VAR_10->arcsCount = 0;
 VAR_10->overflowed = 0;


 VAR_11.keysize = sizeof(TrgmStateKey);
 VAR_11.entrysize = sizeof(TrgmState);
 VAR_11.hcxt = VAR_1;
 VAR_10->states = FUNC_2("Trigram NFA",
          1024,
          &VAR_11,
          VAR_4 | VAR_2 | VAR_3);
 VAR_10->nstates = 0;


 FUNC_0(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.prefix.colors[0] = VAR_0;
 VAR_12.prefix.colors[1] = VAR_0;
 VAR_12.nstate = FUNC_6(VAR_10->regex);

 VAR_13 = FUNC_1(VAR_10, &VAR_12);
 VAR_13->flags |= VAR_9;
 VAR_10->initState = VAR_13;





 while (VAR_10->queue != VAR_7)
 {
  TrgmState *VAR_14 = (TrgmState *) FUNC_4(VAR_10->queue);

  VAR_10->queue = FUNC_5(VAR_10->queue);





  if (VAR_10->overflowed)
   VAR_14->flags |= VAR_8;
  else
   FUNC_7(VAR_10, VAR_14);


  if (VAR_10->arcsCount > VAR_5 ||
   FUNC_3(VAR_10->states) > VAR_6)
   VAR_10->overflowed = 1;
 }
}
