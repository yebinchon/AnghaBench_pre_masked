
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef scalar_t__ uint16 ;
typedef int tsearch_readline_state ;
struct TYPE_5__ {scalar_t__ nsubst; } ;
typedef TYPE_1__ DictThesaurus ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,char*,char*,scalar_t__,int ,scalar_t__,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 char* FUNC_5 (char const*,char*) ;
 int FUNC_6 (TYPE_1__*,char*,char*,scalar_t__,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*,char) ;
 scalar_t__ FUNC_10 (char*) ;
 char* FUNC_11 (int *) ;
 int FUNC_12 (int *,char const*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void
FUNC_14(const char *VAR_6, DictThesaurus *VAR_7)
{
 tsearch_readline_state VAR_8;
 uint32 VAR_9 = 0;
 bool VAR_10 = 0;
 char *VAR_11;

 VAR_6 = FUNC_5(VAR_6, "ths");
 if (!FUNC_12(&VAR_8, VAR_6))
  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),
     FUNC_4("could not open thesaurus file \"%s\": %m",
      VAR_6)));

 while ((VAR_11 = FUNC_11(&VAR_8)) != ((void*)0))
 {
  char *VAR_12;
  int VAR_13 = VAR_4;
  char *VAR_14 = ((void*)0);
  uint32 VAR_15 = 0;
  uint32 VAR_16 = 0;

  VAR_12 = VAR_11;


  while (*VAR_12 && FUNC_10(VAR_12))
   VAR_12 += FUNC_8(VAR_12);

  if (FUNC_9(VAR_12, '#') || *VAR_12 == '\0' ||
   FUNC_9(VAR_12, '\n') || FUNC_9(VAR_12, '\r'))
  {
   FUNC_7(VAR_11);
   continue;
  }

  while (*VAR_12)
  {
   if (VAR_13 == VAR_4)
   {
    if (FUNC_9(VAR_12, ':'))
    {
     if (VAR_15 == 0)
      FUNC_2(VAR_1,
        (FUNC_3(VAR_0),
         FUNC_4("unexpected delimiter")));
     VAR_13 = VAR_5;
    }
    else if (!FUNC_10(VAR_12))
    {
     VAR_14 = VAR_12;
     VAR_13 = VAR_2;
    }
   }
   else if (VAR_13 == VAR_2)
   {
    if (FUNC_9(VAR_12, ':'))
    {
     FUNC_6(VAR_7, VAR_14, VAR_12, VAR_9, VAR_15++);
     VAR_13 = VAR_5;
    }
    else if (FUNC_10(VAR_12))
    {
     FUNC_6(VAR_7, VAR_14, VAR_12, VAR_9, VAR_15++);
     VAR_13 = VAR_4;
    }
   }
   else if (VAR_13 == VAR_5)
   {
    if (FUNC_9(VAR_12, '*'))
    {
     VAR_10 = 1;
     VAR_13 = VAR_3;
     VAR_14 = VAR_12 + FUNC_8(VAR_12);
    }
    else if (FUNC_9(VAR_12, '\\'))
    {
     VAR_10 = 0;
     VAR_13 = VAR_3;
     VAR_14 = VAR_12 + FUNC_8(VAR_12);
    }
    else if (!FUNC_10(VAR_12))
    {
     VAR_10 = 0;
     VAR_14 = VAR_12;
     VAR_13 = VAR_3;
    }
   }
   else if (VAR_13 == VAR_3)
   {
    if (FUNC_10(VAR_12))
    {
     if (VAR_12 == VAR_14)
      FUNC_2(VAR_1,
        (FUNC_3(VAR_0),
         FUNC_4("unexpected end of line or lexeme")));
     FUNC_0(VAR_7, VAR_14, VAR_12, VAR_9, VAR_16++, VAR_15, VAR_10);
     VAR_13 = VAR_5;
    }
   }
   else
    FUNC_1(VAR_1, "unrecognized thesaurus state: %d", VAR_13);

   VAR_12 += FUNC_8(VAR_12);
  }

  if (VAR_13 == VAR_3)
  {
   if (VAR_12 == VAR_14)
    FUNC_2(VAR_1,
      (FUNC_3(VAR_0),
       FUNC_4("unexpected end of line or lexeme")));
   FUNC_0(VAR_7, VAR_14, VAR_12, VAR_9, VAR_16++, VAR_15, VAR_10);
  }

  VAR_9++;

  if (!(VAR_16 && VAR_15))
   FUNC_2(VAR_1,
     (FUNC_3(VAR_0),
      FUNC_4("unexpected end of line")));






  if (VAR_16 != (uint16) VAR_16 || VAR_15 != (uint16) VAR_15)
   FUNC_2(VAR_1,
     (FUNC_3(VAR_0),
      FUNC_4("too many lexemes in thesaurus entry")));

  FUNC_7(VAR_11);
 }

 VAR_7->nsubst = VAR_9;

 FUNC_13(&VAR_8);
}
