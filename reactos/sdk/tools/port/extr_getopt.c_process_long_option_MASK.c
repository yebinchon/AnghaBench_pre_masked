
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* name; int has_arg; scalar_t__* flag; scalar_t__ val; } ;
struct _getopt_data {char* __nextchar; size_t optind; scalar_t__ optopt; char* optarg; } ;


 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 unsigned char* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (unsigned char*) ;
 int FUNC_6 (int ) ;
 unsigned char* FUNC_7 (int) ;
 int FUNC_8 (unsigned char*,int ,int) ;
 int VAR_0 ;
 int * FUNC_9 (char const*,char) ;
 size_t FUNC_10 (char*) ;
 int FUNC_11 (char*,char*,size_t) ;

__attribute__((used)) static int
FUNC_12 (int VAR_1, char **VAR_2, const char *VAR_3,
       const struct option *VAR_4, int *VAR_5,
       int VAR_6, struct _getopt_data *VAR_7,
       int VAR_8, const char *VAR_9)
{
  char *VAR_10;
  size_t VAR_11;
  const struct option *VAR_12;
  const struct option *VAR_13 = ((void*)0);
  int VAR_14;
  int VAR_15;

  for (VAR_10 = VAR_7->__nextchar; *VAR_10 && *VAR_10 != '='; VAR_10++)
                       ;
  VAR_11 = VAR_10 - VAR_7->__nextchar;



  for (VAR_12 = VAR_4, VAR_14 = 0; VAR_12->name; VAR_12++, VAR_14++)
    if (!FUNC_11 (VAR_12->name, VAR_7->__nextchar, VAR_11)
 && VAR_11 == FUNC_10 (VAR_12->name))
      {

 VAR_13 = VAR_12;
 VAR_15 = VAR_14;
 break;
      }

  if (VAR_13 == ((void*)0))
    {

      unsigned char *VAR_16 = ((void*)0);
      int VAR_17 = 0;
      int VAR_18 = 0;
      int VAR_19 = -1;

      for (VAR_12 = VAR_4, VAR_15 = 0; VAR_12->name; VAR_12++, VAR_15++)
 if (!FUNC_11 (VAR_12->name, VAR_7->__nextchar, VAR_11))
   {
     if (VAR_13 == ((void*)0))
       {

  VAR_13 = VAR_12;
  VAR_19 = VAR_15;
       }
     else if (VAR_6
       || VAR_13->has_arg != VAR_12->has_arg
       || VAR_13->flag != VAR_12->flag
       || VAR_13->val != VAR_12->val)
       {

  if (!VAR_18)
    {
      if (!VAR_8)


        VAR_18 = 1;
      else if (!VAR_16)
        {
   if (FUNC_1 (VAR_14))
     VAR_16 = FUNC_2 (VAR_14);
   else if ((VAR_16 = FUNC_7 (VAR_14)) == ((void*)0))

     VAR_18 = 1;
   else
     VAR_17 = 1;

   if (VAR_16)
     {
       FUNC_8 (VAR_16, 0, VAR_14);
       VAR_16[VAR_19] = 1;
     }
        }
      if (VAR_16)
        VAR_16[VAR_15] = 1;
    }
       }
   }

      if (VAR_16 || VAR_18)
 {
   if (VAR_8)
     {
       if (VAR_18)
  FUNC_4 (VAR_0, FUNC_0("%s: option '%s%s' is ambiguous\n"),
    VAR_2[0], VAR_9, VAR_7->__nextchar);
       else
  {
    FUNC_3 (VAR_0);
    FUNC_4 (VAR_0,
      FUNC_0("%s: option '%s%s' is ambiguous; possibilities:"),
      VAR_2[0], VAR_9, VAR_7->__nextchar);

    for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
      if (VAR_16[VAR_15])
        FUNC_4 (VAR_0, " '%s%s'",
          VAR_9, VAR_4[VAR_15].name);




    FUNC_4 (VAR_0, "\n");
    FUNC_6 (VAR_0);
  }
     }
   if (VAR_17)
     FUNC_5 (VAR_16);
   VAR_7->__nextchar += FUNC_10 (VAR_7->__nextchar);
   VAR_7->optind++;
   VAR_7->optopt = 0;
   return '?';
 }

      VAR_15 = VAR_19;
    }

  if (VAR_13 == ((void*)0))
    {



      if (!VAR_6 || VAR_2[VAR_7->optind][1] == '-'
   || FUNC_9 (VAR_3, *VAR_7->__nextchar) == ((void*)0))
 {
   if (VAR_8)
     FUNC_4 (VAR_0, FUNC_0("%s: unrecognized option '%s%s'\n"),
       VAR_2[0], VAR_9, VAR_7->__nextchar);

   VAR_7->__nextchar = ((void*)0);
   VAR_7->optind++;
   VAR_7->optopt = 0;
   return '?';
 }


      return -1;
    }


  VAR_7->optind++;
  VAR_7->__nextchar = ((void*)0);
  if (*VAR_10)
    {


      if (VAR_13->has_arg)
 VAR_7->optarg = VAR_10 + 1;
      else
 {
   if (VAR_8)
     FUNC_4 (VAR_0,
       FUNC_0("%s: option '%s%s' doesn't allow an argument\n"),
       VAR_2[0], VAR_9, VAR_13->name);

   VAR_7->optopt = VAR_13->val;
   return '?';
 }
    }
  else if (VAR_13->has_arg == 1)
    {
      if (VAR_7->optind < VAR_1)
 VAR_7->optarg = VAR_2[VAR_7->optind++];
      else
 {
   if (VAR_8)
     FUNC_4 (VAR_0,
       FUNC_0("%s: option '%s%s' requires an argument\n"),
       VAR_2[0], VAR_9, VAR_13->name);

   VAR_7->optopt = VAR_13->val;
   return VAR_3[0] == ':' ? ':' : '?';
 }
    }

  if (VAR_5 != ((void*)0))
    *VAR_5 = VAR_15;
  if (VAR_13->flag)
    {
      *(VAR_13->flag) = VAR_13->val;
      return 0;
    }
  return VAR_13->val;
}
