
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* name; int encoding; } ;
typedef TYPE_1__ pg_encname ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char const*,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*) ;
 unsigned int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char const*) ;

int
FUNC_8(const char *VAR_5)
{
 unsigned int VAR_6 = FUNC_5(VAR_3);
 const pg_encname *VAR_7 = VAR_3,
      *VAR_8 = VAR_7 + VAR_6 - 1,
      *VAR_9;
 int VAR_10;
 char VAR_11[VAR_2],
      *VAR_12;

 if (VAR_5 == ((void*)0) || *VAR_5 == '\0')
  return -1;

 if (FUNC_7(VAR_5) >= VAR_2)
 {




  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("encoding name too long")));

 }
 VAR_12 = FUNC_0(VAR_5, VAR_11);

 while (VAR_8 >= VAR_7)
 {
  VAR_9 = VAR_7 + ((VAR_8 - VAR_7) >> 1);
  VAR_10 = VAR_12[0] - VAR_9->name[0];

  if (VAR_10 == 0)
  {
   VAR_10 = FUNC_6(VAR_12, VAR_9->name);
   if (VAR_10 == 0)
    return VAR_9->encoding;
  }
  if (VAR_10 < 0)
   VAR_8 = VAR_9 - 1;
  else
   VAR_7 = VAR_9 + 1;
 }
 return -1;
}
