
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _getopt_data {int __first_nonopt; int __last_nonopt; int optind; } ;



__attribute__((used)) static void
FUNC_0 (char **VAR_0, struct _getopt_data *VAR_1)
{
  int VAR_2 = VAR_1->__first_nonopt;
  int VAR_3 = VAR_1->__last_nonopt;
  int VAR_4 = VAR_1->optind;
  char *VAR_5;






  while (VAR_4 > VAR_3 && VAR_3 > VAR_2)
    {
      if (VAR_4 - VAR_3 > VAR_3 - VAR_2)
 {

   int VAR_6 = VAR_3 - VAR_2;
   int VAR_7;


   for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
     {
       VAR_5 = VAR_0[VAR_2 + VAR_7];
       VAR_0[VAR_2 + VAR_7] = VAR_0[VAR_4 - (VAR_3 - VAR_2) + VAR_7];
       VAR_0[VAR_4 - (VAR_3 - VAR_2) + VAR_7] = VAR_5;
     }

   VAR_4 -= VAR_6;
 }
      else
 {

   int VAR_8 = VAR_4 - VAR_3;
   int VAR_9;


   for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
     {
       VAR_5 = VAR_0[VAR_2 + VAR_9];
       VAR_0[VAR_2 + VAR_9] = VAR_0[VAR_3 + VAR_9];
       VAR_0[VAR_3 + VAR_9] = VAR_5;
     }

   VAR_2 += VAR_8;
 }
    }



  VAR_1->__first_nonopt += (VAR_1->optind - VAR_1->__last_nonopt);
  VAR_1->__last_nonopt = VAR_1->optind;
}
