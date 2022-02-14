
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_generic {int flags; scalar_t__* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,scalar_t__*) ;
 struct config_generic** VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,scalar_t__*,int) ;

void
FUNC_5(const char *VAR_6)
{
 int VAR_7 = FUNC_3(VAR_6);
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
 {
  struct config_generic *VAR_9 = VAR_4[VAR_8];

  if ((VAR_9->flags & VAR_1) != 0 &&
   FUNC_4(VAR_6, VAR_9->name, VAR_7) == 0 &&
   VAR_9->name[VAR_7] == VAR_2)
  {
   FUNC_0(VAR_3,
     (FUNC_1(VAR_0),
      FUNC_2("unrecognized configuration parameter \"%s\"",
       VAR_9->name)));
  }
 }
}
