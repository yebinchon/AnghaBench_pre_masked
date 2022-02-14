
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fdstate; } ;
typedef size_t File ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t FUNC_0 (char const*,int) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_7 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char const*) ;

File
FUNC_6(const char *VAR_8, bool VAR_9)
{
 File VAR_10;

 FUNC_2(VAR_0);





 VAR_10 = FUNC_0(VAR_8, VAR_4 | VAR_3 | VAR_5 | VAR_6);
 if (VAR_10 <= 0)
 {
  if (VAR_9)
   FUNC_3(VAR_1,
     (FUNC_4(),
      FUNC_5("could not create temporary file \"%s\": %m",
       VAR_8)));
  else
   return VAR_10;
 }


 VAR_7[VAR_10].fdstate |= VAR_2;


 FUNC_1(VAR_10);

 return VAR_10;
}
