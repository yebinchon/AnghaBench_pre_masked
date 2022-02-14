
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdarray {int nr_autogrow; } ;


 struct fdarray* FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct fdarray*,int) ;
 int FUNC_2 (struct fdarray*) ;

struct fdarray *FUNC_3(int VAR_0, int VAR_1)
{
 struct fdarray *VAR_2 = FUNC_0(1, sizeof(*VAR_2));

 if (VAR_2 != ((void*)0)) {
  if (FUNC_1(VAR_2, VAR_0)) {
   FUNC_2(VAR_2);
   VAR_2 = ((void*)0);
  } else {
   VAR_2->nr_autogrow = VAR_1;
  }
 }

 return VAR_2;
}
