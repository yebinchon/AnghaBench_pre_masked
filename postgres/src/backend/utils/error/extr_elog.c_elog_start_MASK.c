
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* filename; int lineno; char const* funcname; int * assoc_context; int saved_errno; } ;
typedef TYPE_1__ ErrorData ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int) ;
 char* FUNC_3 (char const*,char) ;
 int FUNC_4 (char*,char const*,int) ;

void
FUNC_5(const char *VAR_6, int VAR_7, const char *VAR_8)
{
 ErrorData *VAR_9;


 if (VAR_1 == ((void*)0))
 {

  FUNC_4("error occurred at %s:%d before error message processing is available\n",
      VAR_6 ? VAR_6 : "(unknown file)", VAR_7);
  FUNC_2(2);
 }

 if (++VAR_5 >= VAR_0)
 {







  VAR_5 = -1;
  FUNC_0(VAR_2, (FUNC_1("ERRORDATA_STACK_SIZE exceeded")));
 }

 VAR_9 = &VAR_4[VAR_5];
 if (VAR_6)
 {
  const char *VAR_10;


  VAR_10 = FUNC_3(VAR_6, '/');
  if (VAR_10)
   VAR_6 = VAR_10 + 1;
 }
 VAR_9->filename = VAR_6;
 VAR_9->lineno = VAR_7;
 VAR_9->funcname = VAR_8;

 VAR_9->saved_errno = VAR_3;


 VAR_9->assoc_context = VAR_1;
}
