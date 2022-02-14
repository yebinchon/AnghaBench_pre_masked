
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct state {int chars; } ;
struct pg_tm {int tm_zone; } ;
typedef int pg_time_t ;
typedef scalar_t__ int32 ;


 int FUNC_0 (struct state*) ;
 scalar_t__ FUNC_1 (int) ;
 struct pg_tm* FUNC_2 (int const*,scalar_t__,struct state*,struct pg_tm*) ;
 int VAR_0 ;

__attribute__((used)) static struct pg_tm *
FUNC_3(pg_time_t const *VAR_1, int32 VAR_2,
    struct pg_tm *VAR_3)
{
 struct pg_tm *VAR_4;


 static struct state *VAR_5 = ((void*)0);

 if (VAR_5 == ((void*)0))
 {

  VAR_5 = (struct state *) FUNC_1(sizeof(struct state));
  if (VAR_5 == ((void*)0))
   return ((void*)0);
  FUNC_0(VAR_5);
 }

 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_5, VAR_3);





 if (VAR_2 != 0)
  VAR_3->tm_zone = VAR_0;
 else
  VAR_3->tm_zone = VAR_5->chars;

 return VAR_4;
}
