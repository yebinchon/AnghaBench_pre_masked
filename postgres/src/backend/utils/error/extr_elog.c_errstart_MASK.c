
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int elevel; int output_to_server; int output_to_client; char const* filename; int lineno; char const* funcname; char const* domain; char const* context_domain; int * assoc_context; int saved_errno; int sqlerrcode; } ;
typedef TYPE_1__ ErrorData ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int *) ;
 int VAR_13 ;
 char const* FUNC_3 (char*) ;
 int * VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int * VAR_17 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (char*) ;
 int VAR_18 ;
 int * VAR_19 ;
 TYPE_1__* VAR_20 ;
 int VAR_21 ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int,int ) ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 char* FUNC_9 (char const*,char) ;
 scalar_t__ VAR_25 ;
 int FUNC_10 (char*,char const*,int) ;

bool
FUNC_11(int VAR_26, const char *VAR_27, int VAR_28,
   const char *VAR_29, const char *VAR_30)
{
 ErrorData *VAR_31;
 bool VAR_32;
 bool VAR_33 = 0;
 int VAR_34;





 if (VAR_26 >= VAR_6)
 {




  if (VAR_1 > 0)
   VAR_26 = VAR_13;
  if (VAR_26 == VAR_6)
  {
   if (VAR_14 == ((void*)0) ||
    VAR_9 ||
    VAR_23)
    VAR_26 = VAR_10;
  }
  for (VAR_34 = 0; VAR_34 <= VAR_21; VAR_34++)
   VAR_26 = FUNC_0(VAR_26, VAR_20[VAR_34].elevel);
 }
 VAR_32 = FUNC_8(VAR_26, VAR_22);


 if (VAR_25 == VAR_2 && VAR_26 != VAR_12)
 {






  if (VAR_0)
   VAR_33 = (VAR_26 >= VAR_6);
  else
   VAR_33 = (VAR_26 >= VAR_16 ||
        VAR_26 == VAR_11);
 }


 if (VAR_26 < VAR_6 && !VAR_32 && !VAR_33)
  return 0;





 if (VAR_8 == ((void*)0))
 {

  FUNC_10("error occurred at %s:%d before error message processing is available\n",
      VAR_27 ? VAR_27 : "(unknown file)", VAR_28);
  FUNC_6(2);
 }





 if (VAR_24++ > 0 && VAR_26 >= VAR_6)
 {





  FUNC_2(VAR_8);







  if (FUNC_7())
  {
   VAR_19 = ((void*)0);
   VAR_17 = ((void*)0);
  }
 }
 if (++VAR_21 >= VAR_7)
 {





  VAR_21 = -1;
  FUNC_4(VAR_13, (FUNC_5("ERRORDATA_STACK_SIZE exceeded")));
 }


 VAR_31 = &VAR_20[VAR_21];
 FUNC_1(VAR_31, 0, sizeof(ErrorData));
 VAR_31->elevel = VAR_26;
 VAR_31->output_to_server = VAR_32;
 VAR_31->output_to_client = VAR_33;
 if (VAR_27)
 {
  const char *VAR_35;


  VAR_35 = FUNC_9(VAR_27, '/');
  if (VAR_35)
   VAR_27 = VAR_35 + 1;
 }
 VAR_31->filename = VAR_27;
 VAR_31->lineno = VAR_28;
 VAR_31->funcname = VAR_29;

 VAR_31->domain = VAR_30 ? VAR_30 : FUNC_3("postgres");

 VAR_31->context_domain = VAR_31->domain;

 if (VAR_26 >= VAR_6)
  VAR_31->sqlerrcode = VAR_3;
 else if (VAR_26 == VAR_15)
  VAR_31->sqlerrcode = VAR_5;
 else
  VAR_31->sqlerrcode = VAR_4;

 VAR_31->saved_errno = VAR_18;




 VAR_31->assoc_context = VAR_8;

 VAR_24--;
 return 1;
}
