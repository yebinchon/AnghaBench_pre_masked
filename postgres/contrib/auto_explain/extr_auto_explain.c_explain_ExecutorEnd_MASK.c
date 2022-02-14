
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_22__ {double total; } ;
struct TYPE_21__ {int analyze; int buffers; int timing; int summary; TYPE_1__* str; scalar_t__ costs; int settings; scalar_t__ format; int verbose; } ;
struct TYPE_20__ {scalar_t__ instrument_options; TYPE_8__* totaltime; } ;
struct TYPE_19__ {int len; char* data; } ;
typedef TYPE_2__ QueryDesc ;
typedef TYPE_3__ ExplainState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_8__*) ;
 TYPE_3__* FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 double VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (char*,double,char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_15(QueryDesc *VAR_10)
{
 if (VAR_10->totaltime && FUNC_8())
 {
  double VAR_11;





  FUNC_6(VAR_10->totaltime);


  VAR_11 = VAR_10->totaltime->total * 1000.0;
  if (VAR_11 >= VAR_5)
  {
   ExplainState *VAR_12 = FUNC_7();

   VAR_12->analyze = (VAR_10->instrument_options && VAR_1);
   VAR_12->verbose = VAR_9;
   VAR_12->buffers = (VAR_12->analyze && VAR_2);
   VAR_12->timing = (VAR_12->analyze && VAR_7);
   VAR_12->summary = VAR_12->analyze;
   VAR_12->format = VAR_3;
   VAR_12->settings = VAR_6;

   FUNC_0(VAR_12);
   FUNC_5(VAR_12, VAR_10);
   FUNC_3(VAR_12, VAR_10);
   if (VAR_12->analyze && VAR_8)
    FUNC_4(VAR_12, VAR_10);
   if (VAR_12->costs)
    FUNC_2(VAR_12, VAR_10);
   FUNC_1(VAR_12);


   if (VAR_12->str->len > 0 && VAR_12->str->data[VAR_12->str->len - 1] == '\n')
    VAR_12->str->data[--VAR_12->str->len] = '\0';


   if (VAR_3 == VAR_0)
   {
    VAR_12->str->data[0] = '{';
    VAR_12->str->data[VAR_12->str->len - 1] = '}';
   }







   FUNC_9(VAR_4,
     (FUNC_11("duration: %.3f ms  plan:\n%s",
       VAR_11, VAR_12->str->data),
      FUNC_10(1)));

   FUNC_12(VAR_12->str->data);
  }
 }

 if (&FUNC_13)
  FUNC_13(VAR_10);
 else
  FUNC_14(VAR_10);
}
