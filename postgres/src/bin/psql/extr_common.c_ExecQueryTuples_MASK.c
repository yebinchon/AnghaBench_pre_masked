
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gexec_flag; scalar_t__ echo; scalar_t__ on_error_stop; int singlestep; } ;
typedef int PGresult ;


 int FUNC_0 (int const*,int,int) ;
 char* FUNC_1 (int const*,int,int) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (char const*) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_6 (char const*) ;
 int VAR_3 ;

__attribute__((used)) static bool
FUNC_7(const PGresult *VAR_4)
{
 bool VAR_5 = 1;
 int VAR_6 = FUNC_3(VAR_4);
 int VAR_7 = FUNC_2(VAR_4);
 int VAR_8,
    VAR_9;







 VAR_2.gexec_flag = 0;

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
 {
  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
  {
   if (!FUNC_0(VAR_4, VAR_8, VAR_9))
   {
    const char *VAR_10 = FUNC_1(VAR_4, VAR_8, VAR_9);


    if (VAR_1)
     goto loop_exit;





    if (VAR_2.echo == VAR_0 && !VAR_2.singlestep)
    {
     FUNC_6(VAR_10);
     FUNC_5(VAR_3);
    }

    if (!FUNC_4(VAR_10))
    {

     VAR_5 = 0;
     if (VAR_2.on_error_stop)
      goto loop_exit;
    }
   }
  }
 }

loop_exit:






 VAR_2.gexec_flag = 1;


 return VAR_5;
}
