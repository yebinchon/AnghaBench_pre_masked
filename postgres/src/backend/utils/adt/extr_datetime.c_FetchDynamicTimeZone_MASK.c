
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int pg_tz ;
struct TYPE_6__ {scalar_t__ type; scalar_t__ value; int token; } ;
typedef TYPE_1__ datetkn ;
struct TYPE_7__ {scalar_t__ tblsize; } ;
typedef TYPE_2__ TimeZoneAbbrevTable ;
struct TYPE_8__ {int * tz; int zone; } ;
typedef TYPE_3__ DynamicZoneAbbrev ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ) ;
 int * FUNC_5 (int ) ;

__attribute__((used)) static pg_tz *
FUNC_6(TimeZoneAbbrevTable *VAR_3, const datetkn *VAR_4)
{
 DynamicZoneAbbrev *VAR_5;


 FUNC_0(VAR_4->type == VAR_0);
 FUNC_0(VAR_4->value > 0 && VAR_4->value < VAR_3->tblsize);

 VAR_5 = (DynamicZoneAbbrev *) ((char *) VAR_3 + VAR_4->value);


 if (VAR_5->tz == ((void*)0))
 {
  VAR_5->tz = FUNC_5(VAR_5->zone);





  if (VAR_5->tz == ((void*)0))
   FUNC_1(VAR_2,
     (FUNC_2(VAR_1),
      FUNC_4("time zone \"%s\" not recognized",
       VAR_5->zone),
      FUNC_3("This time zone name appears in the configuration file for time zone abbreviation \"%s\".",
          VAR_4->token)));
 }
 return VAR_5->tz;
}
