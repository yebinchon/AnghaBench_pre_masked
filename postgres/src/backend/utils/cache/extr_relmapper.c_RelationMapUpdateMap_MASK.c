
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RelMapFile ;
typedef int Oid ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int ,int ,int) ;
 int FUNC_4 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_5(Oid VAR_7, Oid VAR_8, bool VAR_9,
      bool VAR_10)
{
 RelMapFile *VAR_11;

 if (FUNC_1())
 {



  if (VAR_9)
   VAR_11 = &VAR_6;
  else
   VAR_11 = &VAR_3;
 }
 else
 {





  if (FUNC_0() > 1)
   FUNC_4(VAR_0, "cannot change relation mapping within subtransaction");

  if (FUNC_2())
   FUNC_4(VAR_0, "cannot change relation mapping in parallel mode");

  if (VAR_10)
  {

   if (VAR_9)
    VAR_11 = &VAR_2;
   else
    VAR_11 = &VAR_1;
  }
  else
  {

   if (VAR_9)
    VAR_11 = &VAR_5;
   else
    VAR_11 = &VAR_4;
  }
 }
 FUNC_3(VAR_11, VAR_7, VAR_8, 1);
}
