
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bytea ;
typedef int * (* amoptions_function ) (int ,int) ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

bytea *
FUNC_3(amoptions_function VAR_0, Datum VAR_1, bool VAR_2)
{
 FUNC_0(VAR_0 != ((void*)0));


 if (!FUNC_2(FUNC_1(VAR_1)))
  return ((void*)0);

 return VAR_0(VAR_1, VAR_2);
}
