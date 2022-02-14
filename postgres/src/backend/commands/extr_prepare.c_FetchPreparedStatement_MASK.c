
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PreparedStatement ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (scalar_t__,char const*,int ,int *) ;
 scalar_t__ VAR_3 ;

PreparedStatement *
FUNC_4(const char *VAR_4, bool VAR_5)
{
 PreparedStatement *VAR_6;





 if (VAR_3)
  VAR_6 = (PreparedStatement *) FUNC_3(VAR_3,
              VAR_4,
              VAR_2,
              ((void*)0));
 else
  VAR_6 = ((void*)0);

 if (!VAR_6 && VAR_5)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("prepared statement \"%s\" does not exist",
      VAR_4)));

 return VAR_6;
}
