
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;
struct _getopt_data {int opterr; char* optarg; int optind; char* __nextchar; int __last_nonopt; int __first_nonopt; scalar_t__ __ordering; char optopt; int __initialized; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (int,char**,char const*,struct _getopt_data*,int) ;
 int FUNC_2 (char**,struct _getopt_data*) ;
 int FUNC_3 (int ,char*,char*,char) ;
 int FUNC_4 (int,char**,char const*,struct option const*,int*,int,struct _getopt_data*,int,char*) ;
 int VAR_3 ;
 char* FUNC_5 (char const*,char) ;
 int FUNC_6 (char*,char*) ;

int
FUNC_7 (int VAR_4, char **VAR_5, const char *VAR_6,
      const struct option *VAR_7, int *VAR_8,
      int VAR_9, struct _getopt_data *VAR_10, int VAR_11)
{
  int VAR_12 = VAR_10->opterr;

  if (VAR_4 < 1)
    return -1;

  VAR_10->optarg = ((void*)0);

  if (VAR_10->optind == 0 || !VAR_10->__initialized)
    VAR_6 = FUNC_1 (VAR_4, VAR_5, VAR_6, VAR_10, VAR_11);
  else if (VAR_6[0] == '-' || VAR_6[0] == '+')
    VAR_6++;

  if (VAR_6[0] == ':')
    VAR_12 = 0;




  if (VAR_10->__nextchar == ((void*)0) || *VAR_10->__nextchar == '\0')
    {




      if (VAR_10->__last_nonopt > VAR_10->optind)
 VAR_10->__last_nonopt = VAR_10->optind;
      if (VAR_10->__first_nonopt > VAR_10->optind)
 VAR_10->__first_nonopt = VAR_10->optind;

      if (VAR_10->__ordering == VAR_1)
 {



   if (VAR_10->__first_nonopt != VAR_10->__last_nonopt
       && VAR_10->__last_nonopt != VAR_10->optind)
     FUNC_2 (VAR_5, VAR_10);
   else if (VAR_10->__last_nonopt != VAR_10->optind)
     VAR_10->__first_nonopt = VAR_10->optind;




   while (VAR_10->optind < VAR_4 && (VAR_5[VAR_10->optind][0] != '-' || VAR_5[VAR_10->optind][1] == '\0'))
     VAR_10->optind++;
   VAR_10->__last_nonopt = VAR_10->optind;
 }






      if (VAR_10->optind != VAR_4 && !FUNC_6 (VAR_5[VAR_10->optind], "--"))
 {
   VAR_10->optind++;

   if (VAR_10->__first_nonopt != VAR_10->__last_nonopt
       && VAR_10->__last_nonopt != VAR_10->optind)
     FUNC_2 (VAR_5, VAR_10);
   else if (VAR_10->__first_nonopt == VAR_10->__last_nonopt)
     VAR_10->__first_nonopt = VAR_10->optind;
   VAR_10->__last_nonopt = VAR_4;

   VAR_10->optind = VAR_4;
 }




      if (VAR_10->optind == VAR_4)
 {


   if (VAR_10->__first_nonopt != VAR_10->__last_nonopt)
     VAR_10->optind = VAR_10->__first_nonopt;
   return -1;
 }




      if ((VAR_5[VAR_10->optind][0] != '-' || VAR_5[VAR_10->optind][1] == '\0'))
 {
   if (VAR_10->__ordering == VAR_2)
     return -1;
   VAR_10->optarg = VAR_5[VAR_10->optind++];
   return 1;
 }



      if (VAR_7)
 {
   if (VAR_5[VAR_10->optind][1] == '-')
     {


       VAR_10->__nextchar = VAR_5[VAR_10->optind] + 2;
       return FUNC_4 (VAR_4, VAR_5, VAR_6, VAR_7,
       VAR_8, VAR_9, VAR_10,
       VAR_12, "--");
     }
   if (VAR_9 && (VAR_5[VAR_10->optind][2]
       || !FUNC_5 (VAR_6, VAR_5[VAR_10->optind][1])))
     {
       int VAR_13;
       VAR_10->__nextchar = VAR_5[VAR_10->optind] + 1;
       VAR_13 = FUNC_4 (VAR_4, VAR_5, VAR_6, VAR_7,
       VAR_8, VAR_9, VAR_10,
       VAR_12, "-");
       if (VAR_13 != -1)
  return VAR_13;
     }
 }


      VAR_10->__nextchar = VAR_5[VAR_10->optind] + 1;
    }



  {
    char VAR_14 = *VAR_10->__nextchar++;
    const char *VAR_15 = FUNC_5 (VAR_6, VAR_14);


    if (*VAR_10->__nextchar == '\0')
      ++VAR_10->optind;

    if (VAR_15 == ((void*)0) || VAR_14 == ':' || VAR_14 == ';')
      {
 if (VAR_12)
   FUNC_3 (VAR_3, FUNC_0("%s: invalid option -- '%c'\n"), VAR_5[0], VAR_14);
 VAR_10->optopt = VAR_14;
 return '?';
      }


    if (VAR_15[0] == 'W' && VAR_15[1] == ';' && VAR_7 != ((void*)0))
      {

 if (*VAR_10->__nextchar != '\0')
   VAR_10->optarg = VAR_10->__nextchar;
 else if (VAR_10->optind == VAR_4)
   {
     if (VAR_12)
       FUNC_3 (VAR_3,
         FUNC_0("%s: option requires an argument -- '%c'\n"),
         VAR_5[0], VAR_14);

     VAR_10->optopt = VAR_14;
     if (VAR_6[0] == ':')
       VAR_14 = ':';
     else
       VAR_14 = '?';
     return VAR_14;
   }
 else
   VAR_10->optarg = VAR_5[VAR_10->optind];

 VAR_10->__nextchar = VAR_10->optarg;
 VAR_10->optarg = ((void*)0);
 return FUNC_4 (VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
        0 , VAR_10, VAR_12, "-W ");
      }
    if (VAR_15[1] == ':')
      {
 if (VAR_15[2] == ':')
   {

     if (*VAR_10->__nextchar != '\0')
       {
  VAR_10->optarg = VAR_10->__nextchar;
  VAR_10->optind++;
       }
     else
       VAR_10->optarg = ((void*)0);
     VAR_10->__nextchar = ((void*)0);
   }
 else
   {

     if (*VAR_10->__nextchar != '\0')
       {
  VAR_10->optarg = VAR_10->__nextchar;


  VAR_10->optind++;
       }
     else if (VAR_10->optind == VAR_4)
       {
  if (VAR_12)
    FUNC_3 (VAR_3,
      FUNC_0("%s: option requires an argument -- '%c'\n"),
      VAR_5[0], VAR_14);

  VAR_10->optopt = VAR_14;
  if (VAR_6[0] == ':')
    VAR_14 = ':';
  else
    VAR_14 = '?';
       }
     else


       VAR_10->optarg = VAR_5[VAR_10->optind++];
     VAR_10->__nextchar = ((void*)0);
   }
      }
    return VAR_14;
  }
}
