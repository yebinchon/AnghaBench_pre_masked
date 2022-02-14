
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ offset; scalar_t__ is_dst; int lineno; int filename; int * abbrev; int * zone; } ;
typedef TYPE_1__ tzEntry ;


 int FUNC_0 (char*,int ,int ,int ,int ) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int
FUNC_6(tzEntry **VAR_0, int *VAR_1, int VAR_2,
     tzEntry *VAR_3, bool VAR_4)
{
 tzEntry *VAR_5;
 int VAR_6;
 int VAR_7;






 VAR_5 = *VAR_0;
 VAR_6 = 0;
 VAR_7 = VAR_2 - 1;
 while (VAR_6 <= VAR_7)
 {
  int VAR_8 = (VAR_6 + VAR_7) >> 1;
  tzEntry *VAR_9 = VAR_5 + VAR_8;
  int VAR_10;

  VAR_10 = FUNC_5(VAR_3->abbrev, VAR_9->abbrev);
  if (VAR_10 < 0)
   VAR_7 = VAR_8 - 1;
  else if (VAR_10 > 0)
   VAR_6 = VAR_8 + 1;
  else
  {



   if ((VAR_9->zone == ((void*)0) && VAR_3->zone == ((void*)0) &&
     VAR_9->offset == VAR_3->offset &&
     VAR_9->is_dst == VAR_3->is_dst) ||
    (VAR_9->zone != ((void*)0) && VAR_3->zone != ((void*)0) &&
     FUNC_5(VAR_9->zone, VAR_3->zone) == 0))
   {

    return VAR_2;
   }
   if (VAR_4)
   {

    VAR_9->zone = VAR_3->zone;
    VAR_9->offset = VAR_3->offset;
    VAR_9->is_dst = VAR_3->is_dst;
    return VAR_2;
   }

   FUNC_1("time zone abbreviation \"%s\" is multiply defined",
        VAR_3->abbrev);
   FUNC_0("Entry in time zone file \"%s\", line %d, conflicts with entry in file \"%s\", line %d.",
        VAR_9->filename, VAR_9->lineno,
        VAR_3->filename, VAR_3->lineno);
   return -1;
  }
 }




 if (VAR_2 >= *VAR_1)
 {
  *VAR_1 *= 2;
  *VAR_0 = (tzEntry *) FUNC_4(*VAR_0, *VAR_1 * sizeof(tzEntry));
 }

 VAR_5 = *VAR_0 + VAR_6;

 FUNC_3(VAR_5 + 1, VAR_5, (VAR_2 - VAR_6) * sizeof(tzEntry));

 FUNC_2(VAR_5, VAR_3, sizeof(tzEntry));

 return VAR_2 + 1;
}
